#pragma once
#include "stdafx.h"

#include <string>
#include <iostream>

using namespace std;

class Term
{
public:
	
	Term();
	auto output() { cout << name << ": " << def << endl <<"Year created: "<< year << endl; };
	void define(string d_name, string d_def, int d_year) { name=d_name, def=d_def,year=d_year; };
	bool match(string check);
	string name;
	

private:

	string def;
	int year;
};