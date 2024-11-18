#include "../include/three.hpp"
#include <iostream>

Three::Three() : _size{0}, _data{nullptr} {}

Three::Three(const size_t& n, unsigned char value)
{

    validateTrit(value);
    _size = n;
    _data = new unsigned char[n];
    for (int i = 0; i < n; ++i)
    {
        _data[i] = value;
    }
}

Three::Three(const std::initializer_list<unsigned char>& values)
{
    _size = values.size();
    _data = new unsigned char[_size];

    const unsigned char* firstElem = values.begin();

    for(size_t i = 0; i < _size; ++i)
    {
        unsigned char digit = *firstElem++;
        validateTrit(digit);
        _data[i] = digit;
    }
}

Three::Three(const std::string& str)
{
    _size = str.size();
    _data = new unsigned char[_size];

    for(size_t i = 0; i < _size; ++i)
    {
        unsigned char digit = str[i];
        validateTrit(digit);
        _data[i] = digit;
    }

}

Three::Three(const Three& other)
{
    _size = other._size;
    _data = new unsigned char[_size];

    for(size_t i = 0; i < _size; ++i)
    {
        _data[i] = other._data[i];
    }
}

Three::Three(Three&& other) noexcept 
{
    _size = other._size;
    _data = other._data;

    other._size = 0;
    other._data = nullptr;  
}

Three::~Three() noexcept
{
    delete[] _data;
    _data = nullptr;
    _size = 0;
}

void Three::validateTrit(unsigned char digit)
{
    if(digit != '0' && digit != '1' && digit != '2')
    {
        throw std::invalid_argument("Invalid trit (trinary digit)");
    }
}