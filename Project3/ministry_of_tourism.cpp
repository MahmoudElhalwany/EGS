#include "ministry_of_tourism.h"



ministry_of_tourism::ministry_of_tourism()
{
}


ministry_of_tourism::~ministry_of_tourism()
{
}
ministry_of_tourism* ministry_of_tourism::obj=NULL;

ministry * ministry_of_tourism::create(){
	if(!obj)
		obj=new ministry_of_tourism;
	
	return obj;





}
void ministry_of_tourism::set_minister(minister m){
	this->_minster=m;
}

