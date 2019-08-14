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
            string s = data[i];
            int max_num = 0, cur_len = 0;
            for (int i = 0; i < s.size(); i++)
            {
                if (s[i] != 'N')
                {
                    auto temp = s[i];
                    s[i] = 'N';
                    cur_len = s_n(s);
                    if (cur_len > max_num) max_num = cur_len;
                    for (int j = i; j < s.size(); j++)
                    {
                        if (s[j] != 'N')
                        {
                            auto temp_j = s[j];
                            s[j] = 'N';
                            cur_len = s_n(s);
                            if (cur_len > max_num) max_num = cur_len;
                            s[j] = temp_j;
                        }
                    }
                    s[i] = temp;
                }

            }
            output_num.push_back(max_num);
        }
    }
    int s_n(string s)
    {
        int max = 0, len = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'N')
            {
                len++;
                if (len > max) max = len;
            }
            else
            {
                len = 0;
            }
        }
        return max;
    }
};
int main() {
    Solution s;
//    s.wy_001_test();
//    s.wy_002_test();
    s.wy_003_test();
    return 0;
}