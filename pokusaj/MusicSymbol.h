#pragma once

#ifndef MUSICSYMBOL_H_GUARD_
#define MUSICSYMBOL_H_GUARD_

#include<iostream>

#include "Duration.h"
#include "CantDoError.h"

using namespace std;

class MusicSymbol{

protected:

	Duration dur;

public:

	MusicSymbol(int del, int ime = 1) : dur(del, ime) {}
	MusicSymbol(Duration d) : dur(d) {}
	~MusicSymbol() {}

	Duration getSymDur() { return this->dur; }

	/*splits symbol into two symbols (side efect)*/
	virtual MusicSymbol* divide() { throw CantDoError(); }

	virtual bool is_Note() = 0;
	
	virtual pair<char, int> getNota() { throw CantDoError(); }
	virtual int getMidi() { throw CantDoError(); }


};
#endif // !MUSICSYMBOL_H_GUARD_

///RADI!!!