#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int *salary = new int[n];
    cout<<"Enter salaries for the employees: ";
    for(int i = 0; i < n; i++){
        cin>>salary[i];
    }
    for(int i = 0; i < n; i++){
        salary[i] = salary[i]+salary[i]/(i+1);
    }
    cout<<"Updated Salaries: ";
    for(int i = 0; i < n; i++){
        cout<<salary[i]<<endl;
    }
    delete[] salary;
    return 0;
}