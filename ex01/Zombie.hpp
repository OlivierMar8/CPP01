//Zombie.hpp	CPP01 / ex01

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>

class	Zombie {

	public:

		Zombie( void );
		Zombie( std::string name );
		~Zombie( void );

		std::string		getName( void ) const;
		void			setName( std::string c );	
		void			announce( void ) const;

	private:

		std::string		_name;

};

#endif
