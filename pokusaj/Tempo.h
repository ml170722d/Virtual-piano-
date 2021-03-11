#pragma once

#ifndef TEMPO_H_GUARD_
#define TEMPO_H_GUARD_

#include <vector>

#include "MusicSymbol.h"
#include "Duration.h"

using namespace std;

class Tempo {
	Duration trajanje, popunjenost;
	vector<MusicSymbol*> takt;
public:
	Tempo(Duration& d) : trajanje(d) { }
	
	Duration& getTrajanje();
	Duration& getPopunjenost();
	
	bool is_full();
	MusicSymbol* add(MusicSymbol* sym);
	void fill();

	auto begin() { return takt.begin(); }
	auto end() { return takt.end(); }


};

#endif // !TEMPO_H_GUARD_
