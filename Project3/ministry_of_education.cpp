#include "ministry_of_education.h"



ministry_of_education::ministry_of_education()
{
}

ministry_of_education::~ministry_of_education()
{
}

ministry_of_education* ministry_of_education::obj=NULL;

ministry * ministry_of_education::create(){
	if(!obj)
		obj=new ministry_of_education;
	
	return obj;





}
void ministry_of_education::set_minister(minister m){
	this->_minster=m;
}

