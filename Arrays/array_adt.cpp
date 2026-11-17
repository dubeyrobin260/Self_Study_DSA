#include<iostream>
using namespace std;

class Array{
    private:
        int *A;
        int size;
        int length;
    public:
        Array(int size){
            this->size = size;
            A = new int[size];
            length = 0;
        }
        void create(){
            length = this->size;
            for(int i = 0; i < length; i++){
                 A[i] = 10;
            }
        }

        void display(){
            for(int i = 0; i < length; i++){
                cout << A[i] << " ";
            }
            cout << endl;
        }

        ~Array(){
        delete []A;
        cout << "Destructor called for Array" << endl;
        }
};

int main(){
    Array arr(5);
    arr.create();
    arr.display();
    return 0;
}