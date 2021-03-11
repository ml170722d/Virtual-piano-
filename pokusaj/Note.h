#pragma once
#ifndef NOTE_H_GUARD_
#define NOTE_H_GUARD_

#include <map>

#include "MusicSymbol.h"

using namespace std;

class Note : public MusicSymbol
{
	pair<char, int> nota;
	int midi;

public:
	Note(char dirka, int oktava, int midii, int del, int ime = 1) : MusicSymbol(del,ime), nota(dirka, oktava), midi(midii) { }
	Note(pair<char, int> n, int midii, Duration d) : MusicSymbol(d), nota(n), midi(midii) {}
	~Note() { }
	
	/*splits note into two notes (side efect)*/
	MusicSymbol* divide() override;

	bool is_Note() override { return true; }

	pair<char, int> getNota() override { return this->nota; }
	int getMidi() override { return midi; }


};

#endif // !NOTE_H_GUARD_


///RADI!!!