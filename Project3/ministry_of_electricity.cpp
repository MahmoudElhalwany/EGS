#include "ministry_of_electricity.h"



ministry_of_electricity::ministry_of_electricity()
{
}


ministry_of_electricity::~ministry_of_electricity()
{
}
ministry_of_electricity* ministry_of_electricity::obj=NULL;

ministry * ministry_of_electricity::create(){
	if(!obj)
		obj=new ministry_of_electricity;
	
	return obj;





}
void ministry_of_electricity::set_minister(minister m){
	this->_minster=m;
}

