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
	Vector2D origin;

	Vector2D first(10.0f, 20.0f);

	origin = first;

	std::cout << origin.ToString() << std::endl;
}


