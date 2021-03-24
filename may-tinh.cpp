

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
    
return 0;

}



