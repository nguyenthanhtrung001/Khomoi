// chuyen ngay thang nam.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int ngay, thang, nam;
int thanghs, ngayhs,namhs;
double namhs1, namhs2;

int main()
{
    std::cout << "ngay...thang...nam...\n";
    cout << "ngay:"; cin >> ngay;
    cout << "thang:"; cin >> thang;
    cout << "nam:"; cin >> nam;
     ngayhs = ngay + 1;
     thanghs = thang;
     namhs = nam % 4;
     namhs1 = nam % 100;
     namhs2 = nam % 400;
     if (thang > 12 || nam < 100 || ngay>31 )
     {
         cout << "CON ME M RANH LAM.NHAP CUNG SAI ^++^\n";
     }
     else
     { 
         if (thang == 2 && namhs == 0 && namhs1 != 0 || namhs2 == 0)
     {
         cout << "day la nam nhuan!\n";
         switch (ngay)
         {
         case 29: ngayhs = 1; thanghs = thang + 1;
             cout << "\n1hom nay ngay " << ngay << "  thang " << thang << " nam " << nam << "\n";
             cout << "ngay mai ngay " << ngayhs << " thang " << thanghs << " nam " << nam;
             break;
         default:
             cout << "\n1.hom nay ngay " << ngay << "  thang " << thang << " nam " << nam << "\n";
             cout << "ngay mai ngay " << ngayhs << " thang " << thanghs << " nam " << nam;

         }
     }
         else
     {
         switch (ngay)
         {
         case 28: {ngayhs = 1; thanghs = thang + 1;
             cout << "\n2hom nay ngay " << ngay << "  thang " << thang << " nam " << nam << "\n";
             cout << "ngay mai ngay " << ngayhs << " thang " << thanghs << " nam " << nam; }
                break;
         case 29:


         {
             cout << "\nkhong co ngay 29-do nam khong nhuan";
             // int ngayhn = ngay - 1;
              //ngayhs = ngay - 28;
              //thanghs = thang + 1;

              //cout << "\n3hom nay ngay " << ngayhn << "  thang " << thang << " nam " << nam << "\n";
              //cout << "ngay mai ngay " << ngayhs << " thang " << thanghs << " nam " << nam;
              //break;
         }
         }

     }
     {
             if ( thang == 1 || thang == 3 || thang == 5 || thang == 7 || thang == 8 || thang == 10 || thang == 12 )
                 if(ngay<=30)
     {
                      thanghs = thang;
                      ngayhs = ngay + 1;
                      cout << "\n4hom nay ngay " << ngay << "  thang " << thang << " nam " << nam << "\n";
                      cout << "\nngay mai ngay " << ngayhs << " thang " << thanghs << " nam " << nam;
     }
                 else if (ngay >= 31 &&thang == 1 || thang == 3 || thang == 5 || thang == 7 || thang == 8 || thang == 10 || thang == 12 )
     {
         switch (thang)
         {
         case 1:
         case 3:
         case 5:
         case 7:
         case 8:
         case 10:
             if (ngay = 31)
             {
                 ngayhs = 1;
                 thanghs = thang + 1;
             }
             cout << "\n5.hom nay ngay " << ngay << "  thang " << thang << " nam " << nam << "\n";
             cout << "ngay mai ngay " << ngayhs << " thang " << thanghs << " nam " << nam;
             break;

         case 12:
         { thanghs = 1; 
         namhs = nam+1; 

         //thang < 12 ? thanghs = thang : thanghs= thang - 11; 
         //thang < 12 ? nam = nam : nam = nam + 1;
         ngayhs = ngay - 30;
         //thanghs = thang + 1;
         }
         cout << "\n5hom nay ngay " << ngay << "  thang " << thang << " nam " << nam << "\n";
         cout << "ngay mai ngay " << ngayhs << " thang " << thanghs << " nam " << namhs;
         }
     }}
     if (thang == 4 || thang == 6 || thang == 9 || thang == 11 && ngay <= 29)
     {
         thanghs = thang;
         ngayhs = ngay + 1;
         cout << "\n6hom nay ngay " << ngay << "  thang " << thang << " nam " << nam << "\n";
         cout << "ngay mai ngay " << ngayhs << " thang " << thanghs << " nam " << nam;
     }
     else if (ngay >= 30 && thang == 4 || thang == 6 || thang == 9 || thang == 11)
     {
         ngayhs = ngay - 29;
         thanghs = thang + 1;
         cout << "\n7hom nay ngay " << ngay << "  thang " << thang << " nam " << nam << "\n";
         cout << "ngay mai ngay " << ngayhs << " thang " << thanghs << " nam " << nam;
     }





     }
     if (ngay == 31 && thang == 12)
         cout << "\n\n\n happy new year@@@@@@@@@@@\n\n";
    
}

