#include<iostream>
   using namespace std ;
   int main()
   {
   	int n,i,s=0;
   	cout<<"Nhap so nguyen N = " ;
   	cin>>n;
   	for(i=0;i<=n;i++) s+=i ;
   	cout<<"\nTong cac so nguyen tu 1 den "<<n<<" = "<<s<< endl;
   	system("pause");
   }
