#include "Class.h"

int Class::GetNum()
{
	return Num;
}

void Class::SetNum(int Num_)
{
	Num = Num_;
}

Class::Class()
{
	Num = 0;
}

Class::~Class()
{

}
