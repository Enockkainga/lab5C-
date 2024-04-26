#include<iostream>

using namespace std;
int square(int lngth) {
    int result=lngth*lngth;
    return result;

}
int rectangle(int lngth,int wdth) {
    int result = lngth*wdth;
    return result;

}
double triangle(int bas, int hght) {
    double result= 0.5*bas*hght;
    return result;
}
int main() {
    int num;
    cout<<"Please select the area of the area to calculate"<<endl;
    cout << "1.Square\n2.Rectangle\n3.Triangle\n4.Quit Program" << endl;
    cout << "Enter selection:" << endl;
    cin >> num;
    if(num==1) {
        int lngth;
        cout << "Enter length of side:" << endl;
        cin>>lngth;
        cout << " Area of the square is : "<<square(lngth)<< endl;
    }
    if(num==2) {
        int lngth, wdth;
        cout << "Enter length:" << endl;
        cin>>lngth;
        cout << "Enter width:" << endl;
        cin >> wdth;
        cout << "Area of the rectangle is : "<< rectangle(lngth,wdth)<< endl;

    }

    if(num==3) {
        int bas, hght;
        cout << "Enter base length:" << endl;
        cin>>bas;
        cout << "Enter height:" << endl;
        cin >> hght;
        cout << "Area of the triangle is : "<< triangle(bas,hght)<< endl;
    }
    if(num==4) {
        return 0;
    }
    return 0;

}