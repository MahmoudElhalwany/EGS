#include "person.h"


person::person()
{


}

person::~person()
{


}


void person::set_name(string s)
{
	name = s;
}
string person::get_name()
{
	return name;
}


void person::set_id(int i)
{
	id = i;
}
int	person::get_id()
{
	return id;
}
