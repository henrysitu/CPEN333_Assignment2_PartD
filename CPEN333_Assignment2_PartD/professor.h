#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include "SSCWebsite.h"

using namespace std;

#ifndef __professor__
#define __professor__

struct studentGrades {
	int studentNumber;
	float grade;
};

class professor {
private:
	int numStudents;
	vector<studentGrades> grades;
	string course;
	int courseCredit;
	vector<SSCWebsite> ssc;
public:
	void submitGrades() {
		for (int i = 0; i < numStudents; i++)
		{
			for (int j = 0; j < numStudents; j++) {
				if (ssc[j].getStudentInfo().studentNumber == grades[i].studentNumber)
					ssc[j].updateStudentInfo(course, grades[i].grade, courseCredit);
			}
			
		}
	}
};
#endif // !__professor__
