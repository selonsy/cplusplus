//
// Created by devin on 2019-05-30.
//
#include<vector>
#include<iostream>
#include<assert.h>
#include<unordered_map>
#include<map>
#include<string>
#include<algorithm>
#include<sstream>
using namespace std;
void pdd002(vector<string>& a){
    int res[26]={0};
    for (int i = 0; i < a.size(); ++i) {
        int len = a[i].size();
        res[a[i][0]-65]++;
        res[a[i][len-1]-65]++;
    }
    bool flag = true;
    for (int j = 0; j < 26; ++j) {
        if(res[j]%2==1)
            flag = false;
            break;
    }
    if(flag)cout<<"true";
    else cout<<"false";
}

int main() {
    //cout << "Hello world 2019 ++!" << endl;
//    string line1;
//    getline(cin, line1);
//    stringstream ss1(line1);
//    vector<string> nums1;
//    string x;
//    while (ss1 >> x)
//        nums1.push_back(x);
    vector<string> nums1,nums2;
    nums1 = {"CAT","TIGER","RPC"};
    pdd002(nums1);
    return 0;
}
