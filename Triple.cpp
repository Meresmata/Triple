#include "Triple.h"

#ifndef Triple_CPP

#define Triple_CPP


template<typename type_x, typename type_y, typename type_z>
Triple<type_x, type_y, type_z>::Triple() : first(static_cast<type_x>(0)), second(static_cast<type_y>(0)), third(static_cast<type_z>(0)) {}


template<typename type_x, typename type_y, typename type_z>
Triple<type_x, type_y, type_z>::Triple(type_x f, type_y s, type_y t) : first(f), second(s), third(t) {}


template<typename type_x, typename type_y, typename type_z>
type_x Triple<type_x, type_y, type_z>::getFirst() const {
	return first;
}

template<typename type_x, typename type_y, typename type_z>
type_y Triple<type_x, type_y, type_z>::getSecond() const {
	return second;
}

template<typename type_x, typename type_y, typename type_z>
type_z Triple<type_x, type_y, type_z>::getThird() const {
	return third;
}

//compare with other triple

template<typename type_x, typename type_y, typename type_z>
bool operator ==(const Triple<type_x, type_y, type_z>& firstTriple, const Triple<type_x, type_y, type_z>& secondTriple) {
	return ((firstTriple.getFirst() == secondTriple.getFirst()) &&
		(firstTriple.getSecond() == secondTriple.getSecond()) &&
		(firstTriple.getThird() == secondTriple.getThird()));
}


template<typename type_x, typename type_y, typename type_z>
bool operator !=(const Triple<type_x, type_y, type_z>& firstTriple, const Triple<type_x, type_y, type_z>& secondTriple) {
	return (!(firstTriple == secondTriple));
}


template<typename type_x, typename type_y, typename type_z>
bool operator<(const Triple<type_x, type_y, type_z>& firstTriple, const Triple<type_x, type_y, type_z>& secondTriple) {
	return ((firstTriple.getFirst() <= secondTriple.getFirst()) &&
		(firstTriple.getSecond() <= secondTriple.getSecond()) &&
		(firstTriple.getThird() < secondTriple.getThird()));
}


template<typename type_x, typename type_y, typename type_z>
bool operator <=(const Triple<type_x, type_y, type_z>& firstTriple, const Triple<type_x, type_y, type_z>& secondTriple) {
	return ((firstTriple < secondTriple) ||
		(firstTriple == secondTriple));
}




template<typename type_x, typename type_y, typename type_z>
bool operator >(const Triple<type_x, type_y, type_z>& firstTriple, const Triple<type_x, type_y, type_z>& secondTriple) {
	return (!(firstTriple <= secondTriple));
}


template<typename type_x, typename type_y, typename type_z>
bool operator >=(const Triple<type_x, type_y, type_z>& firstTriple, const Triple<type_x, type_y, type_z>& secondTriple) {
	return (!(firstTriple < secondTriple));
}

template<typename type_x = int, typename type_y = int, typename type_z = int>
Triple<type_x, type_y, type_z> operator+(const Triple<type_x, type_y, type_z>& firstTriple, const Triple<type_x, type_y, type_z>& secondTriple)
{
	Triple<type_x, type_y, type_z> erg{(firstTriple.getFirst() + secondTriple.getFirst()),(firstTriple.getSecond() + secondTriple.getSecond()),(firstTriple.getThird() + secondTriple.getThird())};
	return erg;
}

template<typename type_x = int, typename type_y = int, typename type_z = int>
Triple<type_x, type_y, type_z> operator-(const Triple<type_x, type_y, type_z>& firstTriple, const Triple<type_x, type_y, type_z>& secondTriple)
{
	Triple<type_x, type_y, type_z> erg{ (firstTriple.getFirst() - secondTriple.getFirst()),(firstTriple.getSecond() - secondTriple.getSecond()),(firstTriple.getThird() - secondTriple.getThird()) };
	return erg;
}

template<typename type_x = int, typename type_y = int, typename type_z = int>
Triple<type_x, type_y, type_z> operator*(const Triple<type_x, type_y, type_z>& firstTriple, const Triple<type_x, type_y, type_z>& secondTriple)
{
	Triple<type_x, type_y, type_z> erg{ (firstTriple.getFirst() * secondTriple.getFirst()),(firstTriple.getSecond() * secondTriple.getSecond()),(firstTriple.getThird() * secondTriple.getThird()) };
	return erg;
}

