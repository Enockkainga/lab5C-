#include<iostream>

using namespace std;

int main() {
    int num;
    cout<<"Enter an integer value between 5 and 10"<<endl;
    cin>>num;
    if(num>4 && num<11) {
        cout << "Your input value "<<num<<" has been accepted" << endl;
    }
    else if(num<5 || num>10) {
        cout << "you entered " <<num<<" Please enter a number between 5 and 10" <<endl;
    }
    else {
        cout << "Sorry, you have entered an invalid number, please try again" << endl;
    }
    return 0;

}