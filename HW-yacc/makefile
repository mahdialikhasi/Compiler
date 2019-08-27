
lexlib=l
yacclib=y
bindir=.
rm=/bin/rm -f
mv=/bin/mv -f
targets=simple-expr simple-varexpr

all: $(targets) 

$(targets): %: %.y
	@echo "compiling yacc file:" $<
	@echo "output file:" $@
	bison -o$@.tab.c -d $<
	flex -o$@.lex.c $@.lex
	gcc -o $(bindir)/$@ $@.tab.c $@.lex.c -l$(yacclib) -l$(lexlib)
	$(rm) $@.tab.c $@.tab.h $@.lex.c

test: $(targets) 
	@echo "testing simple-expr ..."
	echo "12" | $(bindir)/simple-expr
	echo "a=2+3+5" | $(bindir)/simple-expr
	echo "(a (b c) d)" | $(bindir)/usingcpp

clean:
	$(rm) $(targets) 
	$(rm) *.tab.h *.tab.c *.lex.c
	$(rm) *.pyc
