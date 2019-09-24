#include<iostream>
 using namespace std ;
 int main()
 {
 	int i , n , s=0;
 	cout<<"Nhap so nguyen N = ";
 	cin>>n;
 	for(i=0;i<=n;i++) s+=i*i ;
 	cout<<"Tong binh phuong cac so tu 1 den "<<n<<" = "<<s<<endl;
 	system("pause");
 }
