#include <iostream>

#include <string>


using namespace std;


int main(){

	double average(double current, double previous)
	{
	
	double out = (current + previous) / 2;
	
	double avg = out;

	if (out < current) {
	avg *= -1;
	}
   
	return avg;
	
	}
	string displayDots(double x)
	{
	
	string dots = "*";
	
	for (double i = 0; i < x; i += 0.1) {
	dots += "*";
		}
return dots;
