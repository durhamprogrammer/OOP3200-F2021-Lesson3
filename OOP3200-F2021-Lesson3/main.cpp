/*
 * Author: Tom Tsiliopoulos
 * StudentID: 100100100
 *
 * Date: September 20, 2021
 * Description: Demo Project for OOP3200 - F2021 - Week 3
 * 
 */

#include <iostream>

#include "Vector2D.h"

int main()
{
	try
	{
		float scalar = 1.5f;

		// getting input from the console into our vector 2 object
		Vector2D origin;
		std::cin >> origin;

		Vector2D first(5.0f, 6.0f);

		origin = scalar * origin * 0.5f;

		// output to the console from our vector 2 object
		std::cout << origin << std::endl;
	}
	catch (std::exception& exception)
	{
		std::cerr << exception.what() << " Ending Program" << std::endl;
	}
	
	
}


