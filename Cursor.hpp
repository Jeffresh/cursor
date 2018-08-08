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
	void overwrite(const char);



private:



	struct Line
	{
		Pila<char> izq;
		Pila<char> der;

	};

	Line l_;




};