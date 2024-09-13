#include "Bureaucrat.hpp"

int main(void)
{
	Bureaucrat bueraucrat("Jack", 42);
	std::cout << scrclean << bueraucrat << std::endl;
	bueraucrat.incrementGrade();
	std::cout << bueraucrat << std::endl;
	bueraucrat.decrementGrade();
	std::cout << bueraucrat << std::endl;

	try{
		Bureaucrat busBoy("Joe", 151);
	}
	catch (std::exception & paperWork)	{
		std::cout << paperWork.what() << std::endl;
	}
	
	Bureaucrat busBoy("Johnass", 150);
	try{
		busBoy.decrementGrade();
	}
	catch (std::exception & paperWork)	{
		std::cout << paperWork.what() << std::endl;
	}
	
	Bureaucrat manager("Johnass", 1);
	try{
		manager.incrementGrade();
	}
	catch (std::exception & paperWork)	{
		std::cout << paperWork.what() << std::endl;
	}
}