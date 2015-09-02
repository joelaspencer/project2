#include <iostream>

/*

syntax for switches:

switch(<value>)
{
	case <value1>:
		<statements to execute>
	break;

	case <value2>:
		<statements to execute>
	break;

	case <value3>:
		<statements to execute>
	break;
	
	default:
		<statements to execute>
	break;
}

*/

/*
variable

definition:
	<type> <alias>;
	int choice;

instantiation:
	int choice = 0;

initialization:
	first time assignment takes place for a variable

assignment:
	push a value into a variable.
	choice = 0;

*/



int main()
{
	int choice = 0;
	std::cin >> choice;


	switch(choice)
	{
	case 1:
		std::cout << "1";
		break;

	case 2: 
		std::cout << "2 or 3";


		break;

	case 3:
		std::cout << "4";

		break;
	default:		std::cout << "invalid";
		break;
	}
}
