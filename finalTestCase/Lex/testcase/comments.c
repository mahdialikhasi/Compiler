/*
 * networking.c
 *
 *  Created on: Jan 29, 2018
 *      Author: zali
 */
#include "networking.h"
#include <errno.h>
#include "string.h"

const int BUFSIZE = 1000;

int init_user_net(struct contact_info *user, char *ip, int port_no){
	int optval = 1;
	bzero((char *) &user->addr, sizeof(user->addr));
	user->addr.sin_family = AF_INET;
	user->addr.sin_addr.s_addr = inet_addr(ip);
	user->addr.sin_port = htons((unsigned short)port_no);
	user->sockfd = socket(AF_INET, SOCK_DGRAM, 0);
	if (user->sockfd < 0){
	    printf("%s","ERROR opening socket");
		return -1;
	}
	setsockopt(user->sockfd, SOL_SOCKET, SO_REUSEADDR,
		 (const void *)&optval , sizeof(int));
	//printf("init contact with port no: %d\n", ntohs(user->addr.sin_port));
    if (bind(user->sockfd, (struct sockaddr *) &user->addr, sizeof(user->addr)) < 0)
    	printf("%s","ERROR on binding");
    	return -1;
    return 0;
}

int recv_msg( struct contact_info *reciever, char *msg, char* sender_ip, int *sender_port){
	int sender_addr_len; /* byte size of client's address */
	struct sockaddr_in sender_addr;
	int n; /* message byte size */

	sender_addr_len = sizeof(sender_addr);

	/*
	 * recvfrom: receive a UDP datagram from a client
	 */
	char msg_buff[BUFSIZE];
	bzero(msg, BUFSIZE);
	n = recvfrom(reciever->sockfd,  msg_buff, BUFSIZE, 0, (struct sockaddr *) &sender_addr, (socklen_t *)&sender_addr_len);
	if (n < 0){
	    //error("ERROR in recvfrom");
		printf("Error: %d",errno);
		return n;
	}
	msg_buff[n]=0;
	/*
	 * gethostbyaddr: determine who sent the datagram
	 */
	struct hostent *sender_info; /* client host info */
	sender_info = gethostbyaddr((const char *)&sender_addr.sin_addr.s_addr,
			  sizeof(sender_addr.sin_addr.s_addr), AF_INET);
	if (sender_info == NULL){
	    printf("%s\n","ERROR on gethostbyaddr");
		return -1;
	}
	bzero(msg, 35);
	strcpy(sender_ip,inet_ntoa(sender_addr.sin_addr));
	strcpy(msg,msg_buff);
	*sender_port = ntohs(sender_addr.sin_port);
	//printf("server received from %s:%d %d bytes: %s\n", sender_ip,*sender_port, n, msg);

	return 0;
}
int send_msg(struct contact_info sender_info, char *msg, char* reciever_ip, int reciever_port){
	int sockfd, n;
	int reciever_len;
	struct sockaddr_in reciever_addr;
	struct hostent *reciever;

	/* socket: create the socket */
	sockfd = socket(AF_INET, SOCK_DGRAM, 0);
	if (sockfd < 0){
		printf("ERROR opening socket");
		return -1;
	}

	/* gethostbyname: get the server's DNS entry */
	reciever = gethostbyname(reciever_ip);
	if (reciever == NULL) {
		printf("ERROR, no such host as %s\n", reciever_ip);
		return -1;
	}
    /* build the server's Internet address */
    bzero((char *) &reciever_addr, sizeof(reciever_addr));
	reciever_addr.sin_family = AF_INET;
	bcopy((char *)reciever->h_addr, (char *)&reciever_addr.sin_addr.s_addr, reciever->h_length);
	reciever_addr.sin_port = htons(reciever_port);

	/* send the message to the server */
	reciever_len = sizeof(reciever_addr);
	n = sendto(sender_info.sockfd, msg, strlen(msg), 0, (struct sockaddr*)&reciever_addr, reciever_len);
	if (n < 0){
		printf("%s\n","ERROR in sendto");
		return -1;
	}
	//printf("message is sent with size%d\n",strlen(msg));
	//
	return 0;
}
