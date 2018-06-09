
#include "stdafx.h"
#include <string>

#include "term.h"

using namespace std;

Term::Term()
{
	name = "";
	def = "";
	year = 0;
}

bool Term::match(string check)
{
	if (check != name)
	{
		//cout << "check Failed" << endl;
		return false;
	}
	else
	{
		cout << "Check found" << endl;
		output();
		return true;
	}
}