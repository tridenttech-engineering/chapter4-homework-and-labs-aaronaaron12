//Lab4-4.cpp - displays the volume of a cylinder
//Created/revised by <Aaron Bloodworth> on <05FEB25>

#include <iostream>
using namespace std;
int main()
{
//delcare names
  double height   = 0.0;
  double radius   = 0.0;
  double volume   = 0.0;
  const double pi = 3.14;

  //enter the height and radius

cout << "Height: ";
  cin >> height;
cout << "Radius: ";
  cin >> radius;
  //calculate the volume
  volume = pi * radius * radius * height;
cout << "Volume: " << volume << endl;
  return 0;
  



  } //end of main function
