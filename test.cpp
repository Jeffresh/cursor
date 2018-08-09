#include <iostream>
#include "Cursor.hpp"


int main()
{
	Cursor cursor;

	char c;



	do 
	{
		std::cout<<"Inserte"<<std::endl;

		std::cin>>c;

		switch(c)
		{
			case 'f': cursor.forward(); break;
			case 'b': cursor.back(); break;
			case 'a': cursor.beginnin();break;
			case 'e' : cursor.end(); break;
			case 'd' : cursor.del(); break;
			case 'l' : cursor.del_backspace(); break;



			case'i' : 

			std::cout<<"Overwrite mode: on"<<std::endl;
			std::cin>>c;
			cursor.in_overwrite(c); 
			break;
			



			default: cursor.insert(c);
		}
	} while(c != 'x');





}



