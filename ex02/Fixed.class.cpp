#include "Fixed.class.hpp"
#include <iterator>

int	Fixed::getRawBits(void) const
{
	return (this->number);
}

void Fixed::setRawBits(const int raw)
{
	this->number = raw;	
	return ;
}

float Fixed::toFloat(void) const
{
	return ((float)this->number / (1 << this->fractional_bits));
}

int Fixed::toInt(void) const
{
	return (this->number / (1 << this->fractional_bits));
}

Fixed &	Fixed::operator=(const Fixed &assign)
{
	if (this != &assign)
	{
		this->number = assign.getRawBits();
	}
	return (*this);
}

Fixed::Fixed(void) : number(0)
{
	return ;
}

Fixed::Fixed(const int param)
{
	this->number = param * (1 << this->fractional_bits);
	return ;
}

Fixed::Fixed(const float param)
{
	this->number = roundf(param * (1 << this->fractional_bits));
	return ;
}

Fixed::Fixed(Fixed const &src)
{
	*this = src;
	return ;
}

Fixed::~Fixed(void)
{
	return ;
}

std::ostream & operator<<(std::ostream &o, Fixed const &i)
{
	o << i.toFloat();
	return (o);
}
