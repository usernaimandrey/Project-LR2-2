#pragma once
using namespace System;
using namespace System::Windows::Forms;

#include <cmath>

double GetDouble(TextBox^);
void OutPut(double, TextBox^);
double CalcRoot(double, double, double&, ListBox^);
double Function(double, double);