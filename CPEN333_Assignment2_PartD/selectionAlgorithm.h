#include <stdio.h>
#include <iostream>
#include <string>
#include "academicRecords.h"

using namespace std;

#ifndef __selectionAlgorithm__
#define __selectionAlgorithm__

int numCourses = 5;
float minGrades[5] = { 80, 85, 75, 50, 67};
string programList[5] = {"CPEN", "ELEC", "MECH", "ENPH", "CIVL"};

struct placementOrder {
	string firstChoice;
	string secondChoice;
	string thirdChoice;
};

class selectionAlgorithm {
public:
	academicRecords* records;
	placementOrder selectedOrder;
	float gpa;
	string result;
	string personalStatement;
private:
	void determineProgram()
	{
		gpa = records->getGPA();
		int firstIndex;
		int secondIndex;
		int thirdIndex;
		for (int i = 0; i < numCourses; i++) {
			if (selectedOrder.firstChoice.compare(programList[i]) == 0)
				firstIndex = i;
			else if (selectedOrder.secondChoice.compare(programList[i]) == 0)
				secondIndex = i;
			else if (selectedOrder.thirdChoice.compare(programList[i]) == 0)
				thirdIndex = i;
		}
		if (gpa >= minGrades[firstIndex]) {
			records->updateProgram(selectedOrder.firstChoice);
		}
		else if (gpa >= minGrades[secondIndex]) {
			records->updateProgram(selectedOrder.secondChoice);
		}
		else{
			records->updateProgram(selectedOrder.thirdChoice);
		}
	}

};
#endif // !__selectionAlgorithm__
