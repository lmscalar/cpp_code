#ifndef intlist_h
#define intlist_h

#include <iostream>


class IntList {

		IntList();
		void AddToEnd(int k);
		void Print(ostream &output) const;

	private:
		static cosnt int SIZE = 10;  //initial size 
		int *Items;
		int numItems;
		int arraySize;

};



#endef /* intlist_h */
