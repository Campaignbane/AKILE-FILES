#include <iostream>          

using namespace std;
#include <iostream>

using namespace std;


int main(){

    double perimeter, area;

    area_perimeter(side_a, side_b, side_c, perimeter, area);

    show_output(perimeter, area);

    cout << "Input the lengths of three sides of a triangle: ";
    cin >> side_a;

    while (side_a <= 0)
    {
    cout << "Enter a positive nonzero number for the length of side a";
    cin >> side_a;
    
    }
    cout << ",";
    cin >> side_b;

    while (side_b <= 0)
    {
        cout << "Enter a positive nonzero number for the length of side b";
        cin >> side_b;
    }
    return 0;