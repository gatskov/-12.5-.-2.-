//12.5 Практическая работа Задание 2. Сортировка
#include <iostream>
using namespace std;
// Сортировка вставками (Сложность в лучшем случае: O(n). Сложность в худшем случае: O(n2).)
//-------------------------------------------------------------------------------------------
void insertionSort(double list[], int listLength)
{
	for(int i = 1; i < listLength; i++)
	{
		int j = i - 1;
		while(j >= 0 && list[j] < list[j + 1])
		{
			swap(list[j], list[j + 1]);
			j--;
		}
	}
}
//----------------------------------------------------------------------------------------------
int main()
{
    cout << "12.5 Practical work Task 2. Sorting" << endl;
    cout <<"===============================================\n";
    cout <<"\nEnter an array of 15 fractional numbers...\n";
	double list[15];
    for(double & i : list){
        cin >> i ;
       if (double((int)i) == i){
         cout << "\nError! Incorrect number ";return 0;}
    }
    cout <<"\n=============================================\n";
	cout <<"Input array ...\n";
    for (double i : list)
        cout << i << "\t";
    insertionSort(list, 15);
	cout<<"\n\nSorted array ... \n";
	for (double i : list)
	{
	   cout<<i<<"\t";
	}
    cout << "\n============================================\n";
	return 0;
}
