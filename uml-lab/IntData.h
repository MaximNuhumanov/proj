#pragma once
#include "BaseData.h"
class IntData : public BaseData
{
    private:
        int m_data;
    public:
        IntData(int data = 0);
        void print();
        void set(int data);
        int get();
        ~IntData();
};