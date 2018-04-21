#pragma once
#include <string>
using namespace std;


class person
{

	string name;
	int id;

public:
	person();
	~person();

	void set_name(string s);
	string get_name();


	void set_id(int i);
	int get_id();



};

