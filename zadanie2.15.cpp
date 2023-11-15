
#include <iostream>

using namespace std;
int main()
{
	setlocale(LC_ALL, "russian");
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sum = 0;
	for (int i = 0; i < 10; i++)
	{
		sum += arr[i];
	}
	cout << "Сумма: " << sum << endl;
	return 0;
}

