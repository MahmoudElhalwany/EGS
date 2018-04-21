#include "alllministeries.h"
#include"factory_ministery.h"
#include<unordered_set>


alllministeries::alllministeries(void)
{
}


alllministeries::~alllministeries(void)
{
}


list<ministry*> alllministeries::all=list<ministry*>();
int alllministeries::create(string na,string loc,minister dat,string des,list<department>s){

	factory_ministery nf;
	ministry* nm=nf.create(na);
	if(nm!=NULL){
	nm->set_ministry_name(na);
	if(dat.get_name()!="")
		nm->set_minister(dat);
	nm->set_dep(s);
	all.push_back(nm);
	return 1;
	}	
	return -1;










}
