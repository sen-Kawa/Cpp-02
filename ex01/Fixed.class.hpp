#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

#include <iostream>

class Fixed
{
	private:

		int					number;
		static const int	fractional_bits = 8;

	public:

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		
		Fixed &	operator=(Fixed const &assign);

		Fixed(void);
		Fixed(const int param);
		Fixed(const float param);
		Fixed(Fixed const &src);
		~Fixed(void);

};

#endif
