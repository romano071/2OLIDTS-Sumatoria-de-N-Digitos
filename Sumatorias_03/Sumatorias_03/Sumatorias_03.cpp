#include <iostream> 
using namespace std;
const int num = 8;
int main() {
	int nums[num];
	int total = 0;
	for (int i = 0; i < num; i++)
	{
		cout << "Introduce el numero porfis: ";
		cin >> nums[i];

		total += nums[i];

	}
	cout << "El total de numero es: " << total << endl;
	system("pause");

	return 0;
}