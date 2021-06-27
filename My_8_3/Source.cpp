#include <iostream>
using namespace std;


double sa(int* arr,int n) {
	double s = 0;
	for (int i = 0; i < n; i++)
		s += arr[i];
	s /= n;
	return s;
}

int main() {
	setlocale(LC_ALL, "Rus");

	int N;
	cout << "Введите размер массива: ";
	cin >> N;

	int* arr = new int[N];
	cout << "Заполните массив через пробел: " << endl;
	for (int i = 0; i < N; i++)
		cin >> arr[i];

	cout << "Среднее арифметическое значений массива: " << sa(arr,N);




	return 0;
}