ARG_VALID_1=4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2
ARG_VALID_2=4 2 1 2 1 2 4 2 3 3 2 1 2 1 3 3
ARG_VALID_3=2 2 3 1 1 3 2 3 2 2 3 1 1 2 2 3

ARG_INVALID_1=4 3 2 1 1 2 2 2 5 3 2 1 1 2 2 2
ARG_INVALID_2=4 3 2 1 1 2 2 2 4 3 2 1 1 2 4 2
ARG_INVALID_3=4 3 2 1   1 2 2 2   4 3 2 1   1 2 2 2

ARG_ERROR_1=A 3 2 l l 2 2 2 A 3 2 l l 2 2 2
ARG_ERROR_2=4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2 3 4 5 6
ARG_ERROR_3=   qqfdf a   d   fda   

all:
	@clear
	@cc ex00/*.c -o rush-01 -Wall -Wextra -Werror

valid:
	make all
	@echo "Tableros válidos:"

	@echo "\nArgumento: '$(ARG_VALID_1)' (subject)\n"
	@echo "Salida:\n"
	@./rush-01 "$(ARG_VALID_1)"

	@echo "\nArgumento: '$(ARG_VALID_2)'\n"
	@./rush-01 "$(ARG_VALID_2)"

	@echo "\nArgumento: '$(ARG_VALID_3)'\n"
	@./rush-01 "$(ARG_VALID_3)"

invalid:
	make all
	@echo "Tableros inválidos."

	@echo "\nArgumento: $(ARG_INVALID_1) (un número mayor que 'n')\n"
	@echo "Salida:\n"
	@./rush-01 "$(ARG_INVALID_1)"

	@echo "\nArgumento: $(ARG_INVALID_2) (configuración no válida)\n"
	@echo "Salida:\n"
	@./rush-01 "$(ARG_INVALID_2)"

	@echo "\nArgumento: $(ARG_INVALID_3) (estructura incorrecta)\n"
	@echo "Salida:\n"
	@./rush-01 "$(ARG_INVALID_3)"

error:
	make all
	@echo "Tableros incorrectos:"

	@echo "\nArgumento: ninguno\n"
	@echo "Salida:\n"
	@./rush-01

	@echo "\nArgumento: cadena vacía:\n"
	@echo "Salida:\n"
	@./rush-01 ""

	@echo "\nArgumento: $(ARG_ERROR_1)\n"
	@echo "Salida:\n"
	@./rush-01 "$(ARG_ERROR_1)"

	@echo "\nArgumento: $(ARG_ERROR_2)\n"
	@echo "Salida:\n"
	@./rush-01 "$(ARG_ERROR_2)"

	@echo "\nArgumento: $(ARG_ERROR_3)\n"
	@echo "Salida:\n"
	@./rush-01 "$(ARG_ERROR_3)"
