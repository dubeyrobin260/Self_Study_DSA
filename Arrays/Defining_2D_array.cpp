#include<iostream>
using namespace std;

int main(){
    //static 2D array
    int arr[3][4] = {{1, 2, 3, 4},  
    {5, 6, 7, 8}, 
    {9, 10, 11, 12}};

    //dynamic 2D array
    int *pArr[2];
    pArr[0] = new int[3]; // allocate memory for first row
    pArr[1] = new int[3]; // allocate memory for second row 

    int **dPtrArr;
    dPtrArr = new int*[2]; // allocate memory for 2 rows
    for(int i = 0; i < 2; i++){
        dPtrArr[i] = new int[3]; // allocate memory for each row
    }
    
    return 0;
}