//This program is mainly written to study functions inside vector.

#include<iostream>
#include<vector>
using namespace std;


int main(){

    vector<int>vec;
    cout<<"Size : "<<vec.size()<<endl;                // To return size of vector

    vec.push_back(20);                                // To add element in vector
    vec.push_back(30);
    vec.push_back(40);
    vec.push_back(50);
    vec.push_back(60);

    cout<<"After push_back size = "<<vec.size()<<endl;
    for(int val : vec){                                    // To print values in vector "for each loop".
        cout<<val<<endl;
    }

    vec.pop_back();                                   //To delete element from vector (no req to pass,value delete element at last)
    vec.pop_back();

    cout<<"After pop_back size = "<<vec.size()<<endl;
    for(int val : vec){                                    // To print values in vector "for each loop".
        cout<<val<<endl;
    }   


    cout<<"front : "<<vec.front()<<endl;                                             //Return value at starting of vector
    cout<<"Bacck : "<<vec.back()<<endl;                                              //return value at ending of vector  


    cout<<"Value at specified inedx : "<<vec.at(1)<<endl;                                               //return value at specified index

    return 0;

}