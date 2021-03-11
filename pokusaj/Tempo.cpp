#include "Tempo.h"

Duration & Tempo::getTrajanje()
{
	return this->trajanje;
}

Duration & Tempo::getPopunjenost()
{
	return this->popunjenost;
}

bool Tempo::is_full()
{
	if (trajanje == popunjenost) {
		return true;
	}
	return false;
}

MusicSymbol * Tempo::add(MusicSymbol* sym)
{
	if (is_full()) { return nullptr; }
//	if (trajanje >= popunjenost + sym->getSymDur()) {

//	}
}