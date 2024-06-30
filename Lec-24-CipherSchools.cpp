// Swapping values of two numbers using pointer method....




#include<iostream>
using namespace std;
int swap(int *p,int *q){
	int a=3;
	int b=4;
	int c;
	cout<<"Value of a and b before swapping:"<<a<<" "<<b<<endl;
	c=*p;
	*p=*q;
	*q=c;
	cout<<"Value of a and b after swapping:"<<*p<<" "<<*q<<endl;
	return 0;
}

int main(){
	
	int a=3;
	int b=4;
	swap(&a,&b);
//	cout<<"Value of a and b after swapping:"<<a<<" "<<b<<endl;
	return 0;
	
	
}







// getting value and address of each and every element inside array using pointer method...




#include<iostream>
using namespace std;
int function(int *p,int *q,int *r ,int *s){
	int a[3];

cout<<"Name of a:"<<a<<endl;
cout<<"Address of a[0] :"<<p<<" "<<"Value of a[0] :"<<*p<<endl;
cout<<"Address of a[1] :"<<q<<" "<<"Value of a[1] :"<<*q<<endl;
cout<<"Address of a[2] :"<<r<<" "<<"Value of a[2] :"<<*r<<endl;
cout<<"Address of a[3] :"<<s<<" "<<"Value of a[3] :"<<*s<<endl;
//cout<<"Value of a[0]:"<<&a[0]<<endl;
//cout<<"Value of a[1]:"<<&a[1]<<endl;
//cout<<"Value of a[2]:"<<&a[2]<<endl;
return 0 ;


}

int main(){
int a[3];
 a[0]= 10;
 a[1]= 20;
 a[2]= 30;
 a[3]= 40;
function(&a[0], &a[1], &a[2], &a[3]);
return 0;
	
	
}




	

