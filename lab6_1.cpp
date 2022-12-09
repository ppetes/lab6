#include<iostream>
using namespace std;

int main(){
int N;
int i = 0;
int x = 0;
while(N != 0){
    cout << "Enter an integer: " ; 
    cin >> N;
    if(N%2 == 0){
    i++;}
    else{
    x++;
}
}
    cout << "#Even numbers = " << i-1 << endl;
    cout << "#Odd numbers = " << x << endl;
    return 0;

}