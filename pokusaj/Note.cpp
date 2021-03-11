#include "Note.h"

MusicSymbol * Note::divide() {
	Note* nota = new Note(this->nota, this->midi, this->dur.divide());
	return nota;
}