#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

#include <iostream>
#include <ostream>
#include <cmath>

class Fixed
{
	private:

		int					number;
		static const int	fractional_bits = 8;

	public:

		int					getRawBits(void) const;
		void				setRawBits(int const raw);
		float				toFloat(void) const;
		int					toInt(void) const;

		static Fixed		&min(Fixed &value1, Fixed &value2);
		static Fixed		&max(Fixed &value1, Fixed &value2);
		static const Fixed	&min(Fixed const &value1, Fixed const &value2);
		static const Fixed	&max(Fixed const &value1, Fixed const &value2);
		
		bool				operator==(Fixed const &param) const;
		bool				operator!=(Fixed const &param) const;
		bool				operator<=(Fixed const &param) const;
		bool				operator>=(Fixed const &param) const;
		bool				operator<(Fixed const &param) const;
		bool				operator>(Fixed const &param) const;

		Fixed				operator+(Fixed const &param) const;
		Fixed				operator-(Fixed const &param) const;
		Fixed				operator*(Fixed const &param) const;
		Fixed				operator/(Fixed const &param) const;

		Fixed				&operator++(void);
		Fixed				&operator--(void);
		Fixed				operator++(int);
		Fixed				operator--(int);

		Fixed 				&operator=(Fixed const &assign);

		Fixed(void);
		Fixed(const int param);
		Fixed(const float param);
		Fixed(Fixed const &src);
		~Fixed(void);

};

std::ostream 	&operator<< (std::ostream &o, Fixed const &i);

#endif
