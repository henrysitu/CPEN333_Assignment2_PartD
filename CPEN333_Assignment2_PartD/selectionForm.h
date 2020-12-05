#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

#ifndef __selectionForm__
#define __selectionForm__

struct placementOrder {
	string firstChoice;
	string secondChoice;
	string thirdChoice;
};

class selectionForm {
public:
	placementOrder selectedOrder;
	string personalStatement;
	selectionForm(placementOrder order, string statement) {
		selectedOrder = order;
		personalStatement = statement;
	}
};
#endif // !__selectionForm__
