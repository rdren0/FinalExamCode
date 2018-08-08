#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;

const int intMax = 3;
int intSum = 0;
int intArray[intMax];

void floatAverage(int);

int main(void)
{
	int intUserNum = 0;

	for (int i = 0; i < intMax; i++)
	{
		cout << "Enter a value between -149 and 149" << endl;
		cin >> intUserNum;
		
		while (intUserNum< -149 || intUserNum> 149)
		{
			cout << "This number is not between -149 and 149. Please enter a new number" << endl;
			cin >>intUserNum;
		}
		intArray[i] = intUserNum;
		intSum = intSum + intUserNum;
	
	}

	floatAverage(intSum);
	


	system("pause");
	return 0;
}


void floatAverage(int intNum)
{
	float averageNum;
	averageNum = intNum / intMax;

	cout << "The average is: " << averageNum << endl;

}
