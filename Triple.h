#ifndef Triple_H

#define Triple_H

template <typename type_a, typename type_b> class Pair;

template<typename type_x = int, typename type_y = int, typename type_z = int>
class Triple {
	public:
		Triple(type_x f, type_y s, type_y t);
		
		type_x getFirst();
		type_y getSecond();
		type_z getThird();
		
		bool operator<(Triple secondTriple);
		bool operator <=(Triple secondTriple);
		bool operator ==(Triple secondTriple);
		bool operator >(Triple secondTriple);
		bool operator >=(Triple secondTriple);
		
				
	//#ifdef Pair_H
		bool operator<(Pair<type_x, type_y> comparePair);
		bool operator <=(Pair<type_x, type_y> comparePair);
		bool operator ==(Pair<type_x, type_y> comparePair);
		bool operator >(Pair<type_x, type_y> comparePair);
		bool operator >=(Pair<type_x, type_y> comparePair);
		
	//#endif
	private:
		const type_x first;
		const type_y second;
		const type_z third;
};

#include <Triple.cpp> //musst be included because
                    //we're using templates

#endif


