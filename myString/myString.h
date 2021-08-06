#pragma once
#include <iostream>
#include "myVector.h"

class myString
{
private:
	char* string;
	size_t string_size;
	size_t string_capacity;

	void destroy();
	void copy(const myString&);
	void resize();

public:
	void set_string(const char*);
	char* get_string()const;
	size_t get_string_size()const;
	myString();
	myString(const myString&);
	myString& operator=(const myString&);
	~myString();
	const char operator[](const size_t)const;
	char& operator[](const size_t);
	void addElement(const char&);
	void addCharArr(const char*); //?
	void concatStrings(const myString&);
	myString convertAllLettersToSmall(myString&);
	bool operator>(const myString&)const;
	bool operator==(const myString&)const;
	bool operator==(const char* arr)const;
	myVector<myString> split(const char&);
	int toInt();
	bool chekString()const;
	bool isDigit()const;
	bool isDigitInt()const;

	friend std::istream& operator>>(std::istream&, myString&);
	friend std::ostream& operator<<(std::ostream&, const myString&);

};
