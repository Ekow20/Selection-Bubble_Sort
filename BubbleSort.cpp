#include <iostream>
using namespace std;



int main(){
	int n;
	cout<< "Enter the size of the array:  ";
	cin>>n;
	int array[n];
	for(int i =0; i<n; i++){
		cout<<"Enter number "<<i+1<<":  ";
		cin>>array[i];
	}
	
	for(int i=0; i<n; i++){
		for(int j=0; j<n-1; j++){
			if(array[j]>array[j+1]){
			 int temp = array[j];
			 array[j] =array[j+1];
			 array[j+1]=temp;
			}
		}
		
		}
		for(int m=0; m<n; m++){
			cout<<array[m]<<" ";
	}
	
}


