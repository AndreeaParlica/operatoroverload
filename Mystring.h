//
// Created by Andreea Parlica on 29.03.2022.
//

#ifndef OPERATOROVERLOAD_MYSTRING_H
#define OPERATOROVERLOAD_MYSTRING_H
class Mystring{
private:
    char *str;
public:
    Mystring();
    Mystring(const char *s);
    Mystring(const Mystring &source);
    ~Mystring();
    void display() const;
    int get_lenght() const;
    const char *get_str() const;
};
#endif //OPERATOROVERLOAD_MYSTRING_H
