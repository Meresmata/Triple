#ifndef Triple_H

#define Triple_H

template<typename type_a, typename type_b> class Pair;

template<typename type_x = int, typename type_y = int, typename type_z = int>
class Triple {
public:
	Triple();
	Triple(type_x f, type_y s, type_y t);

	inline type_x getFirst() const;
	inline type_y getSecond() const;
	inline type_z getThird() const;

private:
	type_x first;
	type_y second;
	type_z third;
};

//compare with other triple
template<typename type_x = int, typename type_y = int, typename type_z = int>
bool operator ==(const Triple<type_x, type_y, type_z>& firstTriple, const Triple<type_x, type_y, type_z>& secondTriple);

template<typename type_x = int, typename type_y = int, typename type_z = int>
bool operator!=(const Triple<type_x, type_y, type_z>& firstTriple, const Triple<type_x, type_y, type_z>& secondTriple);

template<typename type_x = int, typename type_y = int, typename type_z = int>
bool operator<(const Triple<type_x, type_y, type_z>& firstTriple, const Triple<type_x, type_y, type_z>& secondTriple);

template<typename type_x = int, typename type_y = int, typename type_z = int>
bool operator<=(const Triple<type_x, type_y, type_z>& firstTriple, const Triple<type_x, type_y, type_z>& secondTriple);

template<typename type_x = int, typename type_y = int, typename type_z = int>
bool operator>(const Triple<type_x, type_y, type_z>& firstTriple, const Triple<type_x, type_y, type_z>& secondTriple);

template<typename type_x = int, typename type_y = int, typename type_z = int>
bool operator>=(const Triple<type_x, type_y, type_z>& firstTriple, const Triple<type_x, type_y, type_z>& secondTriple);

//arithmetic opertors
template<typename type_x = int, typename type_y = int, typename type_z = int>
Triple<type_x, type_y, type_z> operator+(const Triple<type_x, type_y, type_z>& firstTriple, const Triple<type_x, type_y, type_z>& secondTriple);

template<typename type_x = int, typename type_y = int, typename type_z = int>
Triple<type_x, type_y, type_z> operator-(const Triple<type_x, type_y, type_z>& firstTriple, const Triple<type_x, type_y, type_z>& secondTriple);

template<typename type_x = int, typename type_y = int, typename type_z = int>
Triple<type_x, type_y, type_z> operator*(const Triple<type_x, type_y, type_z>& firstTriple, const Triple<type_x, type_y, type_z>& secondTriple);

template<typename type_x = int, typename type_y = int, typename type_z = int>
Triple<type_x, type_y, type_z> operator/(const Triple<type_x, type_y, type_z>& firstTriple, const Triple<type_x, type_y, type_z>& secondTriple);


//comparesion with pair
template<typename type_a = int, typename type_b = int, typename type_x = int, typename type_y = int, typename type_z = int>
bool operator==(const Triple<type_x, type_y, type_z>& firstTriple, const Pair<type_a, type_b>& comparePair);

template<typename type_a = int, typename type_b = int, typename type_x = int, typename type_y = int, typename type_z = int>
bool operator!=(const Triple<type_x, type_y, type_z>& firstTriple, const Pair<type_a, type_b>& comparePair);

template<typename type_a = int, typename type_b = int, typename type_x = int, typename type_y = int, typename type_z = int>
bool operator<(const Triple<type_x, type_y, type_z>& firstTriple, const Pair<type_a, type_b>& comparePair);

template<typename type_a = int, typename type_b = int, typename type_x = int, typename type_y = int, typename type_z = int>
bool operator<=(const Triple<type_x, type_y, type_z>& firstTriple, const Pair<type_a, type_b>& comparePair);

template<typename type_a = int, typename type_b = int, typename type_x = int, typename type_y = int, typename type_z = int>
bool operator >(const Triple<type_x, type_y, type_z>& firstTriple, const Pair<type_a, type_b>& comparePair);

template<typename type_a = int, typename type_b = int, typename type_x = int, typename type_y = int, typename type_z = int>
bool operator >=(const Triple<type_x, type_y, type_z>& firstTriple, const Pair<type_a, type_b>& comparePair);

//arithmetic opertors
template<typename type_a = int, typename type_b = int, typename type_x = int, typename type_y = int, typename type_z = int>
Pair< type_a, type_b> operator+(const Triple<type_x, type_y, type_z>& firstTriple, const Pair<type_a, type_b>& comparePair);

template<typename type_a = int, typename type_b = int, typename type_x = int, typename type_y = int, typename type_z = int>
Pair< type_a, type_b> operator-(const Triple<type_x, type_y, type_z>& firstTriple, const Pair<type_a, type_b>& comparePair);

template<typename type_a = int, typename type_b = int, typename type_x = int, typename type_y = int, typename type_z = int>
Pair< type_a, type_b> operator*(const Triple<type_x, type_y, type_z>& firstTriple, const Pair<type_a, type_b>& comparePair);

template<typename type_a = int, typename type_b = int, typename type_x = int, typename type_y = int, typename type_z = int>
Pair< type_a, type_b> operator/(const Triple<type_x, type_y, type_z>& firstTriple, const Pair<type_a, type_b>& comparePair);

#include "Triple.cpp" //musst be included because
					//we're using templates

#endif


