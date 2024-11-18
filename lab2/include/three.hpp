#pragma once

#include <stdexcept>
#include <string>
#include <initializer_list>

class Three 
{
public:
    Three();                                                    // дэфолтный конструктор
    Three(const size_t& n, unsigned char value = 0);            // хз
    Three(const std::initializer_list<unsigned char>& values);  // передается список цифр {2, 2, 1, 2, 0, 0, 1}
    Three(const std::string& t);                                // передаем строку
    Three(const Three& other);                                  // конструктор копирования
    Three(Three&& other) noexcept;                              // какое то другое копирование..
    virtual ~Three() noexcept;                                  // дестрктор

    Three &operator=(const Three& other);
    Three &operator+=(const Three& other);
    Three &operator-=(const Three& other);

    bool operator==(const Three& other) const;
    bool operator==(const Three& other) const;
    bool operator==(const Three& other) const;

    size_t getSize() const;
    unsigned char* getData() const;

private:
    size_t _size;
    unsigned char* _data;

    void validateTrit(unsigned char digit);
};