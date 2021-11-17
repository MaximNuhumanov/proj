#pragma once
#include "BaseData.h"
class DoubleData : public BaseData
{
private:
    double m_data;
public:
    DoubleData(double data = 0.0);
    void print();
    void set(double data);
    double get();
    ~DoubleData();
};
