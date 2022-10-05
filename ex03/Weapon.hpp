//Weapon.hpp	CPP01 / ex03

#ifndef WEAPON_HPP
# define WEAPON_HPP


class	Weapon {

	public:

		Weapon( void );
		Weapon( std::string name );
		~Weapon( void );
		
		std::string	getName( void ) const;
		void		setName( std::string name );	

	private:

		std::string		_name;

};

#endif
