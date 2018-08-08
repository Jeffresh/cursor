#include "pila_enla.hpp" //dinamic_queue 


class Cursor
{

public:

	Cursor();

	void forward();
	void back();

	void beginnin();
	void end();

	void del();
	void del_backspace();

	void insert(const char);
	void in_overwrite(const char);



private:



	struct Line
	{
		Pila<char> lft;
		Pila<char> rgt;
		bool empty (){return lft.vacia()&& rgt.vacia();}

	};

	Line l_;




};