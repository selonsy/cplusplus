#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
#include<string>
#include<queue>
#include<list>
#include<functional>
#include<map>
#include<string>
#include<sstream>

using namespace std;

class Solution {
public:
    // 网易笔试题 2019-08-11 14:30 150min
    void wy_003_test() {
        int n, m;
        cin >> n;
        vector<int> num;
        for (int i = 0; i < n; ++i) {
            cin >> m;
            num.push_back(m);
        }
        int front = num[0], end;
        vector<int> rest;
        for (int l = 0; l < n; ++l) {
            rest.push_back(100);
        }
        for (int j = 1; j < n; ++j) {
            end = j<n-1?num[j+1]:num[n-1];
            if (num[j] > front && num[j] > end) {
                rest[j] = rest[j - 1] + 100;
                j++;
            } else if (num[j] < front) {
                rest[j] = rest[j - 1] - 100;
            } else if (num[j] > front) {
                rest[j] = rest[j - 1] + 100;
            }
        }
        vector<int>::iterator myMin = max_element(rest.begin(), rest.end());
        int ret = 0;
        for (int k = 0; k < n; ++k) {
            ret += rest[k];
        }
        ret += (100 - *myMin) * n;
//        vector<int>::iterator myMax = max_element(myVec.begin(), myVec.end());
//        cout << *myMax << " " << distance(myVec.begin(), myMax) << endl;


//        int ret = n * 100;
//        for (int j = 1; j < n; ++j) {
//            end = num[j + 1];
//            if (num[j] > front && num[j] > end) {
//                ret += 100;
//                j += 1;
//            } else if (num[j] > front) {
//                ret += 100;
//            }
//        }
        cout << ret << endl;
    }

    void wy_003() {

    }

};

int main() {
    Solution s;
    s.wy_003_test();
    return 0;
}