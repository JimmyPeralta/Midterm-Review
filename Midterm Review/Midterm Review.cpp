#include <iostream>
using namespace std;
#include "Greetings.h"
#include <string>

int main()
{
	string n;
	int t;
	cout << "Enter the Name ==> ";
	getline(cin, n);
	cout << "Enter the Temperature ==>";
	cin >> t;
	                            
	Greetings gust(n, t);                //create an instant(object), if you put string next to "n" you are declaring n again
	gust.PrintMessage();                 //call createMessage because it will concatinate and print everything you will run the printmessage by using the object
}                                        //also printMessage is public! 