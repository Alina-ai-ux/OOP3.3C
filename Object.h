// Object.h
#pragma once
class Object
{
private:
	static unsigned int total;
public:
	static unsigned int count() { return total; };
	Object() { ++total; };
	~Object() { --total; };
};

