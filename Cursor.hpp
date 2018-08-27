#ifndef CURSOR_HPP
#define CURSOR_HPP

#include "pila_enla.hpp" //dinamic_queue 
#include<iostream>


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


// inline functions

inline Cursor::Cursor():l_{}{}


inline void Cursor::forward()
{
	if(!l_.rgt.vacia())
	{
		l_.lft.push(l_.rgt.tope());
		l_.rgt.pop();
	}
}

inline void Cursor::back()
{
	if(!l_.empty())
	{
		l_.rgt.push(l_.lft.tope());
		l_.lft.pop();
	}
}

inline void Cursor::del()
{
	if(!l_.lft.vacia())
		l_.lft.pop();

}

inline void Cursor::del_backspace()
{
	back();
	del();
	forward();
	

}


inline void Cursor::insert(const char c)
{
	l_.lft.push(c);
}

inline void Cursor::in_overwrite(const char c)
{
	if(!l_.empty())
	{
		l_.rgt.pop();
		l_.rgt.push(c);
	}
	else
		l_.rgt.push(c);
}

void Cursor::beginning()
{
	while(!l_.lft.vacia())
		back();
	
}

void Cursor::end()
{
	while(!l_.rgt.vacia())
		forward();
}

/*
std::ostream& operator <<(std::ostream&,const Cursor& )
*/

#endif // cursor_HPP