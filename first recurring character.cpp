#include<iostream>
#include<map>
using namespace std;

char firstRecurring(string str){
    map<char, int> letters;
    long unsigned int stringLen{str.length()};
    letters[str[0]]=1;
    int i;
    for(i=1;i<stringLen;i++){
        auto it=letters.find(str[i]);
        if(it==letters.end()){
            letters[str[i]]=1;
            continue;
        }
        break;
    }
    return str[i];
}

int main(){
    string userString;
    cout<<"Enter a string: "<<endl;
    cin>>userString;
    cout<<"First Recurring character is : "<<firstRecurring(userString);
}