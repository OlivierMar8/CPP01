//HumanA.hpp	CPP01 / ex03

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class	HumanA {

	public:

		HumanA( std::string name, Weapon& weaponREF );
		~HumanA( void );
		
		std::string	getName( void ) const;
		void		setName( std::string name);
		Weapon&		getWeapon( void ) const;
		void		setWeapon( Weapon& weaponREF );
		void		attack( void ) const;

	private:

		std::string	_name;
		Weapon&		_weaponREF;

};

#endif
