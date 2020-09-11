#include <iostream>

using namespace std;

int main() {

	h = int(timeComp);
	m = int(timeComp);
    
	output = "";
 
	if (timeData == "AM") :
	
		output += "0" + str(h) + str(m) + " hours"
	(h == 12) :
	
		output += "00" + str(m) + " hours"
else:
	output += str(h) + str(m) + " hours"

else:
  h = h + 12
 
  output += str(h) + str(m) + " hours"

return output

}



