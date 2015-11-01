#include <Triple.h>

#ifndef Triple_CPP

#define Triple_CPP


template<typename type_x, typename type_y, typename type_z>
Triple<type_x,type_y,type_z>::Triple(type_x f, type_y s, type_y t): first(f), second(s), third(t){}


template<typename type_x, typename type_y, typename type_z>
type_x Triple<type_x,type_y,type_z>::getFirst() {
		return first;
}
		
template<typename type_x, typename type_y, typename type_z>
type_y Triple<type_x,type_y,type_z>::getSecond() {
		return second;
}
		
template<typename type_x, typename type_y, typename type_z>
type_z Triple<type_x,type_y,type_z>::getThird() {
		return third;
}
		
template<typename type_x, typename type_y, typename type_z>
bool Triple<type_x,type_y,type_z>::operator<(Triple secondTriple) {
		if ((this->first <= secondTriple.first) &&
			(this->second <= secondTriple.second) &&
			(this->third < secondTriple.third))
				return true;
		else
				return false;
}
		
template<typename type_x, typename type_y, typename type_z>
bool Triple<type_x,type_y,type_z>::operator <=(Triple secondTriple) {
		if ((this->first <= secondTriple.first) &&
			(this->second <= secondTriple.second) &&
			(this->third <= secondTriple.third))
				return true;
		else
				return false;
}
		
template<typename type_x, typename type_y, typename type_z>
bool Triple<type_x,type_y,type_z>::operator ==(Triple secondTriple) {
		if ((this->first == secondTriple.first) &&
			(this->second == secondTriple.second) &&
			(this->third == secondTriple.third))
				return true;
		else
				return false;
}
		
template<typename type_x, typename type_y, typename type_z>
bool Triple<type_x,type_y,type_z>::operator >(Triple secondTriple) {
		if (!(*this <= secondTriple))
				return true;
		else
				return false;
}
				
template<typename type_x, typename type_y, typename type_z>
bool Triple<type_x,type_y,type_z>::operator >=(Triple secondTriple) {
		if (!(*this < secondTriple))
				return true;
		else
				return false;
}
			
				
//#ifdef Pair_H
	
template<typename type_x, typename type_y, typename type_z>
bool Triple<type_x,type_y,type_z>::operator<(Pair<type_x, type_y> comparePair) {
			if ((this->first <= comparePair.getFirst()) &&
				(this->second < comparePair.getSecond()))
				return true;
			else
				return false;
		}
		
template<typename type_x, typename type_y, typename type_z>
bool Triple<type_x,type_y,type_z>::operator <=(Pair<type_x, type_y> comparePair) {
		if ((this->first <= comparePair.getFirst()) &&
			(this->second <= comparePair.getSecond()))
				return true;
		else
				return false;
}
		
template<typename type_x, typename type_y, typename type_z>
bool Triple<type_x,type_y,type_z>::operator ==(Pair<type_x, type_y> comparePair) {
		if ((this->first == comparePair.getFirst()) &&
			(this->second == comparePair.getSecond()))
				return true;
		else
				return false;
}
		
template<typename type_x, typename type_y, typename type_z>
bool Triple<type_x,type_y,type_z>::operator >(Pair<type_x, type_y> comparePair) {
			if (!(*this <= comparePair))
				return true;
			else
				return false;
}
				
template<typename type_x, typename type_y, typename type_z>
bool Triple<type_x,type_y,type_z>::operator >=(Pair<type_x, type_y> comparePair) {
			if (!(*this < comparePair))
				return true;
			else
				return false;
}

	
//#endif

#endif


