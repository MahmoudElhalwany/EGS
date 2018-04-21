#pragma once
#include "person.h"
class citizen :public person
{
	
	int age;
	string gender;
	string password;


public:
	citizen();
	~citizen();

	void set_age(int a);
	void set_gender(string s);
	void set_password(string s);


	int get_age();
	string get_gender();
	string get_password();
	void sign_up();

//TODO  have different service from all ministers (Friend functions);
	
};

