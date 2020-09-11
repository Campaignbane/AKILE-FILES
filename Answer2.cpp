#include <iostream>

using namespace std;



int main(){
	
	
	double N = 0, score, total, totalScore = 0, totalGrade = 0, GRADE;

	cout << "How many excersices will be scored?/n";
	cin >> N;

	for (int n = 1; N > n; n++)
	{
		cout << "Enter score # " << n << "/n";
		cin >> score;
		cout << "Enter the max total for score # " << n << "/n";
		cin >> total;

		totalScore = totalScore + score;
		totalGrade = totalGrade + total;
	}

	GRADE = (totalScore / totalGrade) * 100;
	cout << "Your total is " << totalScore << " out of " << totalGrade << " /n";
	cout << ", or " << GRADE << "%./n";


	return 0;
}