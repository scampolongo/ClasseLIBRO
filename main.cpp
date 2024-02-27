
#include <iostream> // OnLineCompiler:[https://codeboard.io/projects/302677]
#include <cstdio>
#include "libro.h"

int main() {

	libro *vl;   // puntatore ad oggetto libro, si trasformerà con la new in un vettore di libri

	int libri;

	cout << "Quanti libri? -> ";
	cin  >>  libri; // Meglio controllare che libri >= 1

	vl = new libro[libri]; // NB: la new chiama automaticamente il costruttore

	for (int i = 0; i < libri; i++)
		vl[i].print();

	delete [] vl; // NB: la delete opera su piu' libri e chiama automaticamente il distruttore
	
	cout << "Fine!";

	return 0;

}

// Salva nel file "main.cpp"
//--------------------------

/** Esercizio:

Aggiungere a "libro" i campi: autore, casa editrice, numero pagine
e completa il programma con un menu' ed altri metodi a piacere.

**/
