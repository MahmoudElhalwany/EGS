#include "ministry_of_transportation.h"



ministry_of_transportation::ministry_of_transportation()
{
}



ministry_of_transportation::~ministry_of_transportation()
{
}
ministry_of_transportation* ministry_of_transportation::obj=NULL;

ministry * ministry_of_transportation::create(){
	if(!obj)
		obj=new ministry_of_transportation;
	
	return obj;
	




}
void ministry_of_transportation::set_minister(minister m){
	this->_minster=m;
}

