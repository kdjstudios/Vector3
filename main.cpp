//============================================================================
// Name        : Vector3Test
// Author      : Kyle J.
// Version     :
// Copyright   :
// Description : Testing functionality of Vector3
//============================================================================

#include <iostream>
#include "Vector3.h"
using namespace AO::Vector3;
using namespace std;

int main()
{
// Demonstrates other copy constructor, static member variable usage, and unary operator-
//const Vector3 backward(-Vector3::Forward);
const Vector3 backward(Vector3::Backward);
// Demonstrates cross product
const Vector3 right( cross(Vector3::Forward,Vector3::Up ));

// Demonstrates constructor
Vector3 testVect(10.0f, 30.0f, 1.0f);

// Demonstrates operator<<
cout << testVect << '\n';
// Demonstrates clamp/truncate method
truncate(testVect,3);
cout << "truncated at 3: " << testVect << '\n';

// Demonstrates reflect method
const Vector3 reflection( reflect(testVect,backward) );
cout << "Reflected off surface with 'backward' as the normal, " << reflection << '\n';

// Demonstrates operator*, we don't const 'doubleFwd' because we want to use normalize later.
Vector3 doubleFwd(Vector3::Forward* 2);

cout << "Double Forward, " << doubleFwd << '\n';
cout << "Double Forward Length: " << magnitude(doubleFwd) << '\n';
toNormalized(doubleFwd);
cout << "Normalized Double Forward, now what is the length?: " << magnitude(doubleFwd) << '\n';
toZero(doubleFwd);
cout << "Zero out Double Forward, now what is the length?: " << doubleFwd << '\n';
//My compiler confuses 'distance' with an c iterator
cout << "Distance from Double Forward to Reflection: " << (float)AO::Vector3::distance(doubleFwd,reflection) << '\n';
Vector3 perp( perpendicular(backward) );
cout << "Perpendicular to 'backward':" << perp << '\n';
cout << "Sign of Perpendicular and double(Not Working) " << sign(perp,doubleFwd) << '\n';
// Uncomment the next three lines to allow for user input
//cout << "Press any key to quit. ";
//char blah = ' ';
//cin.get(blah);

return 0;
}
