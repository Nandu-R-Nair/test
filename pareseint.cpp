#include <sstream>
#include <vector>
#include <iostream>
#include<string>
using namespace std;

vector<int> parseInts(string str) {
	// Complete this function
    stringstream ss(str);
    vector<int>res;
    char s;
    int num;
    //cout<<ss;
    while(ss>>num)
    {
        //cout<<num<<"\n";
        res.push_back(num);
        ss>>s;
    }
    return res;

}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }

    return 0;
}
