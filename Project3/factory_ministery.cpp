#include "factory_ministery.h"
#include"ministry_of_interior.h"
#include"ministry_of_education.h"
#include"ministry_of_electricity.h"
#include"ministry_of_finance.h"
#include"ministry_of_transportation.h"
#include"ministry_of_tourism.h"
#include"ministry_of_health_and_population.h"

factory_ministery::factory_ministery(void)
{
}


factory_ministery::~factory_ministery(void)
{
}
/*
Health and population*/
ministry * factory_ministery:: create(string s){
	if(s=="Interior")
		return ministry_of_interior::create();

	else if(s=="Education")
		return ministry_of_education::create();
	else if(s=="Electricity and Energy")
		return ministry_of_electricity::create();
	else if(s=="Finance")
		return ministry_of_finance::create();
	else if(s=="Transportation")
		return ministry_of_transportation::create();
	else if(s=="Tourism")
		return ministry_of_tourism::create();
	else if(s=="Health and population")
		return ministry_of_health_and_population::create();
	else return NULL;
}