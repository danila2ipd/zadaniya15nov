
#include <iostream>

using namespace std;
int main()
{
	setlocale(LC_ALL, "russian");
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int proizvedenie = 1;
	for (int i = 0; i < 10; i++)
	{
		proizvedenie *= arr[i];
	}
	cout << "Произведение: " << proizvedenie << endl;
	return 0;
}

