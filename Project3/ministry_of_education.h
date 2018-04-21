#pragma once
#include "ministry.h"


class ministry_of_education :	public ministry
{
	static ministry_of_education *obj;



	public:
		static ministry* create();
		void set_minister(minister ) ;
private:
	ministry_of_education();

	~ministry_of_education();
};

