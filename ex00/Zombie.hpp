//Zombie.hpp	CPP01 / ex00

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP


class	Zombie {

	public:

		Zombie( void );
		~Zombie( void );

		std::string		getName( void ) const;
		void			setName( std::string c );	
		void			announce( void );

	private:

		std::string		_name;

};

#endif
