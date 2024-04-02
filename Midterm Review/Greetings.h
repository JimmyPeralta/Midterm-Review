#pragma once
#include <iostream>
using namespace std;

class Greetings
{
private:
	string name;
	int temperature;
	string CreateMessage();

public:
	Greetings(string, int);
	void PrintMessage();
};

