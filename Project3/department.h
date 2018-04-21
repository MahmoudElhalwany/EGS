#pragma once
#include <string>
#include <unordered_set>
#include "employee.h"

using namespace std;

class department
{

	string name;
	string des;
	string date;
	vector<employee>emp_vec; //TODO : amdin can add ppl to this list


public:

	department(string ,string,string);
	~department();
};

