#include <iostream>

using namespace std;

int main() {

    char str1[] = "time";
   
    char str2[] = "ticket";
   
    char str3[] = "car";
    
    char str4[] = "basketball";
    
    char str5[] = "announcer";

    cout << "The strings before reversing: " << endl;

    cout << str1 <<" "<< str2 <<" "<< str3 <<" "<< str4 <<" "<< str5 <<" "<< endl;

    reverse(str1; str2; str3; str4; str5);

    cout << "The strings after reversing: " << endl;

    cout << str1 <<" "<< str2 <<" "<< str3 <<" "<< str4 <<" "<< str5 <<" "<< endl;

return 0;