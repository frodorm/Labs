#include <iostream>

template<typename type>
class stack
{
private:
	int s_capacity; // размер стека
	int s_current = 0; // номер текущего элемента
	type* data = nullptr; // содержимое стека
public:

	stack(int capacity)
	{
		if (capacity < 0)
		{
			throw std::bad_alloc();
		}
		else
		{
			s_capacity = capacity;
			data = new type[s_capacity];
		}
	}

	~stack()
	{
		delete[] data;
	}

	int size() const
	{
		return s_capacity;
	}
	
	bool empty() const
	{
		if (s_current == 0)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	void push(const type& element)
	{
		if (s_current == s_capacity)
		{
			
			throw std::overflow_error("er1");
		}
		else
		{
			data[s_current] = element;
			s_current += 1;
		}
	}
	
	void pop(int number)
	{
		if (number >= s_current)
		{
			throw std::out_of_range("er2");
		}
		else
		{
			for (int i = number; i < s_current; ++i)
			{
				data[i] = data[i + 1];
			}
			--s_current;
		}
	}
	
	type& top()
	{
		if (s_current == 0)
		{
			throw std::logic_error("er3");
		}
		else
		{
			return data[s_current - 1];
		}
	}

};
int main()
{
	try 
	{
		stack<int> pp(3);
		std::cout << pp.size() << std::endl;
		if (pp.empty())
		{
			std::cout << "empty" << std::endl;
		}
		for (int p = 1; p < 4; ++p)
		{
			pp.push(p);
		}
		std::cout << pp.top() << std::endl;
		pp.pop(2);
		std::cout << pp.top() << std::endl;
	}
	catch(std::bad_alloc& Error)
	{
		std::cout << Error.what() << std::endl;
	}
	catch (std::overflow_error& Error)
	{
		std::cout << Error.what() << std::endl;
	}
	catch (std::out_of_range& Error)
	{
		std::cout << Error.what() << std::endl;
	}
	catch (std::logic_error& Error)
	{
		std::cout << Error.what() << std::endl;
	}

	return 0;

}