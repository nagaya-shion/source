#ifndef CLASS_H_
#define CLASS_H_

class Class
{
public:
	virtual int GetNum();
	virtual void SetNum(int Num);
protected:
	int Num;
public:
	Class();
	~Class();
};

#endif