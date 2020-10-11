#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int count = 0;
    string str_correct, str_checked;
    cin >> str_correct >> str_checked;
    reverse(str_checked.begin(),str_checked.end());
    if (str_checked==str_correct){
        cout << "YES";
    }
    else {
        cout << "NO";
    }
    return 0;
}
