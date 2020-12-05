#include <stdio.h>
#include <iostream>
#include <string>
#include "SSCWebsite.h"

using namespace std;

#ifndef __bank__
#define __bank__

class bank {
private:
	float bankBalance;
	SSCWebsite* SSCAccount;
public:
	float checkBalance() {
		return bankBalance;
	}
	void displayOperationResults() {
		if (payFees(SSCAccount->getFees()) == true)
			cout << "Successful transaction" << endl;

		else
			cout << "Unsuccessful transaction" << endl;
	}
	bool payFees(float amount) {
		if (amount <= bankBalance) {
			bankBalance = bankBalance - amount; // update bank balance
			return true;
		}
		else
			return false;	
	}
	bank(float balance, SSCWebsite* ssc) {
		bankBalance = balance;
		SSCAccount = ssc;
	}
};
#endif // !__bank__
