FLAGS=-Wall -Wextra -Werror

all:
	@clear
	@cc *.c -o rush-01 $(FLAGS)

example:
	make all
	@./rush-01 "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2"
	@rm rush-01

empty:
	make all
	@./rush-01 ""
	@./rush-01 "                       "
	@./rush-01 "iafbwucbrwoyrbvouqbvybv"
	@./rush-01 "   qqfdf a   d   fda   "
	@rm rush-01

error:
	make all
	@./rush-01 "4 3 2 1 1 2 2 2 5 3 2 1 1 2 2 2"
	@./rush-01 "4 3 2 1 1 2 2 2 4 3 2 1 1 2 4 2"
	@rm rush-01
