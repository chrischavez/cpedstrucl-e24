#include<iostream>
using namespace std;

int main(){
	int burp(1);
	int A[]={35,10,55,20,5};
	
	//Sorting algorithm for bubble sort
	for(int i=1;i<5;++i){	
		for(int j=0;j<(5-1);j++)
		
			if(A[j] > A[j+1]){
				int swap = A[j];
				A[j] = A[j+1];
				A[j+1] = swap;
			}
			cout<<"Pass "<<burp++<<endl;
			for(int k=0;k<5;++k)
			cout<<" "<<A[k]<<endl;	
		}
	return 0;
}
