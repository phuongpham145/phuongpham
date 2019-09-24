#include<iostream>
   using namespace std ;
   int main()
   {
   	int i , n ;
   	float s = 1 ;
   	cout<<"Nhap so nguyen N = ";
   	cin>>n ;
   	for(i=1;i<=n;i++) s+=1./(2*i+1);
   	cout<<"Tong Nghich Dao Cac So Le Tu 1 Den "<<n<<" = "<<s<<endl;
   	system("pause");
   }