template<typename type_x = int, typename type_y = int, typename type_z = int>
Triple<type_x, type_y, type_z> operator/(const Triple<type_x, type_y, type_z>& firstTriple, const Triple<type_x, type_y, type_z>& secondTriple)
{
	Triple<type_x, type_y, type_z> erg{ (firstTriple.getFirst() / secondTriple.getFirst()),(firstTriple.getSecond() / secondTriple.getSecond()),(firstTriple.getThird() / secondTriple.getThird()) };
	return erg;
}


//comparesion with pair
template<typename type_a = int, typename type_b = int, typename type_x = int, typename type_y = int, typename type_z = int>
bool operator ==(const Triple<type_x, type_y, type_z>& firstTriple, const Pair<type_x, type_y>& comparePair) {
	return ((firstTriple.getFirst() == comparePair.getFirst()) &&
		(firstTriple.getSecond() == comparePair.getSecond()));
}

template<typename type_a = int, typename type_b = int, typename type_x = int, typename type_y = int, typename type_z = int>
bool operator!=(const Triple<type_x, type_y, type_z>& firstTriple, const Pair<type_x, type_y>& comparePair) {
	return	(!(firstTriple == comparePair));
}

template<typename type_a = int, typename type_b = int, typename type_x = int, typename type_y = int, typename type_z = int>
bool operator<(const Triple<type_x, type_y, type_z>& firstTriple, const Pair<type_x, type_y>& comparePair) {
	return ((firstTriple.getFirst() <= comparePair.getFirst()) &&
		(firstTriple.getSecond() < comparePair.getSecond()));

}

template<typename type_a = int, typename type_b = int, typename type_x = int, typename type_y = int, typename type_z = int>
bool operator<=(const Triple<type_x, type_y, type_z>& firstTriple, const Pair<type_x, type_y>& comparePair) {
	return ((firstTriple < comparePair) ||
		(firstTriple == comparePair));
}

template<typename type_a = int, typename type_b = int, typename type_x = int, typename type_y = int, typename type_z = int>
bool operator>(const Triple<type_x, type_y, type_z>& firstTriple, const Pair<type_x, type_y>& comparePair) {
	return (!(firstTriple <= comparePair));
}

template<typename type_a = int, typename type_b = int, typename type_x = int, typename type_y = int, typename type_z = int>
bool operator >=(const Triple<type_x, type_y, type_z>& firstTriple, const Pair<type_x, type_y>& comparePair) {
	return (!(firstTriple < comparePair));
}

template<typename type_a = int, typename type_b = int, typename type_x = int, typename type_y = int, typename type_z = int>
Pair<type_a, type_b> operator+(const Triple<type_x, type_y, type_z>& firstTriple, const Pair<type_a, type_b>& comparePair)
{
	Pair< type_a, type_b> erg{ (firstTriple.getFirst() + comparePair.getFirst()),(firstTriple.getSecond() + comparePair.getSecond()) };
	return erg;
}

template<typename type_a = int, typename type_b = int, typename type_x = int, typename type_y = int, typename type_z = int>
Pair<type_a, type_b> operator-(const Triple<type_x, type_y, type_z>& firstTriple, const Pair<type_a, type_b>& comparePair)
{
	Pair< type_a, type_b> erg{ (firstTriple.getFirst() - comparePair.getFirst()),(firstTriple.getSecond() - comparePair.getSecond()) };
	return erg;
}

template<typename type_a = int, typename type_b = int, typename type_x = int, typename type_y = int, typename type_z = int>
Pair<type_a, type_b> operator*(const Triple<type_x, type_y, type_z>& firstTriple, const Pair<type_a, type_b>& comparePair)
{
	Pair< type_a, type_b> erg{ (firstTriple.getFirst() * comparePair.getFirst()),(firstTriple.getSecond() * comparePair.getSecond()) };
	return erg;
}

template<typename type_a = int, typename type_b = int, typename type_x = int, typename type_y = int, typename type_z = int>
Pair<type_a, type_b> operator/(const Triple<type_x, type_y, type_z>& firstTriple, const Pair<type_a, type_b>& comparePair)
{
	Pair< type_a, type_b> erg{ (firstTriple.getFirst() / comparePair.getFirst()),(firstTriple.getSecond() / comparePair.getSecond()) };
	return erg;
}

#endif


