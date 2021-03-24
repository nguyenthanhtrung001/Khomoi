#include<stdio.h>
using namespace std;
void nhapso(int &a)
{
    cout << "Nhap gia tri:";
    cin >> a;
}

int main() 
{
    int n, mang[100];
    cout << "Ban su dung bao nhieu so cho phep tinh ?\n";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "So thu " << i + 1 << "\n";
        nhapso(a[i]);
    }
    return 0;
}
