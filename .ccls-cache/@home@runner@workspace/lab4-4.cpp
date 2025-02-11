//Lab4-4.cpp - displays the volume of a cylinder
//Created/revised by Kyle Gallagher on 2/10/25
#include <iostream>
#include <cmath>
using namespace std;
int main(){
  double radius = 0.0;
  double height = 0.0;
  double volume = 0.0;
  const double PI = 3.14159;
  cout << "Height: ";
  cin >> height;
  cout << "Radius: ";
  cin>> radius;
  volume = PI * radius * radius * height;
  cout << "Volume: " << volume << endl;
  return 0;
}