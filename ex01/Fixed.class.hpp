#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

#include <iostream>
#include <ostream>

class Fixed
{
	private:

		int					number;
		static const int	fractional_bits = 8;

	public:

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
		
		Fixed &	operator=(Fixed const &assign);

		Fixed(void);
		Fixed(const int param);
		Fixed(const float param);
		Fixed(Fixed const &src);
		~Fixed(void);

};

std::ostream &	operator<< (std::ostream &o, Fixed const &i);

#endif
