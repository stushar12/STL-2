#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{   
vector<int > Vector;
Vector.reserve(10);
Vector.push_back(3);
Vector.push_back(2);
Vector.push_back(4);
Vector.push_back(1);
Vector.push_back(3);
Vector.push_back(5);


cout<<Vector.front()<<endl;                         //Returns value at beginning
cout<<*Vector.begin()<<endl;                        //Returns address of first location
cout<<Vector.back()<<endl;                          //Returns value at last position
cout<<*(--Vector.end())<<endl;                       //end() function points to the address which is after the last element
cout<<Vector.size()<<endl;
cout<<Vector.capacity()<<endl;

}

