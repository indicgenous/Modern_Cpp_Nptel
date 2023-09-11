#include <iostream>
#include <algorithm>
using namespace std;

// descending sorting using sort function 

bool compare (int i , int  j){
    return (i>j);
}

int main(){
    int data[] ={1,6,3,2,5,4};

    sort(data,data+6,compare);

    for (int k = 0; k < 6; k++)
    {
        cout<<data[k]<<" ";
    }
    
} 


// asscending sorting using sort function



// int main(){
//     int data[] ={1,6,3,2,5,4};

//     sort(data,data+6);

//     for (int k = 0; k < 6; k++)
//     {
//         cout<<data[k]<<" ";
//     }
    
// } 

