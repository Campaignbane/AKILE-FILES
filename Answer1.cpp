#include <iostream>
using namespace std;

int main()
{
	double start;
	double end;
	double velocity;

	cout << "Enter the starting temperature: ";
	cin >> start;

	cout << "Enter the ending temperature: ";
	cin >> end;

while (start <= end)
	{
	velocity = 331.3 + 0.61 * start;
    
	cout << "At " << start
			<< " degrees Celsius the velocity of sound is "
			<< velocity << " m/s" << endl;

		start++;
	}

	return 0;
}