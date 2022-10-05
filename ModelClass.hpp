//ModelClass.hpp	CPP00 / ex01

#ifndef MODELCLASS_HPP
# define MODELCLASS_HPP


class	ModelClass {

	public:

		ModelClass( void );
		~ModelClass( void );
		
		int		getOldest( void ) const;
		void	setOldest( int c );	

	private:

		int		_oldest;

};

#endif
