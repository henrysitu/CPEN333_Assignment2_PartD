#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

#ifndef __selectionAlgorithm__
#define __selectionAlgorithm__

struct placementOrder {
	string firstChoice;
	string secondChoice;
	string thirdChoice;
};

class selectionAlgorithm {
private:
	placementOrder selectedOrder;
	float gpa;
	string result;
	string personalStatement;

};
#endif // !__selectionAlgorithm__
