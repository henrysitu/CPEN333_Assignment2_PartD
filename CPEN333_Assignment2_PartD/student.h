#include <stdio.h>
#include <iostream>
#include <string>

#ifndef __student__
#define __student__

using namespace std;

struct preferenceForm {
	string firstChoice;
	string secondChoice;
	string thirdChoice;
	string personalStatement;
};
//comment vomit

class student {
private:
	string name;
	int studentNumber;
	string SSCuserID;
	string SSCPassword;
	preferenceForm selectionForm;
	string enroledCourses[];
public:
	void submitSelectionForm(preferenceForm form) {

	}
	void payFees(float amount) {

	}
	void cheat() {

	}
	void registerForCourse(string course) {

	}
};

#endif // !__student__
