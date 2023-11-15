
#include <iostream>

using namespace std;
int main()
{
	setlocale(LC_ALL, "russian");
	int number;
	cout << "Введите число: ";
	cin >> number;
	if (number > 0)
	{
		cout << "Число положительное" << endl;

	}
	else if (number < 0)
	{
		cout << "Число отрицательное" << endl;
	}
	else if (number == 0)
	{
		cout << "Число является нулем" << endl;
	}
	return 0;
}

