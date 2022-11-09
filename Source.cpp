#include <iostream>
#include <ctime>
using namespace std;
int main() {
	//const int n = 10;
	//int mas[n];
	//srand(time(nullptr));
	//диапазон от -20 до 20
	//for (int i = 0; i < n; i++) {
		//mas[i] = rand() % 41 - 20;
		//cout << mas[n] << ' ';
	//}
	//cout << endl; 
//}






	/*const int n = 10;
	int mas[n];
	mas[0] = 2;
	cout << mas[0] << ' ';
	for (int i = 1; i < n; i++) {
		mas[i] = mas[i - 1] * 2;
		cout << mas[i] << endl;
	}
}
*/


//Array3.Дано целое число N(> 1), а также первый член A и разность D арифметической прогрессии.Сформировать и вывести массив размера N, содержащий N первых членов данной прогрессии :
//A, A + D, A + 2·D, A + 3·D, . . . .
	/*const int n = 10;
	int mas[n];
	int a, d;
	cin >> a >> d;
	mas[0] = a;
	cout << mas[0] << ' ';
	for (int i = 1; i < n; i++) {
		mas[i] = mas[i - 1] + d;
		cout << mas[i] << ' ';
	}
}
*/




//Array7?
//Дан массив размера N.Вывести его элементы в обратном порядке.
	//int a[100]{}, n, i;
//cout << "n:";
//cin >> n;
//for (i = 0; i < n; ++i) {
	//cout << "a[" << i << "]:";
	//cin >> a[i];
//}
//for (i = n - 1; i >= 0; --i)
	//cout << "a[" << i << "]=" << a[i] << endl;
//}


	




	//Array12. Дан массив A размера N (N — четное число). Вывести его элементы
	//с четными номерами в порядке возрастания номеров : A2, A4, A6, . . ., AN .
		//Условный оператор не использовать.
	//int n;
	//cin >> n;
	//int a[10];
	//for (int i = 0; i < n; ++i) { 
		//cin >> a[i];
	//}
	//for (int i = 1; i < n; i += 2) 
		//cout << a[i] << " ";
//}





		//Array14.Дан массив A размера N.Вывести вначале его элементы с четными
	   // номерами(в порядке возрастания номеров), а затем — элементы с нечетными номерами(также в порядке возрастания номеров) :
	   // A2, A4, A6, . . ., A1, A3, A5, . . . .
	int a[10];
	int n, i;
	cout << n;
	for (i = 0; i < n; i++)
	{
		cout << "a[" << i << a[i];
	}
	for (i = 1; i < n; i += 2)
	{
		cout << "a[" << i << "]=" << a[i] << endl;
	}
	cout << " " << endl;
	for (i = 0; i < n; i += 2)
	{
		cout << "a[" << i << "]=" << a[i] << endl;
	}
