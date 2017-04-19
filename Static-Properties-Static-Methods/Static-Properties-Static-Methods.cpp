// Static-Properties-Static-Methods.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "User.h"


int main()
{

	//User a[50];
	User b; 

	//std::cout << a[9].getID() << std::endl;
	//std::cout << a[0].getCounter() << "Get counter" << std::endl; 
	
	std::cout << User::getCounter() << "Class User - counter" << std::endl;
	std::cout << b.getID() << std::endl;
	system("pause");
    return 0;
}

