#pragma once
#ifndef CANTDOERROR_H_GUARD_
#define CANTDOERROR_H_GUARD_

#include <iostream>

using namespace std;

class CantDoError {
	friend ostream& operator<<(ostream& ot, const CantDoError e) {
		ot << "Cant do this";
		return ot;
	}
};

#endif // !CANTDOERROR_H_GUARD_
