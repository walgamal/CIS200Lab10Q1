//Program Name: Validate birthday program
//Programmer Name: Wasim Algamal
//Description: Ensures a user enters a valid numeric birthday and prints the month day, year format
//Date Created: 12/1/20

#include "exceptionClasses.h"

int main() {
	int userMonth, userDay, userYear;
	char control = 'y';

	cout << "Please enter your birthday in numeric form (e.g. 8-27-1990)\n";

	while (control == 'y' || control == 'Y') {
		try {
			cout << "Month: ";
			cin >> userMonth;
			cout << "Day: ";
			cin >> userDay;
			cout << "Year: ";
			cin >> userYear;

			if (userMonth < 1 || userMonth > 12) {
				throw mex;
			}
			else if (userYear < 1915 || userYear > 2020) {
				throw yex;
			}
			else {
				if ((userMonth == 1 || userMonth == 3 || userMonth == 5 || userMonth == 7 ||
					userMonth == 8 || userMonth == 10 || userMonth == 12) && (userDay > 31)) {
					throw dex;
				}
				else if ((userMonth == 4 || userMonth == 3 || userMonth == 5 || userMonth == 7)
					&& (userDay > 30)) {
					throw dex;
				}
				else if ((userMonth == 2) && (userDay > 29)) {
					throw dex;
				}
				else if (userMonth < 1) {
					throw dex;
				}
			}

			control = 'n';

		}
		catch (monthException & mex) {
			cout << "Exception: you have entered an invalid month (" << userMonth << "). Please try again!\n";
			control = 'y';
		}
		catch (dayException & dex) {
			cout << "Exception: you have entered an invalid day (" << userDay << "). Please try again!\n";
			control = 'y';
		}
		catch (yearException & yex) {
			cout << "Exception: you have entered an invalid year (" << userYear << "). Please try again!\n";
			control = 'y';
		}
		catch (...) {
			cout << "Exception: Unexpected error. Please try again!\n";
			control = 'y';
		}
	}

	switch (userMonth) {
	case 1:
		cout << "You have entered January " << userDay << ", " << userYear << endl;
		break;
	case 2:
		cout << "You have entered February " << userDay << ", " << userYear << endl;
		break;
	case 3:
		cout << "You have entered March " << userDay << ", " << userYear << endl;
		break;
	case 4:
		cout << "You have entered April " << userDay << ", " << userYear << endl;
		break;
	case 5:
		cout << "You have entered May " << userDay << ", " << userYear << endl;
		break;
	case 6:
		cout << "You have entered June " << userDay << ", " << userYear << endl;
		break;
	case 7:
		cout << "You have entered July " << userDay << ", " << userYear << endl;
		break;
	case 8:
		cout << "You have entered August " << userDay << ", " << userYear << endl;
		break;
	case 9:
		cout << "You have entered September " << userDay << ", " << userYear << endl;
		break;
	case 10:
		cout << "You have entered October " << userDay << ", " << userYear << endl;
		break;
	case 11:
		cout << "You have entered November " << userDay << ", " << userYear << endl;
		break;
	case 12:
		cout << "You have entered December " << userDay << ", " << userYear << endl;
		break;
	}

	return 0;
}
