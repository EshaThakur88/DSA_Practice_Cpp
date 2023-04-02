#include <bits/stdc++.h>
using namespace std;

int main(){

    //ARRAY
    array<int, 4> arr= {1,2,3,4}; //implemented using static array only

   //size of array => elements in array
    cout<<"size of array: "<<arr.size()<<endl; 
    cout<<"element at position 2: "<<arr.at(2)<<endl; //o(1)
    cout<<"arr empty or not: "<<arr.empty()<<endl; 

    //VECTOR => dynamic array 
    vector<int> vec;
    //capacity => continuous memory blocks in the vector 
    cout<<"Capacity of vector vec before: "<<vec.capacity()<<endl;
    //size => elements in the vector 
    cout<<"size of vector vec before: "<<vec.size()<<endl;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    cout<<"Capacity of vector vec after: "<<vec.capacity()<<endl;
    cout<<"size of vector vec after: "<<vec.size()<<endl;

    //declaration and intialisation of vector with a specified size 
    // => will have all the elements as 0 by default
    vector<int> vec2(2);

    cout<<"Capacity of vec2 before: "<<vec2.capacity()<<endl;
    cout<<"size of vec2 before: "<<vec2.size()<<endl; 

    vec2.push_back(45);
    vec2.push_back(12);
    /* after pushing elements to a specified size the vector doubles its capacity 
       by making new vector of double size and copying the old elements into it to add new ones into it. 
       Thus, dumos the old vector, hence a dynamic array. */

    cout<<"Capacity of vec2 after: "<<vec2.capacity()<<endl;
    cout<<"Size of vec2 after: "<<vec2.size()<<endl;

    //pop
    vec2.pop_back();
    cout<<"Capacity of vec2 after popping: "<<vec2.capacity()<<endl;
    cout<<"Size of vec2 after popping: "<<vec2.size()<<endl;

    //front() & back()
    cout<<"Front element of vec2: "<<vec2.front()<<endl;
    cout<<"End element of vec2: "<<vec2.back()<<endl;

    //clear() => will keep the capacity as it is just will empty the elements from it.
    vec2.clear();
    cout<<"Capacity of vec2 after clearing: "<<vec2.capacity()<<endl;
    cout<<"Size of vec2 after clearing: "<<vec2.size()<<endl;


    //Declaring and initialising the vector with specified size and 1 same elements
    vector<int> vec3(5, 1);

    cout<<"Capacity of vec3: "<<vec3.capacity()<<endl;
    cout<<"Size of vec3: "<<vec3.size()<<endl;
    for(int i: vec3){
        cout<<i<<" ";
    }cout<<endl;

    //Copying vec in new vector name vec4
    vector<int> vec4(vec);
    
    cout<<"elements of vec4: ";
    for(int i: vec4){
        cout<<i<<" ";

    }cout<<endl;

    cout<<"empty or not: "<<vec4.empty()<<endl;

    //iterator
    vector<int> :: iterator it1;
    it1=vec4.begin();
    while(it1 != vec4.end()){
        cout<<*it1<<" ";
        it1++;
    }cout<<endl;

    it1=vec4.begin();
    vec4.erase(it1, it1+2);
    // cout<<endl;
    while(it1 != vec4.end()){
        cout<<*it1<<" ";
        it1++;
    }cout<<endl;

    cout<<"Capacity of vec4 after erasing: "<<vec4.capacity()<<endl;
    cout<<"Size of vec4 after erasing: "<<vec4.size()<<endl;
    return 0;
}