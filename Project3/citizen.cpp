#include "citizen.h"



citizen::citizen()
{
}


citizen::~citizen()
{
}



void citizen::set_age(int a) { age = a; }
void citizen::set_gender(string s) { gender = s; }
void citizen::set_password(string s) { password = s; }


int citizen::get_age() { return age; }
string citizen::get_gender() { return gender; }
string citizen::get_password() { return  password; }


void citizen::sign_up()
{
	//TODO
}
