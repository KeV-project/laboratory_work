#include "Rect.h"

void Rect::SetCenter(const float x, const float y)
{
	_center = Point(x, y);
}

void Rect::SetLength(const float length)
{
	FloatValidator::AssertPositiveValue(length, "����� ��������������");
	this->_length = length;
}

void Rect::SetWidth(float width)
{
	FloatValidator::AssertPositiveValue(width, "������ ��������������");
	this->_width = width;
}

float Rect::GetLength()
{
	return this->_length;
}

float Rect::GetWidth()
{
	return this->_width;
}

float Rect::GetCentreX()
{
	return _center.GetX();
}

float Rect::GetCentreY()
{
	return _center.GetY();
}

float Rect::GetArea()
{
	return _length * _width;
}

int Rect::GetAllRectCount()
{
	return AllRectCount;
}

Rect::Rect()
{
	_center = Point(0.0, 0.0);
	SetLength(1.0);
	SetWidth(1.0);
}

Rect::Rect(const float length, const float width, 
	const float x, const float y)
{
	_center = Point(x, y);
	SetLength(length);
	SetWidth(width);
}

void Rect::PrintRect()
{
	cout << "x = " << _center.GetX() << ", y = ";
	cout << _center.GetY << ", ����� = ";
	cout << _length << ", ������ = " << _width;
}
