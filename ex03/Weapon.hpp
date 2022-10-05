//Weapon.hpp	CPP01 / ex03

#ifndef WEAPON_HPP
# define WEAPON_HPP


class	Weapon {

	public:

		Weapon( void );
		Weapon( std::string type );
		~Weapon( void );
		
		std::string	getType( void ) const;
		void		setType( std::string type );	

	private:

		std::string		_type;

};

#endif
