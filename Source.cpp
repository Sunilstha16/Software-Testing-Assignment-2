#include<iostream>
#include<iomanip>
#include<limits>
using namespace std;
void options()
{
	cout << "Please select from the following options;" << endl;
	cout << "1. Body Mass Index(BMI)\n"
			"2. Retirement Plan\n"
			"3. Exit\n";

}

int main()
{
	float height_ft, height_inch, tot_height, weight;
	float BMI;
	int cur_age, annual_salary, sav_goal;
	float per_saved, employer_match;
	float saving, total_annualSaving, duration;
	char response;
	do
	{
		int choice;
		options();
		cout << "\nEnter your choice:";
		cin >> choice;
		while (1)
		{
			if (cin.fail())
			{
				cin.clear();
				cin.ignore(numeric_limits < streamsize > ::max(), '\n');
				cout << "Invalid input, please try again\n";
				cout << "\nEnter your choice:";
				cin >> choice;
			}
			if (!cin.fail())
				break;
		}
		switch (choice)
		{
		case 1:

			cout << "Please enter your weight(in lbs): ";
			cin >> weight;
			while (1)
			{
				if (cin.fail())
				{
					cin.clear();
					cin.ignore(numeric_limits < streamsize > ::max(), '\n');
					cout << "Invalid input, please try again\n";
					cout << "\nPlease enter your weight(in lbs): ";
					cin >> weight;
				}
				if (!cin.fail())
					break;
			}
				

			cout << "Please enter your height (in ft and inches);\n";
			cout << "Feet:";
			cin >> height_ft;
			while (1)
			{
				if (cin.fail())
				{
					cin.clear();
					cin.ignore(numeric_limits < streamsize > ::max(), '\n');
					cout << "Invalid input, please try again\n";
					cout << "\nFeet: ";
					cin >> height_ft;
				}
				if (!cin.fail())
					break;
			}
			cout << "Inches:";
			cin >> height_inch;
			while (1)
			{
				if (cin.fail())
				{
					cin.clear();
					cin.ignore(numeric_limits < streamsize > ::max(), '\n');
					cout << "Invalid input, please try again\n";
					cout << "Inch: ";
					cin >> height_inch;
				}
				if (!cin.fail())
					break;
			}

			tot_height = height_ft * 12 + height_inch;
			BMI = (weight / pow(tot_height, 2)) * 703;
			cout <<fixed << setprecision(1) << "\nYour BMi is: " << BMI;
			cout << "\n";
			if (BMI < 18.5)
			{
				cout << "You are Underweight!\n";
			}
			else if (BMI >= 18.5 && BMI < 25)
			{
				cout << "You are Normal weight.\n";
			}
			else if (BMI >= 25 && BMI <= 29.9)
			{
				cout << "You are Over weight.\n";
			}
			else if (BMI > 29.9)
			{
				cout << "You are Obese.\n";
			}
			break;
		case 2:
			cout << "Please enter your Current Age: ";
			cin >> cur_age;

			while (1)
			{
				if (cin.fail())
				{
					cin.clear();
					cin.ignore(numeric_limits < streamsize > ::max(), '\n');
					cout << "Invalid input, please try again\n";
					cout << "Please enter your Current Age: ";
					cin >> cur_age;
				}
				if (!cin.fail())
					break;
			}
			cout << "Please enter your Annual Salary: ";
			cin >> annual_salary;

			while (1)
			{
				if (cin.fail())
				{
					cin.clear();
					cin.ignore(numeric_limits < streamsize > ::max(), '\n');
					cout << "Invalid input, please try again\n";
					cout << "Please enter your Annual Salary: ";
					cin >> annual_salary;
				}
				if (!cin.fail())
					break;
			}
			cout << "Please enter how much you saved in this year(in %): ";
			cin >> per_saved;
					
			while (1)
			{
				if (cin.fail())
				{
					cin.clear();
					cin.ignore(numeric_limits < streamsize > ::max(), '\n');
					cout << "Invalid input, please try again\n";
					cout << "Please enter how much you saved in this year(in %): ";
					cin >> per_saved;
				}
				if (!cin.fail())
					break;
			}

			cout << "Please enter your Desired Retirement Saving Goal(Amount): ";
			cin >> sav_goal;
			while (1)
			{
				if (cin.fail())
				{
					cin.clear();
					cin.ignore(numeric_limits < streamsize > ::max(), '\n');
					cout << "Invalid input, please try again\n";
					cout << "Please enter your Desired Retirement Saving Goal(Amount): ";
					cin >> sav_goal;
				}
				if (!cin.fail())
					break;
			}

			saving = (per_saved / 100) * annual_salary;
			employer_match = saving * 0.35;
			total_annualSaving = saving + employer_match;
			duration = sav_goal / total_annualSaving;
			cout << "\nAge required to achieve the goal(approx): " <<fixed << setprecision(1)<<(duration + cur_age) <<" Years\n";

			if ((duration + cur_age) < 100)
			{
				cout << "Your goal can be met\n";
			}
			if ((duration + cur_age) > 100)
			{

				cout << "Your goal can not be met.\n";
			}
			break;

		case 3:
		{
			cout << "Thank You, See you next time....\n";
			exit(0);
		}
		break;

		default:
			cout << "Invalid input" << endl;
		}
		cout << "\nWould you like to restart the program again?(Y/N) \n"
			<< "Y/y for Yes and N/n for No: ";
		cin >> response;
		cout << "\n";
	} while (toupper(response) == 'Y');
	cout << "Thank You, See you next time....\n";
	
	return 0;
}






