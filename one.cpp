#include<iostream>
#include<vector>
#include<time.h>

using namespace std;
int main()
{
    vector<int > myarray;                        //Declaration
    myarray.reserve(1000);                          //Reserving the capacity of vector to 1000
    // myarray.fill(10);                                // fill entire array with same value 10
    // std::array<int ,5> myarray ={1,2,3,4,5};         //Initialisation
    int x=1,j;
    while(x)
    {
    cout<<"Enter a value: 1 or 0: ";
    cin>>x;
    if (x==0)
    break;
    else
    {
    cout<<"Enter a value: ";
    cin>>j;
    myarray.push_back(j);
    }
    }

vector<int>::iterator it;   //pointer used to point to a particular element

for(it=myarray.begin();it!=myarray.end();it++)
{
    cout<<*it<<" ";

}
cout<<"\n";

myarray.pop_back();   //pops out last element from the vector 
it=myarray.begin();
it++;
myarray.erase(it);      //removes element where iterator is pointing

it=myarray.begin();
myarray.insert(it,9);           //insert a value 9 before the specified position

myarray.erase(++it);                 //remove the element at which iterator is pointing
myarray.emplace_back(40);               // Add element to the last of vector 

for(it=myarray.begin();it!=myarray.end();it++)
{
    cout<<*it<<" ";

}


// cout<<myarray.size()<<"\n";              //Actual Size of the vector holding how many items currently 
// cout<<myarray.capacity();                //limit upto which elements can be inserted
}