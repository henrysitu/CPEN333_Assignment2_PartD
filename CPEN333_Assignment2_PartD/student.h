#include <stdio.h>
#include <iostream>
#include <string>
#include "bank.h"
#include "SSCWebsite.h"
#include "selectionForm.h"

#ifndef __student__
#define __student__

using namespace std;

struct secYearSelectionForm {
	string firstChoice;
	string secondChoice;
	string thirdChoice;
	string personalStatement;
};

class student {
private:
	bank* bankAccount;
	SSCWebsite* SSCAccount;
	selectionForm* preferenceForm;
	string name;
	int studentNumber;
	secYearSelectionForm selectionForm;
	string SSCuserID;
	string SSCPassword;
	vector<string> enrolledCourses;
public:
	void submitSelectionForm() {
		preferenceForm->personalStatement = selectionForm.personalStatement;
		preferenceForm->selectedOrder.firstChoice = selectionForm.firstChoice;
		preferenceForm->selectedOrder.secondChoice = selectionForm.secondChoice;
		preferenceForm->selectedOrder.thirdChoice = selectionForm.thirdChoice;
	}
	void payFees(float amount) {
		bankAccount->payFees(amount);
	}
	bool cheat() {
		int shouldICheat = rand() % 100;
		if (shouldICheat == 1) {
			return true;
		}
		else
			return false;
	}
	void registerForCourse(string course) {

	}
};

#endif // !__student__
