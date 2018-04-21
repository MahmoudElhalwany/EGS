#pragma once
#include "person.h"
#include "minister.h"
#include "admin.h"
#include "citizen.h"
#include "employee.h"
#include "department.h"
#include "fstream"
#include "sstream"
using namespace std;
/*class Files
{
public:
	Files();
	void write_person(person per)
	{
		fstream file;
		file.open("person.txt", ios::out | ios::app);
		char delimter = 01;
		file << per.get_id << delimter << per.get_name << endl;
		file.close();
	}
	person find_person(string ID)
	{
		fstream file;
		file.open("person.txt", ios::in);
		file.seekg(0);
		char delimter = 01;
		string temp;
		while (getline(file,temp))
		{
			stringstream ss(temp);
		//	while(getline())

		}
	}
};*/

