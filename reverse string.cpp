#include <iostream>

using namespace std;

string reverseString(string str){
    int start{};
    long unsigned int end{str.length()-1};

    while (start<end)
    {
        char temp{str[end]};
        str[end]=str[start];
        str[start]=temp;
        start++;
        end--; 
    }
    return str;
}

int main(){
    string userString;
    cout<<"Enter a string: ";
    cin>>userString;

    cout<<reverseString(userString)<<endl;
    return 0;
}
