#pragma once
#include <iostream>
#include "clsDate.h"
#include <limits>

class clsInputValidate
{
public:
	// Validat-Number
	static bool ValidateShortNumber(short& Number, string ErrorMessage = "Invalide Number, Enter again?\n")
	{
		while ((cin.fail()))
		{
			//User don't input a number
			cin.clear();
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

			cout << ErrorMessage;
			cin >> Number;
		}
		return true;
	}

	static bool ValidateIntNumber(int& Number, string ErrorMessage = "Invalide Number, Enter again?\n")
	{
		while ((cin.fail()))
		{
			//User don't input a number
			cin.clear();
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

			cout << ErrorMessage;
			cin >> Number;
		}
		return true;
	}

	static bool ValidateFloatNumber(float& Number, string ErrorMessage = "Invalide Number, Enter again?\n")
	{
		while ((cin.fail()))
		{
			//User don't input a number
			cin.clear();
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

			cout << ErrorMessage;
			cin >> Number;
		}
		return true;
	}

	static bool ValidateDblNumber(double& Number, string ErrorMessage = "Invalide Number, Enter again?\n")
	{
		while ((cin.fail()))
		{
			//User don't input a number
			cin.clear();
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

			cout << ErrorMessage;
			cin >> Number;
		}
		return true;
	}

	// Is-Number-Between
	static bool IsNumberBetween(short Number, short From, short To)
	{
		if (ValidateShortNumber(Number))
		{
			return (Number >= From && Number <= To);
		}
	}

	static bool IsNumberBetween(int Number, int From, int To)
	{
		if (ValidateIntNumber(Number))
		{
			return (Number >= From && Number <= To);
		}
	}

	static bool IsNumberBetween(float Number, float From, float To)
	{
		if (ValidateFloatNumber(Number))
		{
			return (Number >= From && Number <= To);
		}
	}

	static bool IsNumberBetween(double Number, double From, double To)
	{
		if (ValidateDblNumber(Number))
		{
			return (Number >= From && Number <= To);
		}
	}

	// -------
	static bool IsValideDate(clsDate Date)
	{
		/*if (Date.Month < 1 || Date.Month > 12)
			return false;

		short NumberOfDays = clsDate::NumberOfDaysInAMonth(Date.Month, Date.Year);

		return (Date.Day >= 1 && Date.Day <= clsDate::NumberOfDaysInAMonth(Date.Month, Date.Year));*/

		// I will use Method already exist
		return clsDate::IsValidDate(Date);

	}

	static bool IsDateBetween(clsDate Date, clsDate Date1, clsDate Date2)
	{
		// Validate Dates
		if (!(IsValideDate(Date) && IsValideDate(Date1) && IsValideDate(Date2)))
			return false;

		if (!clsDate::IsDate1BeforeDate2(Date1, Date2))
		{
			clsDate::SwapDates(Date1, Date2);
		}

		return
			(
				(
					clsDate::CompareDates(Date, Date1) == clsDate::enDateCompare::After
					|| clsDate::CompareDates(Date, Date1) == clsDate::enDateCompare::Equal
					)
				&&
				(
					clsDate::CompareDates(Date, Date2) == clsDate::enDateCompare::Before
					|| clsDate::CompareDates(Date, Date2) == clsDate::enDateCompare::Equal
					)
				);
	}

	// Read-Number
	static int ReadIntNumber(string ErrorMessage = "Invalide Number, Enter again?\n")
	{
		int Number = 0;
		while (!(cin >> Number))
		{
			//User don't input a number
			cin.clear();
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			//system("cls");

			cout << ErrorMessage;
		}
		return Number;

		/*int Number = 0;
		if (ValidateShortNumber(Number))
		{
			return Number;
		}*/
	}

	static short ReadShortNumber(string ErrorMessage = "Invalide Number, Enter again?\n")
	{
		/*short Number = 0;
		while (!(cin >> Number))
		{
			//User don't input a number
			cin.clear();
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			//system("cls");

			cout << ErrorMessage;
		}
		return Number;*/

		short Number;
		cin >> Number;
		if (ValidateShortNumber(Number))
		{
			return Number;
		}
	}

	static float ReadFloatNumber(string ErrorMessage = "Invalide Number, Enter again?\n")
	{
		float Number = 0;
		while (!(cin >> Number))
		{
			//User don't input a number
			cin.clear();
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			//system("cls");

			cout << ErrorMessage;
		}
		return Number;

		/*double Number = 0;
		cin >> Number;

		return ValidateNumber(Number, Message);*/
	}

	static double ReadDblNumber(string ErrorMessage = "Invalide Number, Enter again?\n")
	{
		double Number = 0;
		while (!(cin >> Number))
		{
			//User don't input a number
			cin.clear();
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			//system("cls");

			cout << ErrorMessage;
		}
		return Number;

		/*double Number = 0;
		cin >> Number;

		return ValidateNumber(Number, Message);*/
	}

	// Read-Between
	static int ReadIntNumberBetween(int From, int To, string ErrorMessage = "ut of the range, Enter again?")
	{
		int Number = ReadIntNumber();

		while (!IsNumberBetween(Number, From, To))
		{
			cout << ErrorMessage;

			cin >> Number;
		}
		return Number;
	}

	static short ReadShortNumberBetween(short From, short To, string ErrorMessage = "out of the range, Enter again?")
	{
		short Number = ReadShortNumber();

		while (!IsNumberBetween(Number, From, To))
		{
			cout << ErrorMessage;

			cin >> Number;
		}
		return Number;
	}

	static double ReadDblNumberBetween(double From, double To, string ErrorMessage = "ut of the range, Enter again?")
	{
		double Number = ReadDblNumber();

		while (!IsNumberBetween(Number, From, To))
		{
			cout << ErrorMessage;

			cin >> Number;
		}
		return Number;
	}

	// Read-String
	static string ReadString()
	{
		string S = "";
		// cin >> ws : we will ignor allthe waitspcae.
		getline(cin >> ws, S);
		return S;
	}

};
