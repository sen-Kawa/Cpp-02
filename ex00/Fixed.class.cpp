#include "Fixed.class.hpp"

Fixed::Fixed(void) : number(0)
{
	std::cout
		<< "Default constructor called"
	<< std::endl;
	return ;
}

Fixed::Fixed(Fixed const &src)
{
	std::cout
		<< "Copy constructor called"
	<< std::endl;
	*this = src;
	return ;
}

Fixed::~Fixed(void)
{
	return ;
}
