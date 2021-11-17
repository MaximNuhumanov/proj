#include "DoubleData.h"
#include <iostream>
using namespace std;
DoubleData::DoubleData(double data )
{
	m_data = data;
};
void DoubleData::print()
{
	cout << m_data;
};
DoubleData:: ~DoubleData() {};
void DoubleData::set(double data) 
{
	m_data = data; 
};
double DoubleData::get() 
{ 
	return m_data; 
};