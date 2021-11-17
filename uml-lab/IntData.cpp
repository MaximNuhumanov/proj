#include "IntData.h"
#include <iostream>
using namespace std;
IntData::IntData(int data )
{
	m_data = data;
};
void IntData::print() 
{
	cout << m_data;
};
IntData:: ~IntData() {};
void IntData::set(int data)
{
	m_data = data;
};
int IntData::get()
{
	return m_data;
};