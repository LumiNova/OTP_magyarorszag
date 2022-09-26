#include <iostream>

double balance = 500;
char dollarSign = '$';
double moneyToWithdraw;
double moneyToDeposit;
int methodNumber;

void printBasicMethods();
void showBalance();
void depositMoney();
void withdrawMoney();
void getMethodNumber();

void showBalance() {
	std::cout << "\nYour balance is: " << dollarSign << "" << balance << std::endl;
	printBasicMethods();
}

void depositMoney() {
	std::cout << "\nHow much money do you want to deposit?" << std::endl;
	std::cin >> moneyToDeposit;
	balance += moneyToDeposit;
	std::cout << "\nYour new balance is: " << dollarSign << "" << balance << std::endl;
	printBasicMethods();
}

void withdrawMoney() {
	std::cout << "\nHow much money do you want to withdraw?" << std::endl;
	std::cin >> moneyToWithdraw;

	if (balance < moneyToWithdraw) {
		std::cout << "You don't have enough money!" << std::endl;
		printBasicMethods();
	}
	else {
		balance -= moneyToWithdraw;
		std::cout << "\nYour new balance is: " << dollarSign << "" << balance << std::endl;
		printBasicMethods();
	}
}

void getMethodNumber() {

	std::cin >> methodNumber;

	switch (methodNumber) {
	case 1:
		showBalance();
		break;
	case 2:
		depositMoney();
		break;
	case 3:
		withdrawMoney();
		break;
	case 4:
		exit(0);
		break;
	default:
		std::cout << "That's not a valid number given!" << std::endl;
		break;
	}
}

void printBasicMethods() {

	std::cout << "**********************" << std::endl;
	std::cout << "1 - Show Balance" << std::endl;
	std::cout << "2 - Deposit Money" << std::endl;
	std::cout << "3 - Withdraw Money" << std::endl;
	std::cout << "4 - Exit" << std::endl;
	std::cout << "********************** \n" << std::endl;
	getMethodNumber();

}

int main() {

	printBasicMethods();

	return 0;
}
