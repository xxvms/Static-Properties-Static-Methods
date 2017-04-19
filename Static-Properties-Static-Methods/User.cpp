#include "stdafx.h"
#include "User.h"
#include <iostream>

int User::counter = 0;

User::User()
{
	counter++;
	ID = counter;
}


User::~User()
{
}
