#pragma once //����������� ����� ���� ���
#include <iostream>
using namespace std;
/*
struct - �������� �����
Vector - ��� ������(���������)
float re; - ����
void setRe(float re); - ������
*/
//class - ���� �� ��������� ��������� (private)
//struct - ���� �� ��������� ��������� (public)
class Vector {
private:
	int dimension;//�����������
	float* data;
public:
	Vector(int dim, float def); //����������� (����������� / �������� �� ���������)
	~Vector(); // ���������� (�����, ������� ���������� ����� ��������� �������)
	Vector operator+(const Vector& other);
	Vector operator-(const Vector& other);
	Vector operator*(float other);
	float operator*(const Vector& other);
	int getDimension(); // �����, ������������ ����������� �������
	float& operator[](int); // �������� ������� � ������
};

Vector operator*(float re, Vector& c);

istream& operator>>(istream& is, Vector& c);
ostream& operator<<(ostream& os, Vector& c);


