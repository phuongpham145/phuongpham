#include<iostream>
  using namespace std ;
  int main()
  {
  	int i , n ;
  	float s=0 ;
  	cout<<"Nhap so nguyen N = " ; 
  	cin>>n ;
  	for(i=1;i<=n;i++) s+=1./i ;
  	cout<<"Tong Nghich Dao Cac So Tu 1 Den "<<n<<" = "<<s<<endl;
  	system("pause"); 	
  }
