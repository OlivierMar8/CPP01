//HumanB.hpp	CPP01 / ex03

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class	HumanB {

	public:

		HumanB( std::string name );
		~HumanB( void );
		
		std::string	getName( void ) const;
		void		setName( std::string name );
		Weapon*		getWeaponPTR( void ) const;
		void		setWeaponPTR( Weapon* weaponPTR );
		void		attack( void ) const;

	private:

		std::string	_name;
		Weapon*		_weaponPTR;

};

#endif
