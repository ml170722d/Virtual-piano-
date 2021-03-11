#pragma once
#ifndef PAUSE_H_GUARD_
#define PAUSE_H_GUARD_

#include "MusicSymbol.h"

class Pause : public MusicSymbol {
public:
	Pause(int del, int ime = 1) : MusicSymbol(del,ime) {}
	Pause(Duration d) : MusicSymbol(d) {}
	MusicSymbol * divide() override;
	bool is_Note() override { return false; }
};

#endif // !PAUSE_H_GUARD_

///RADI!!!