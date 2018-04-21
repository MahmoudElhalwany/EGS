#include "departments.h"


departments::departments(void)
{
}


departments::~departments(void)
{
}

list<department> departments::alld=list<department>();
void departments::add(department d){
	alld.push_back(d);
	


}
void departments::clear(){

	alld.clear();


}
list<department> departments::get(){

	return alld;


}