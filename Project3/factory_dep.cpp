#include "factory_dep.h"
#include"department.h"


factory_dep::factory_dep(void)
{
}


factory_dep::~factory_dep(void)
{
}
department* factory_dep::create(string n ,string d,string da){
	return new department(n,d,da);
}
