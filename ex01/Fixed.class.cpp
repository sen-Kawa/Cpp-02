#include "Fixed.class.hpp"
#include <iterator>

int	Fixed::getRawBits(void) const
{
	std::cout
		<< "getRawBits member function called"
	<< std::endl;
	return (this->number);
}

void Fixed::setRawBits(const int raw)
{
	std::cout
		<< "setRawBits member function called"
	<< std::endl;
	this->number = raw;	
	return ;
}

float Fixed::toFloat(void) const
{
	
}

int Fixed::toInt(void) const
{
	
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

Fixed::Fixed(void) : number(0)
{
	std::cout
		<< "Default constructor called"
	<< std::endl;
	return ;
}

Fixed::Fixed(const int param)
{
	std::cout
		<< "Int constructor called"
	<< std::endl;
	return ;
}

Fixed::Fixed(const float param)
{
	std::cout
		<< "Float constructor called"
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
	std::cout
		<< "Destructor called"
	<< std::endl;
	return ;
}

std::ostream & operator<<(std::ostream &o, Fixed const &i)
{
	o << i.getRawBits();
	return (o);
}
