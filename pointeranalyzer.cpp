#include <iostream>
using namespace std;


void analyze_pointer(int *ptr){
    cout<<"The memory location of the pointer is "<< ptr <<endl;
    cout<<"The value stored at this address is "<< *ptr <<endl;
}
int main() {
    int ivalue = 4;
    analyze_pointer(&ivalue);

    int *hvalue = new int;
    *hvalue = 9;
    analyze_pointer(hvalue);
    return 0;
}