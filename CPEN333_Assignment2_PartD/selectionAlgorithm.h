#include <stdio.h>
#include <iostream>
#include <string>
#include "academicRecords.h"
#include "selectionForm.h"

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
	selectionForm* filledForm;
	float gpa;
private:
	void determineProgram()
	{
		gpa = records->getGPA();
		int firstIndex;
		int secondIndex;
		int thirdIndex;
		for (int i = 0; i < numCourses; i++) {
			if (filledForm->selectedOrder.firstChoice.compare(programList[i]) == 0)
				firstIndex = i;
			else if (filledForm->selectedOrder.secondChoice.compare(programList[i]) == 0)
				secondIndex = i;
			else if (filledForm->selectedOrder.thirdChoice.compare(programList[i]) == 0)
				thirdIndex = i;
		}
		if (gpa >= minGrades[firstIndex] && filledForm->personalStatement.empty() != 0) {
			records->updateProgram(filledForm->selectedOrder.firstChoice);
		}
		else if (gpa >= minGrades[secondIndex] && filledForm->personalStatement.empty() != 0) {
			records->updateProgram(filledForm->selectedOrder.secondChoice);
		}
		else{
			records->updateProgram(filledForm->selectedOrder.thirdChoice);
		}
	}

};
#endif // !__selectionAlgorithm__
