#pragma once
#ifndef __VECTOR_2D__
#define __VECTOR_2D__

#include <string>

class Vector2D
{
public:
	// CONSTRUCTOR(S)
	Vector2D();

	// DESTRUCTOR
	~Vector2D();

	// GETTERS (Accessors)
	float GetX() const;
	float GetY() const;

	// SETTERS (Mutators)
	void SetX(float x);
	void SetY(float y);
	void Set(float x, float y);

	// PUBLIC METHODS (Public Class Functions)
	std::string ToString() const;

	// PUBLIC STATIC METHODS (Public Class Functions that are Static)

private:
	// INSTANCE VARIABLES (Class Member Variables)
	float m_x;
	float m_y;

	// PRIVATE METHODS (Private Class Functions)
};

#endif /* defined (__VECTOR_2D__) */