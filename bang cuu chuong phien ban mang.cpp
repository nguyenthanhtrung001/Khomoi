// bang cuu chuong phien ban mang.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int i, j, n, b;
int a[50];


int main()
{
    cout << "ban muon xuat may ban cuu chuong:";
    cin >> n;
    cout << "\nDo la ban cuu chuong nao?\n";
    for (i = 0; i < n; i++)
    {
        cout << "\nbang cuu chuong:";
        cin >> a[i];
    }
   // cout << "\nday mang:";
   // for (i = 0; i < n; i++)
   //{
   //  cout << a[i]<<"\t";
   //}
    
    for (i = 0; i <n; i++)
    {
        
        
        for (j = 1; j <=10; j++)
        {
            
           b= a[i] * j;
           
           cout <<"\t\t\t"<< a[i] << " x " << j << " = " << b;
           cout << "\n";
           

        }
        cout << "\n";
    }
    


}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
