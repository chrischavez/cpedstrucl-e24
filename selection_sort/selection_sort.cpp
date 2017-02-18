#include<iostream>
using namespace std;

int main(){
	int burp(1);
	int A[]={30,40,20,50,10};
	
		for(int i=0;i<5-1;i++)
		{
			int min=A[i],index=i;
			for(int j=i+1;j<5;j++)
			{
				if(A[j]<min)
				{
					min=A[j];
					index=j;		
				}
					A[index]=A[i];
					A[i]=min;
					
						cout<<"Pass "<<burp++<<endl;
						for(int f=0;f<5;++f)
						cout<<" "<<A[f]<<endl;	
			}

		}
return 0;
}
