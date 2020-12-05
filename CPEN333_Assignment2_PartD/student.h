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
	secYearSelectionForm filledForm;
	string SSCuserID;
	string SSCPassword;
	vector<string> enrolledCourses;
public:
	void submitSelectionForm() {
		preferenceForm->personalStatement = filledForm.personalStatement;
		preferenceForm->selectedOrder.firstChoice = filledForm.firstChoice;
		preferenceForm->selectedOrder.secondChoice = filledForm.secondChoice;
		preferenceForm->selectedOrder.thirdChoice = filledForm.thirdChoice;
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
		SSCAccount->registerForCourse(course);
		enrolledCourses.push_back(course);
	}
	student(bank* bankAcc, SSCWebsite* sscAcc, selectionForm* form, string personsName, int IDNumber, secYearSelectionForm compForm, string userID, string password)
};

#endif // !__student__
