#include "Cursor.hpp"

inline void Cursor::forward()
{

	l_.lft.push(l_.rgt.tope());
	l_.rgt.pop();
}

inline void Cursor::back()
{
	l_.rgt.push(l_.lft.tope());
	l_.lft.pop();
}


void Cursor::beginnin()
{
	assert(!l_.empty());

	while(!l_.rgt.vacia())
	{
		l_.lft.push(l_.rgt.tope());
		l_.rgt.pop();
	}
}

void Cursor::end()
{
	assert(!l_.empty());

	while(!l_.lft.vacia())
	{
		l_.rgt.push(l_.lft.tope());
		l_.lft.pop();
	}
}

inline void Cursor::del()
{
	assert(!l_.empty());

	l_.rgt.pop();

}

inline void Cursor::del_backspace()
{
	assert(!l_.empty());

	l_.lft.push(l_.rgt.tope());
	l_.rgt.pop();

}


inline void Cursor::insert(const char c)
{
	l_.rgt.push(c);
}

inline void Cursor::in_overwrite(const char c)
{
	assert(!l_.empty());

	l_.rgt.pop();
	l_.rgt.push(c);
}