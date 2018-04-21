#include "ministry_of_health_and_population.h"



ministry_of_health_and_population::ministry_of_health_and_population()
{
}


ministry_of_health_and_population::~ministry_of_health_and_population()
{
}
ministry_of_health_and_population* ministry_of_health_and_population::obj=NULL;

ministry * ministry_of_health_and_population::create(){
	if(!obj)
		obj=new ministry_of_health_and_population;
	
	return obj;





}
void ministry_of_health_and_population::set_minister(minister m){
	this->_minster=m;
}

