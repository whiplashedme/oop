#pragma once

#include <stdexcept>
#include <string>
#include <initializer_list>

class Three 
{
public:
    Three();                                                    
    Three(const size_t&, unsigned char value = 0);              
    Three(const std::initializer_list<unsigned char>&);         
    Three(const std::string&);                                  
    Three(const Three&);                                        
    Three(Three&&) noexcept;                                    
    virtual ~Three() noexcept;                                  

    Three &operator=(const Three&);
    Three &operator+=(const Three&);
    Three &operator-=(const Three&);

    bool operator==(const Three&) const;
    bool operator==(const Three&) const;
    bool operator==(const Three&) const;

    size_t getSize() const;
    unsigned char* getData() const;

private:
    size_t _size;
    unsigned char* _data;

    void validateTrit(const unsigned char digit) const;
};