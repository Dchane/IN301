all:fclean run

run: genere algos
	./genere
	./algos

genere: genere.c constantes.h
	gcc -Wall genere.c -o genere

algos: algos.c constantes.h
	gcc -Wall algos.c -o algos

clean:
	rm -f genere
	rm -f algos

fclean: clean
	rm -f nombres

