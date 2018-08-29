#include <iostream>
#include <string>
using namespace std;

int main()
{
	//1) Storing name in String
	{
		string firstName, lastName;
		cout << "Enter your first & last name: \n";
		cin >> firstName >> lastName;
		cout << "Your name is: " << firstName << " " << lastName;
		cout << "\n";
	}
	//2) Outputting name in reverse
	{
		string firstName, lastName, getLine;
		cout << endl;
		cout << "Enter your first name: \n";
		cin >> firstName;
		cout << "Enter your last name: \n";
		cin >> lastName;

		for (int i = 1; i <= firstName.length(); i++)
		{
			cout << firstName[firstName.length() - i];
		}
		cout << " ";
		for (int i = 1; i <= lastName.length(); i++)
		{
			cout << lastName[lastName.length() - i];
		}
		cout << endl;
	}
	//3) Outputting 5 names in reverse
	{
		string firstName1, lastName1;
		string firstName2, lastName2;
		string firstName3, lastName3;
		string firstName4, lastName4;
		string firstName5, lastName5;
		cout << endl;
		cout << "Enter first and last name 1: \n";
		cin >> firstName1 >> lastName1;
		cout << "Enter first and last name 2: \n";
		cin >> firstName2 >> lastName2;
		cout << "Enter first and last name 3: \n";
		cin >> firstName3 >> lastName3;
		cout << "Enter first and last name 4: \n";
		cin >> firstName4 >> lastName4;
		cout << "Enter first and last name 5: \n";
		cin >> firstName5 >> lastName5;

		//Name 1
		for (int i = 1; i <= firstName1.length(); i++)
		{
			cout << firstName1[firstName1.length() - i];
		}
		cout << " ";
		for (int i = 1; i <= lastName1.length(); i++)
		{
			cout << lastName1[lastName1.length() - i];
		}
		cout << endl;
		//Name 2
		for (int i = 1; i <= firstName2.length(); i++)
		{
			cout << firstName2[firstName2.length() - i];
		}
		cout << " ";
		for (int i = 1; i <= lastName2.length(); i++)
		{
			cout << lastName2[lastName2.length() - i];
		}
		cout << endl;
		//Name 3
		for (int i = 1; i <= firstName3.length(); i++)
		{
			cout << firstName3[firstName3.length() - i];
		}
		cout << " ";
		for (int i = 1; i <= lastName3.length(); i++)
		{
			cout << lastName3[lastName3.length() - i];
		}
		cout << endl;
		//Name 4
		for (int i = 1; i <= firstName4.length(); i++)
		{
			cout << firstName4[firstName4.length() - i];
		}
		cout << " ";
		for (int i = 1; i <= lastName4.length(); i++)
		{
			cout << lastName4[lastName4.length() - i];
		}
		cout << endl;
		//Name 5
		for (int i = 1; i <= firstName5.length(); i++)
		{
			cout << firstName5[firstName5.length() - i];
		}
		cout << " ";
		for (int i = 1; i <= lastName5.length(); i++)
		{
			cout << lastName5[lastName5.length() - i];
		}
		cout << endl;
	}
	//4) Beep
	{
		cout << '\a';
	}
	//5) Username & Password  ?
	{
		char userName, password;
		cout << "Enter a User Name: \n";
		cin >> userName;
		cout << "Enter a password that contains at least 8 characters long and contains";
		cout << "at least one capital letter, at least one number and at least one symbol";
		cin >> password;
	}
	//6) strlen, strcmp, strcat, strcpy  ?
	{

	}
	//7) Fixing Errors in code
	{
		//a) 
		char name[4] = "John";

		// Count the letters in the name
		// put 4 instead of 5
		char name[5] = "John";

		//b) 
		char name[32];
		cout << name;

		// Printing name
		// Didn't input name
		char name[32] = "Ronaldo";
		cout << name;

		//c) 
		char name[7] = "Donald";
		char surname[7] = "Kruth";

		strcat(name, surname);

		// Printing the whole name
		// put 7 after surname
		char name[7] = "Donald";
		char surname[6] = "Kruth";

		//d) 
		char errorMsg[5] = "Stop";
		errorMsg[strlen(errorMsg)] = "!";

		cout << errorMsg;

		// Print an error message
		// Trying to print a "!" after stop wrong
		char errorMsg[5] = "Stop";
		char errorMsg1[2] = "1";
		strcat(errorMsg, errorMsg1);

	}
	//8) Pig latin ?
	{

	}
	//9) Counting words and letters from input
	{
		int count;
		char words[] = "Words";
		for (int i = 0; (words[count] != '\0'); i++)
		{
			cout << count[i];
		}
	}
	//10) Palindrome  ?
	{

	}
	//11) Own version of strlen, strcmp, strcat, & strcpy  ?
	{

	}
	//12) Most frequently used characters  ?
	{

	}
	//13) Date
	{
		int day, month, year;
		cout << "Enter date as dd/mm/yyyy \n";
		cin >> day >> month >> year;
		if (month = 1)
		{
			cout << "January" << " " << day << ", " << year << "\n";
		}
		else if (month = 2)
		{
			cout << "February" << " " << day << ", " << year << "\n";
		}
		else if (month = 3)
		{
			cout << "March" << " " << day << ", " << year << "\n";
		}
		else if (month = 4)
		{
			cout << "April" << " " << day << ", " << year << "\n";
		}
		else if (month = 5)
		{
			cout << "May" << " " << day << ", " << year << "\n";
		}
		else if (month = 6)
		{
			cout << "June" << " " << day << ", " << year << "\n";
		}
		else if (month = 7)
		{
			cout << "July" << " " << day << ", " << year << "\n";
		}
		else if (month = 8)
		{
			cout << "August" << " " << day << ", " << year << "\n";
		}
		else if (month = 9)
		{
			cout << "September" << " " << day << ", " << year << "\n";
		}
		else if (month = 10)
		{
			cout << "October" << " " << day << ", " << year << "\n";
		}
		else if (month = 11)
		{
			cout << "November" << " " << day << ", " << year << "\n";
		}
		else if (month = 12)
		{
			cout << "December" << " " << day << ", " << year << "\n";
		}
	}
	//14) whitespace removal  ?
	{

	}
	//15) ?
	{

	}
	system("pause");
	return 0;
}