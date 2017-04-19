#pragma once
class User
{
	int ID;
	static int counter;
public:
	User();
	~User();
	int getID() { return ID; }
	static int getCounter() { return counter; }
};

