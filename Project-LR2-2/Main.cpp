#include "stdafx.h"

double Function(double x, double k)
{
	double z = (pow(x, k)) / k * (x - 0.5);
	return z;
}

double CalcRoot(double x, double condition, double& z, ListBox^ Lb)
{
	int k = 0; // начальное значение корня
	int i = 1; // счетчик итераций
	Lb->Items->Clear();
	String^ space = String(' ', 5).ToString();
	do
	{
		k += 1;
		z = Function(x, k);
		String^ row = String::Format("{0,11:D2}{1,14:D2}{2,5}{3,15:F9}", i, k, space, z);
		Lb->Items->Add(row);
		i += 1;
	} while (abs(z) >= condition);
	return k;
}