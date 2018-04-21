#pragma once
#include "ministry.h"
class ministry_of_tourism :	public ministry
{
	static ministry_of_tourism *obj;



	public:
		static ministry* create();
		void set_minister(minister ) ;

	ministry_of_tourism();
	~ministry_of_tourism();
	//TODO citizen can view list of the tourist places and their lications
};

