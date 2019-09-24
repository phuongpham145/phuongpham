#include<iostream>
 using namespace std ;
 int main()
 {
 	int n , i ;
 	float s=0;
 	cout<<"Nhap so nguyen N = ";
 	cin>>n;
 	for(i=1;i<=n;i++) s+=1./(n*(n+1));
 	cout<<"Tong cac so nguyen nghich dao lien tiep la "<<s<<"\n";
 	system("pause");
 }
