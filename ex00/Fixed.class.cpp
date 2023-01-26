#include "Fixed.class.hpp"

void Fixed::setRawBits(const int raw)
{
	std::cout
		<< "setRawBits member function called"
	<< std::endl;
	this->number = raw;	
	return ;
}

int	Fixed::getRawBits(void) const
{
	std::cout
		<< "getRawBits member function called"
	<< std::endl;
	return (this->number);
}

Fixed &	Fixed::operator=(const Fixed &assign)
{
	std::cout
		<< "Copy assignment operator called"
	<< std::endl;
	if (this != &assign)
	{
		this->number = assign.getRawBits();
	}
	return (*this);
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
