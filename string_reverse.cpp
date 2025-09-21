#include <iostream>
#include <cstring>
using namespace std;

int main() {
    cout<<"Enter the size of the string: ";
    int size;
    cin>>size;

    char *str = new char[size + 1];
    cout<<"Enter a string: ";
    cin.ignore();
    cin.getline(str, size+1);
    

    int len = strlen(str);
    for(int i = 0; i < len/2; i++){
        swap(str[i], str[len-i-1]);
    }

    cout<<"Reversed String: " << str << endl;

    delete[] str;

    return 0;
}