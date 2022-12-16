#include <iostream>
#include <Header.h>

namespace fm
{
	parallelogram::parallelogram(double base, double side) 
	{
		p_coefficient = 2;
		p_base = base;
		p_side = side;
	}
	
	bool parallelogram::examination()
	{
		if (p_side < 0 || p_base < 0)
		{
			std::cout << "wrong data" << std::endl;
			return false;
		}
	}

	double parallelogram::perimetr()
	{
		if (examination())
		{
			double per = (p_base + p_side) * 2;
			return per;
		}

	}

	parallelogram::~parallelogram() {}
}