#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int LENGHT = 20;

int randomNumber()
{
	int randNum1, randNum2;

	randNum1 = rand() % 101;
	randNum2 = (rand() % 101) * -1;

	return (randNum1 + randNum2);
}

void showList(int array[], int arrLength)
{
	for (int index = 0; index < arrLength; index++) {
		cout << array[index] << " ";
	}
}




int main()
{
	int list[LENGHT];
	//int randomNum1, randomNum2;
	double product = 1.0;
	
	srand(time(0));
	for (int index = 0; index < LENGHT; index++) {
		list[index] = randomNumber();
		cout << product << " ";
		product *= list[index];
	}

	cout << endl;
	showList(list, LENGHT);

/*	
	srand(time(0));
	for (int i = 0; i < LENGHT; i++) {
		randomNum1 = rand() % 101;
		randomNum2 = (rand() % 101) * -1;
		list[i] = randomNum1 + randomNum2;
		cout << product << " ";
		product *= list[i];
	}



	cout << endl;
	for (auto element : list)
		cout << element << " ";
	cout << endl;
*/

	bool isSorted = false;
	while (!isSorted) {
		isSorted = true;
		for (int i = 0; i < LENGHT - 1; i++) {
			if (list[i] > list[i + 1]) {
				int temp = list[i + 1];
				list[i + 1] = list[i];
				list[i] = temp;
				isSorted = false;
			}
		}
	}











	for (int element : list)
		cout << element << " ";
	cout << endl;

	cout << "Product: " << product
		<< "\nMaximun: " << list[LENGHT - 1]
		<< "\nMinimun: " << list[0]
		<< endl;




	cin.ignore();
	cin.get();
	return 0;
}