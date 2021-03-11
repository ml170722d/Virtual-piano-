#include "Pause.h"

MusicSymbol * Pause::divide()
{
	Pause* pauza = new Pause(this->dur.divide());
	return pauza;

}