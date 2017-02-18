#include<iostream>
using namespace std;

void shell_sort(int *A, int n){
	
	int burp(0);
	int h,i,j,f;
	
	for(h=n; h/=2;){
		for(i=h; i<n; i++){
			f=A[i];
			for(j=i; j>=h && f<A[j-h]; j-=h){
				A[j] = A[j-h];
			}
			
			A[j]=f;
			cout<<"Pass "<<++burp<<endl;
			for(int f=0;f<5;++f)
			cout<<" "<<A[f]<<endl;
			
		}
	}
}

int main(int ac, char **av){
	int A[]={40,30,20,50,10};
	int n = 5;
	shell_sort(A,n);
	return 0;
	
}
