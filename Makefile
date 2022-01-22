run: build

build: lex.yy.c syntax.tab.c semantic.c header.h
	gcc -g lex.yy.c syntax.tab.c semantic.c -o kinder -lm
	
syntax.tab.c: syntax.y
	bison -d syntax.y

lex.yy.c: lexer.l
	flex lexer.l
	
semantic: semantic.o
	gcc semantic.o -o semantic

semantic.o: semantic.c
	gcc -c semantic.c -o semantic.o

draw: 
	./kinder < test.kinder

clean:
	@rm -f *.o syntax.tab.c syntax.tab.h lex.yy.c
	@rm -f kinder 
	@rm -f *.svg
