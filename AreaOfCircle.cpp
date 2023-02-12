#include<iostream>
#include<cmath>
using namespace std;
float pi = 3.14;

int getAreaOfcircle(int rad){
    return rad * rad * pi;

}
int main(){
    int radius;
    int Area;
    cout<<"Enter the radius of the circle: "<<endl;
    cin>> radius;
    Area = getAreaOfcircle(radius);
    cout<<"Area of circle of "<<radius<<" is :"<<Area<<endl;

}