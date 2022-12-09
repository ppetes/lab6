#include <iostream>
#include <cmath>
using namespace std;
double deg2rad(double a){
return (a*M_PI)/180;}
double rad2deg(double b){
return (b*180)/M_PI;}
double findXComponent(double legx1, double legx2, double x1, double x2){
return legx1*cos(x1)+legx2*cos(x2);}
double findYComponent(double legy1, double legy2, double y1, double y2){
return legy1*sin(y1)+legy2*sin(y2);}
double pythagoras(double x, double y){
return sqrt(pow(x,2)+pow(y,2));}
void showResult(double c, double d){
cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
cout << "Length of the resultant vector = " << c << endl;
cout << "Direction of the resultant vector (deg) = " << d << endl;
cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;}

int main(){
    double l1,l2,a1,a2,xcomp,ycomp,result_vec_length,result_vec_direction;
    cout << "Enter length of the first vector: ";
    cin >> l1;
    cout << "Enter direction of the first vector (deg): ";
    cin >> a1;
    cout << "Enter length of the second vector: ";
    cin >> l2;
    cout << "Enter direction of the second vector (deg): ";
    cin >> a2;
    
    a1 = deg2rad(a1);
    a2 = deg2rad(a2);
    xcomp = findXComponent(l1,l2,a1,a2);
    ycomp = findYComponent(l1,l2,a1,a2);
    result_vec_length = pythagoras(xcomp,ycomp);
    result_vec_direction = rad2deg(atan2(ycomp,xcomp)); 

    showResult(result_vec_length,result_vec_direction);
}