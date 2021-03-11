#pragma once
#ifndef CANCELEXCEPTION_H_GUARD_
#define CANCELEXCEPTION_H_GUARD_

#include <iostream>

using namespace std;

class CancelException {
public:
	friend ostream& operator<<(ostream& ot, const CancelException i) {
		ot << "Cancel is successful";
		return ot;
	}
};

#endif // !CANCELEXCEPTION_H_GUARD_
