#include<iostream>

using namespace std;

int main() {
    string arr[8]= {"B123","C234","A345","C15","B177","G3003","C235","B179"};
    int i=0;
    string elmnt;

    while(i<8) {
        elmnt=arr[i];
        if(elmnt[0]=='B') {
            cout<<elmnt<<endl;
        }
        i++;
    };

    return 0;
}