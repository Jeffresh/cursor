#include "Cursor.hpp"


void Cursor::beginnin()
{
	if(!l_.empty())
	{
		while(!l_.rgt.vacia())
		{
			l_.lft.push(l_.rgt.tope());
			l_.rgt.pop();
		}
	}
}

void Cursor::end()
{
	if(!l_.empty())
	{
		while(!l_.lft.vacia())
		{
			l_.rgt.push(l_.lft.tope());
			l_.lft.pop();
		}
	}
}


/*std::ostream& operator <<(std::ostream& os,const Cursor& C )
{
	os<<C.l_.rgt.tope();

	return os;
}
*/