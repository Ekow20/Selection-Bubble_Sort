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
	
	for(int i=0; i<n-1; i++){
		int minimum = i;
		for(int j=i+1; j<n; j++){
			if(array[j]<array[minimum]){
				minimum=j;
			}
		}
			int temp = array[i];
			array[i] = array[minimum];
			array[minimum]=temp;
	}
	for(int p=0; p<n; p++){
			cout<<array[p]<<" ";
	}
	
}
