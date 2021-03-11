#include "Duration.h"

bool operator>(const Duration & d1, const Duration & d2) {
	if (d1.dur.second == d2.dur.second) {
		return d1.dur.second > d2.dur.second;
	}
	if (d1.dur.second < d2.dur.second){
		return d1.dur.first * 2 > d2.dur.first;
	}
	else {
		return d1.dur.first > d2.dur.first * 2;
	}
}

bool operator<(const Duration & d1, const Duration & d2){
	return d2 > d1;
}

Duration Duration::operator+(Duration d)
{
	Duration dd;
	if (this->getDur() == d.getDur() ) {
		dd.dur.first = this->dur.first + d.dur.first;
		dd.dur.second = this->dur.second;
	}
	else {
		if (this->getDur() > d.getDur()) {
			dd.dur.first = this->dur.first * 2 + d.dur.first;
			dd.dur.second = d.dur.second;
		}
		else {
			dd.dur.first = this->dur.first + d.dur.first * 2;
			dd.dur.second = this->dur.second;
		}
	}
	dd.reduce();
	return dd;
}

bool Duration::operator==(Duration & d)
{
	return false;
}

bool Duration::operator>=(Duration & d)
{
	if (*this > d || *this == d) { return true; }
	return false;
}

bool Duration::operator<=(Duration & d)
{
	if (*this < d || *this == d) { return true; }
	return false;
}

void Duration::reduce()
{
	if (this->dur.first % 2 == 0 && this->dur.second == 8) {
		this->dur.second /= 2;
		this->dur.first /= 2;
	}
}

Duration & Duration::operator=(Duration d) {
	this->dur.first = d.dur.first;
	this->dur.second = d.dur.second;
	return *this;
}

Duration Duration::divide(){
	if (this->dur.second == 8) throw CantDoError();
	Duration nova(this->dur.second *= 2, this->dur.first);
	return nova;
}

int Duration::getDur(){
	if (dur.second == 8)
		return 1;
	return 2;
}

ostream & operator<<(ostream & it, const Duration & d) {
	it << d.dur.first << " " << d.dur.second;
	return it;
}