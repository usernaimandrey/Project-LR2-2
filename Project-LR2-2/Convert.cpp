#include "stdafx.h"

double GetDouble(TextBox^ Tx)
{
	double result = Convert::ToDouble(Tx->Text);
	return result;
}

void OutPut(double x, TextBox^ Tx)
{
	Tx->Text = x.ToString();
}