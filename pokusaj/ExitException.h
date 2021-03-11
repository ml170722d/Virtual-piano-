#pragma once
#ifndef EXITEXCEPTION_H_GUARD_
#define EXITEXCEPTION_H_GUARD_

#include<iostream>

using namespace std;

class ExitException {
public:
	friend ostream& operator<<(ostream& ot, const ExitException i) {
		ot << "Exit is successful" << endl << "Good buy and have a nice day\t:)";
		return ot;
	}
};


#endif // !EXITEXCEPTION_H_GUARD_
