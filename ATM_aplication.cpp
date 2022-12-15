#include<iostream>

using namespace std;

void menu() {
	cout << "*********MENU*********" << endl;
	cout << "1. check balance" << endl;
	cout << "2. deposit balance" << endl;
	cout << "3. withdraw balance" << endl;
	cout << "4.Exit" << endl;
	cout << "*********MENU*********" << endl;
}

int main(){
	int option;
	float balance = 0;

	do {
		menu();
		cout << "Please choice an option" << endl;
		cin >> option;

		switch (option) {
		case 1:cout << "Your balance is " << balance << "$" << endl; break;
		case 2:cout << "Please deposit your sum" << endl;
			int deposit;
			cout << "Deposit: " << endl;
			cin >> deposit;
			balance += deposit;
			break;
		case 3:cout << "Please type how much you wish to withdraw" << endl;
			int withdraw;
			cout << "Withdraw amount:" << endl;
			cin >> withdraw;
			if (withdraw<=balance)
				balance -= withdraw;
			else
				cout << "You have insufficient funds"<<endl;
			break;
		}
	} while (option != 4);

	return 0;
	system("pause>0");
}