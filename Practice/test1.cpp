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
void pdd001(vector<int>& a,vector<int>& b){
    int res = 0;
    int front = a[0];
    int behind = a[1];
    for (int i = 1; i < a.size() ; ++i) {
        if(a[i]<=a[i-1]){
            res = i;
            front = a[i-1];
            behind = a[i+1];
            break;
        }
    }
    int max = b[0];
    bool flag = false;
    for (int j = 0; j < b.size(); ++j) {
        if(b[j]>front && b[j]<behind){
            flag = true;
            max = max >b[j]?max:b[j];
        }
    }
    if(!flag)cout<<"NO";
    else{
        a[res] = max;
        for (int i = 0; i < a.size(); ++i) {
            cout<<a[i];
            if(i!=a.size()-1){
                cout<<" ";
            }
        }
    }
}

int main() {
    //cout << "Hello world 2019 ++!" << endl;
    string line1;
    string line2;
    getline(cin, line1);
    getline(cin, line2);
    stringstream ss1(line1);
    stringstream ss2(line2);
    vector<int> nums1,nums2;
    int x;
    while (ss1 >> x)
        nums1.push_back(x);
    while (ss2 >> x)
        nums2.push_back(x);
//    vector<int> nums1,nums2;
//    nums1 = {1,3,7,4,10
//    };
//    nums2 = {2,1,5,8,9};
    pdd001(nums1,nums2);
    return 0;
}
