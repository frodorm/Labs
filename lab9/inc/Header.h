#pragma once
namespace fm
{
	class parallelogram
	{

	private:

		double p_base = 0;
		double p_side = 0;
		int p_coefficient = 2;

	public:

		parallelogram(double base, double side);

		bool examination();

		double perimetr();

		~parallelogram();


	};
}