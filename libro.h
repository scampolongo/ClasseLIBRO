#include <iostream> // OnLineCompiler:[https://codeboard.io/projects/302677]
#include <cstdio>
#include <cstring>
using namespace std;

#define LTIT 40

class  libro {
	
		char titolo[40 + 1];
		double prezzo;
		
	public:

		libro     (void);   // Costruttore
		~libro     (void);   // Distruttore
		void print();
		
};

libro::~libro(void) {
	static int cont = 0; // mantiene memoria
	cout   << "Richiamo distruttore N." << ++cont << endl;
}

libro::libro(void) {
	strncpy(titolo, "Niente", LTIT);
	prezzo = 0;
}

void libro::print() {
	cout << "Titolo -> " << titolo;
	cout << ", prezzo -> " << prezzo << endl;
}
