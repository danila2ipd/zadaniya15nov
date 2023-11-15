
#include <iostream>

using namespace std;
int main()
{
	setlocale(LC_ALL, "russian");
	int number, count = 0;
	cout << "Введите число: ";
	cin >> number;
	for (int temp = number; temp != 0; temp /= 10)
	{
		count++;
	}
	cout << "Количество цифр: " << count << endl;
	return 0;
}


