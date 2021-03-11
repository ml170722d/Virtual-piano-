#pragma once

#ifndef DURATION_H_GUARD_
#define DURATION_H_GUARD_

#include <iostream>

#include "CantDoError.h"

using namespace std;

class Duration
{
	pair<int, int> dur; //1 <=> 1/8 ; 2 <=> 1/4 (2/8)

public:
	Duration(int del, int br = 1) : dur(br,del) {}
	Duration() = default;
	~Duration() {}
	
	friend bool operator>(const Duration &d1, const Duration &d2);
	friend bool operator<(const Duration &d1, const Duration &d2);
	Duration operator+(Duration d);
	Duration& operator=(Duration d);
	bool operator==(Duration& d);
	bool operator>=(Duration& d);
	bool operator<=(Duration& d);

	void reduce();
	Duration divide();
	int getDur();

	int getDel() { return dur.second; }
	int getBr() { return dur.first; }

	friend ostream& operator<<(ostream& it, const Duration& d);
};

#endif // !DURATION_H_GUARD_


///RADI!!!!!!