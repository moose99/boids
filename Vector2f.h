#pragma once

//
// class which represents a 2D vector
//
class Vector2f
{
private:
    float x;
    float y;
public:
	// constructors
    Vector2f();
    Vector2f(float x,float y);

    void add(Vector2f& vector);
    void subtract(Vector2f& vector);
    void multiply(float num);
	void divide(float num);
    void copy(Vector2f& vector);
    float getLength();
    void normalize();
    void setFromAngle(float angle);    

	// simple functions that are inlined
	float getX() { return x; }
	float getY() { return y; }
	void setX(float xInput) { x = xInput; }
	void setY(float yInput) { y = yInput; }
};
