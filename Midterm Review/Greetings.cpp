#include "Greetings.h"
using namespace std;

string Greetings::CreateMessage()                              //will evaluate the temperature
{
	if (this->temperature >= 90)
	{
		return "It is Hot!!!!";                                                  
	}
	else if (this->temperature >= 80)
	{
		return "It is a little Hot!!!";
	}
	else if (this->temperature >= 70)
	{
		return "It is Cool!!!";
	}
	else if (this->temperature >= 40)
	{
		return "It is getting Cold";
	}
	else
	{
		return "It is Cold";
	}
}

Greetings::Greetings(string n, int t)
{ 
	this->name = n;                                          //create an object
	this->temperature = t;                                   //creating an object
}

void Greetings::PrintMessage()                               //return nothing                  
{
	cout << "Hello, " << this->name << ". The temperature is " << this->temperature << " degrees. " << CreateMessage() << endl; 
}
