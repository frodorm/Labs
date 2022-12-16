#include <iostream>
#include <Header.h>
/*
class parallelogram
{

private:

	double p_base = 0;
	double p_side = 0;
	int p_coefficient = 2;

public:

	parallelogram(double base, double side) {
		std::cout << "it's alive!" << std::endl;
		p_coefficient = 2;
		p_base = base;
		p_side = side;
	}
	
	bool examination()
	{
		if (p_base < 0 or p_side < 0)
		{
			std::cout << "wrong data" << std::endl;
			return false;
		}
	}

	
	double perimetr()
	{
		if (examination())
		{
			double per = (p_base + p_side) * 2;
			return per;
		}

	}

	~parallelogram() {}


};
*/
int main()
{
	double b;
	double s;

	std::cin >> b;
	std::cin >> s;

	fm::parallelogram par(b, s);

	std::cout << par.perimetr();
}