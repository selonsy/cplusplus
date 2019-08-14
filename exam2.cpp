//
// Created by devin on 2019-05-30.
//
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
        int num;
        cin >> num;
        vector<int> line_num;
        vector<string> data;
        for (int i = 0; i < num; ++i) {
            string s;
            cin >> s;
            data.push_back(s);
        }
        wy_003(num, data, 'N', 2, line_num);
        for (int i = 0; i < num; ++i) {
            cout << line_num[i] << endl;
        }
    }

    void wy_003(int num, vector<string> data, char letter, int max_skip_num, vector<int> &output_num) {
        for (int i = 0; i < num; ++i) {
            string str = data[i];
            int last_pos = 0, l_num = 0, skip = 0, max_num = 0;
            vector<int> ret;
            for (int j = 0; j < str.length(); ++j) {
                if (str[j] == letter) {
                    ++l_num;
                    if (l_num > max_num)
                        max_num = l_num;
                } else if (skip < max_skip_num) {
                    ++l_num;
                    ++skip;
                    if (skip == 1) {
                        last_pos = j;
                    }
                } else {
                    ret.push_back(l_num);
                    l_num = 0;
                    skip = 0;
                    j = last_pos;
                }
            }
            vector<int>::iterator kk;
            for (kk=ret.begin();kk!=ret.end();kk++) {
                max_num = max(max_num,*kk);
            }
//            max_num = *max_element(ret.begin(),ret.end());
            output_num.push_back(max_num);
        }
    }
};

int main() {
    Solution s;
//    s.wy_001_test();
//    s.wy_002_test();
    s.wy_003_test();
    return 0;
}
