#include <iostream>
#include <string>
using namespace std;

int main() {

    string lastname;
    string firstname;
    string middle;

    cout << "Enter the persons first name: ";
    getline(cin, firstname);
    cout << "Enter the persons middle name, or initial: ";
    getline(cin, middle);
    cout << "Enter the persons last name: ";
    getline(cin, lastname);

    cout << "You have entered: " << lastname << ", " << firstname << " " << middle;

return 0;
