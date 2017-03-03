#include<iostream>
using namespace std;

int A[]={6,5,3,1,8,7,2,4};
int temp[8];
int pass=0;
int l1,l2,h1,h2,i, j,k,s;

int main(){
	
	for(s=1; s<8; s=s*2){
		l1=0;
		k=0;
		
		while(l1+s<8){
			h1=l1+s-1;
			l2=h1+1;
			h2=l2+s-1;
			if(h2>=8)
				h2=8-1;
			i=l1;
			j=l2;
			
			while(i<=h1 && j<=h2){
				if(A[i] <= A[j])
					temp[k++]=A[i++];
				else
					temp[k++]=A[j++];
			}
			
			while(i<=h1)
				temp[k++]=A[i++];
				
			while(j<=h2)
				temp[k++]=A[j++];
			l1=h2+1;
		}
		
		for (i=l1; k<8; i++)
			temp[k++]=A[i];
			
		for (i=0; i<8; i++)
			A[i]=temp[i];
			
		++pass;
		cout<<"\nPass " << pass << ": "<<endl;
		for(int c=0; c<8; ++c){
			cout<<" " << A[c];
		}
	}
	return 0;	
}
