#include "Fixed.class.hpp"

int	Fixed::getRawBits(void) const
{
	return (this->number);
}

Fixed &	Fixed::operator=(const Fixed &assign)
{
	std::cout
		<< "Copy assignment operator called"
	<< std::endl;
	
}

Fixed::Fixed(Fixed const &src)
{
	std::cout
		<< "Copy constructor called"
	<< std::endl;
	*this = src;
	return ;
}

Fixed::Fixed(void) : number(0)
{
	std::cout
		<< "Default constructor called"
	<< std::endl;
	return ;
}

Fixed::~Fixed(void)
{
	std::cout
		<< "Destructor called"
	<< std::endl;
	return ;
}
