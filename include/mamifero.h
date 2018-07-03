#ifndef mamifero_H_
#define mamifero_H_

#include <iomanip>
#include <fstream> 		
#include <vector>

using namespace std;


/// The mamifero class inherits part of the product class 
class mamifero 
{
	/// Publics members.
	public:
		mamifero();
		mamifero(std::string pelo_);
		~mamifero();
	/// Privates members.	
	protected:
		std::string pelo;
		
	public:
		/// Getters
		std::string getpelo();
		/// Setters
		void setpelo(std::string pelo_);
		
	
};


#endif