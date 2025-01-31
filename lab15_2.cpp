#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int data[] = {7,8,2,1,2,4,6,9,0,1}; 
	cout << "Before: ";
    for(int i = 0; i < 10; i++) 
        cout << data[i] << " ";
    
    int firstHalf[5], secondHalf[5];
    for (int i = 0; i < 5; i++) {
        firstHalf[i] = data[i]; 
        secondHalf[i] = data[i + 5]; 
    }


    sort(firstHalf, firstHalf + 5); 
    sort(secondHalf, secondHalf + 5); 


    for (int i = 0; i < 5; i++) {
        data[i] = firstHalf[i]; 
        data[i + 5] = secondHalf[i]; 
    }

    cout << "\nAfter: ";
    for(int i = 0; i < 10; i++) 
        cout << data[i] << " ";
    
    return 0;
}