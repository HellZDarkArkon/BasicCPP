#include <iostream>

int main() {

	int a = 0;
	float b = 0.0f;
	double c = 0.0;
	char d = ' ';
	std::string e = " ";

	{
		a = 15;
		b = 1.0f;
		c = 0.0002;
		d = 'e';
		e = "Hello, World.";
	}

	std::cout << a << std::endl 
		<< b << std::endl 
		<< c << std::endl 
		<< d << std::endl 
		<< e << std::endl;
	return 0;
}