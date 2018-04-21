#include "ministry_of_finance.h"



ministry_of_finance::ministry_of_finance()
{
}


ministry_of_finance::~ministry_of_finance()
{
}

ministry_of_finance* ministry_of_finance::obj=NULL;

ministry * ministry_of_finance::create(){
	if(!obj)
		obj=new ministry_of_finance;
	
	return obj;





}
void ministry_of_finance::set_minister(minister m){
	this->_minster=m;
}
