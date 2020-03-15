//---------------------------------------------------------
// file: consoleio.cpp
//   by: Macie Ryan
//  org: COP 2001, spring 2020
//  for: demonstrating string and number I/O stream manipulation
//---------------------------------------------------------

#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>

using namespace std;

const float LEAP_YEAR = 4.2525;

int main() {		//start program
	//CALCULATING LEAP YEARS BASED ON USERS AGE
	int age;
	cout << "Enter your age: ";				//ask user for their age
	cin >> age;								//read user's age
	float leapYears = age / LEAP_YEAR;
	string usersLife = "You have been alive for ";
	string leapYearPhrase = " leap years";		//don't confuse float leapYears (plural) w/ string leapYear
	
	cout << usersLife << leapYears << leapYearPhrase << endl;

	float roundedLeapYears = round(leapYears * 100) / 100;
	cout << usersLife << roundedLeapYears << leapYearPhrase << " rounded" << endl;

	cout << fixed << setprecision(2) << usersLife << leapYears << leapYearPhrase << " fixed" << endl;

	string concatenatedStrings = usersLife + to_string(roundedLeapYears) + leapYearPhrase + " concatenated\n\n";
	cout << concatenatedStrings;


	//ADJUSTING THE VALUE OF A CHARACTER
	char userChar;
	string amtAdjustChar;
	cout << "Enter a character and a (+/-) number, separated by spaces: ";
	cin >> userChar >> amtAdjustChar;

	int charAdjustment = stoi(amtAdjustChar);
	char adjustedChar = userChar + charAdjustment;

	cout << "Character \"" << userChar << "\"";
	cout << " by " << charAdjustment;
	cout << " is \"" << adjustedChar << "\"\n\n";


	//RIGHT JUSTIFY A NUMBER
	const string JUSTIFY = "               ";
	int userNum;
	cout << "Enter a number between 1 and 9,999: ";
	cin >> userNum;
	
	string strUserNum = to_string(userNum);
	string formatNum = JUSTIFY.substr(0, 15 - strUserNum.length());
	formatNum.append(strUserNum);

	cout << "---------------" << endl;
	cout << formatNum << endl;

	return 0;
}	//end program
