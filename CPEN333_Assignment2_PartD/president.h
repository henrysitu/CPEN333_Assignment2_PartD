#include <stdio.h>
#include <iostream>
#include <string>
#include "SSCWebsite.h"
#include "academicRecords.h"

using namespace std;

#ifndef __president__
#define __president__

class president {
private: 
	SSCWebsite* SSCRecords;

public:
	void determineCheating() {
		int ifCheat;
		int comparitor = SSCRecords->getCheatingRecords().numIncidences + 1;
		ifCheat = rand() % 100;
		if (ifCheat <= comparitor)
		{
			SSCRecords->updateCheatingRecord(comparitor);
		}
	}
	president(SSCWebsite* sscAcc) {
		SSCRecords = sscAcc;
	}
};
#endif // !__president__
