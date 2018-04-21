#include "ministry_of_interior.h"



ministry_of_interior::ministry_of_interior()
{
}

ministry_of_interior::~ministry_of_interior()
{
}
ministry_of_interior* ministry_of_interior::obj=NULL;

ministry * ministry_of_interior::create(){
	if(!obj){
		obj=new ministry_of_interior;
	
	return obj;
	}
	else 
		return NULL;




}
void ministry_of_interior::set_minister(minister m){
	this->_minster=m;
}

