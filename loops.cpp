#include <iostream>

using namespace std;

int main(){
    int n;
    cout<<"Enter the number for the sum of the loop: ";
    cin>>n;
    int sum=0;
    do{
        int num;
        cin>>num;
        sum+= num;
        n--;

    }while (n>0);

    cout<<sum<<endl;

    return 0;
}