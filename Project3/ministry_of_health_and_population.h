#pragma once
#include "ministry.h"
class ministry_of_health_and_population :public ministry
{
	static ministry_of_health_and_population *obj;



	public:
		static ministry* create();
		void set_minister(minister ) ;

	ministry_of_health_and_population();
	~ministry_of_health_and_population();
};

