#include <iostream>
#include <string>

using namespace std;

#include <iostream>
#include <string>

using namespace std;

int main() {
	int fnumber;
	string oper;
	int snumber;
	cout << "It's my own calculator!!\n";
	cout << "Enter first number: ";
	cin >> fnumber;
	cout << "Enter operation, example: +, -, *, / ";
	cin >> oper;
	cout << "Enter second number: ";
	cin >> snumber;
	int result;
	
	bool checkbox = true;
	while (checkbox == true) {
		if (oper == "+") {
			result = fnumber + snumber;
			cout << fnumber << " + " << snumber << " = " << result << endl;
			break;
		}
		else if (oper == "-") {
			result = fnumber - snumber;
			cout << fnumber << " - " << snumber << " = " << result << endl;
			break;
		}
		else if (oper == "*") {
			result = fnumber * snumber;
			cout << fnumber << " * " << snumber << " = " << result << endl;
			break;
		}
		else if (oper == "/" && snumber != 0) {
			result = fnumber / snumber;
			cout << fnumber << " / " << snumber << " = " << result << endl;
			break;
		}
		else if(oper == "/" && snumber == 0) {
			cout << "Error !!! Division by zero" << endl;
			cout << "Try again: " << endl;
			cin >> snumber;
		}
	}

	return 0;

}


