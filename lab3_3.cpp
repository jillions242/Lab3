#include <iostream>
using namespace std;
int main (){
    int number,i=6;
    float sum=0;
    cout <<"enter :";
    cin>>number;
    while(i<=number){
		sum+= 1.0/i;
		++i;
	}
        cout<<"Sum : "<< sum;
	
        
    return 0;
}
