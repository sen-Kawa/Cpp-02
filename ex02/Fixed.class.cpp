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

Fixed &Fixed::min(Fixed &value1, Fixed &value2)
{
	return (value1 < value2 ? value1 : value2);
}

Fixed &Fixed::max(Fixed &value1, Fixed &value2)
{
	return (value1 < value2 ? value2 : value1);
}

Fixed const &Fixed::min(Fixed const &value1, Fixed const &value2)
{
	return (value1 < value2 ? value1 : value2);
}

Fixed const &Fixed::max(Fixed const &value1, Fixed const &value2)
{
	return (value1 < value2 ? value2 : value1);
}

bool Fixed::operator==(const Fixed &param) const
{
	return (this->number == param.number);
}

bool Fixed::operator!=(const Fixed &param) const
{
	return (this->number != param.number);
}

bool Fixed::operator<=(const Fixed &param) const
{
	return (this->number <= param.number);
}

bool Fixed::operator>=(const Fixed &param) const
{
	return (this->number >= param.number);
}

bool Fixed::operator>(const Fixed &param) const
{
	return (this->number > param.number);
}

bool Fixed::operator<(const Fixed &param) const
{
	return (this->number < param.number);
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
