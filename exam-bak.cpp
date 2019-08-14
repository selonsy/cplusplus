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

    void wy_001_test() {
        int N,M,T;
        cin>>N;
        for (int i = 0; i < N; ++i) {
            cin>>M;
            int s[32]={0};
            int ret=0;
            for (int j = 0; j < M; ++j) {
                cin>>T;
                int t=0;
                while(T!=0)
                {
                    int q = T%2;
                    if(q==1)t++;
                    T = T>>1;
                }
                s[t]++;
            }
            for (int k = 0; k < 32; ++k) {
                if(s[k]!=0)ret++;
            }
            cout<<ret<<endl;
        }
    }

    void wy_001() {

    }

    void wy_002_test() {
        int X;
        cin>>X;
        vector<int> ret;
        for (int i = 0; i <X ; ++i) {
            int m,t,m1,t1,m2,t2;
            cin>>m>>t>>m1>>t1>>m2>>t2;
            int s = wy_002(m,t,m1,t1,m2,t2);
            ret.push_back(s);
//            while(tt<=t){
//                if(open && close){
//                    ret += max((m1-m2),0);
//                } else if(!open && close){
//                    ret -= m2;
//                    ret = max(ret,0);
//                }else if(open && !close){
//                    ret+=m1;
//                }
//                tt++;
//                if(tt%t1==0)open=!open;
//                if(tt%t2==0)close=!close;
//            }
//            if(ret<=0)cout<<0<<endl;
//            else if(ret>=m)cout<<m<<endl;
//            else cout<<ret<<endl;
        }
        for(int a:ret){
            cout<<a<<endl;
        }
    }

    int wy_002(int m,int t,int m1,int t1,int m2,int t2) {
        bool open[] = {true, true};
        int remain = 0;
        for (int i = 1; i <= t; i++) {
            if (open[0] && open[1]) {
                remain = max(remain + m1 - m2, 0);
            } else if (open[0]) {
                remain = max(remain + m1, 0);
            } else if (open[1]) {
                remain = max(remain - m2, 0);
            }
            remain = min(remain,m);
            if (i % t1 == 0) {
                open[0] = !open[0];
            }
            if (i % t2 == 0) {
                open[1] = !open[1];
            }
        }
        return remain;
    }
    void GetConseccutiveLetterNum(
            int num, string data[], char letter,
            int max_skip_num, int *output_num
    ) {
        for (int i = 0; i < num; ++i) {
            string str = data[i];
            int last_pos = 0, l_num = 0, skip = 0, max_num = 0;
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
                    l_num = 0;
                    skip = 0;
                    j = last_pos;
                }
            }
            output_num[i] = max_num;
        }
    }
    void wy_003_test() {
        int num;
        cin >> num;
        int *line_num = new int(num);
        string *data = new string[num];
        for (int i = 0; i < num; ++i) {
            cin >> data[i];
        }
        GetConseccutiveLetterNum(num, data, 'N', 2, line_num);
        for (int i = 0; i < num; ++i) {
            cout << line_num[i] << endl;
        }
    }

    void wy_003() {}
};

int main() {
    Solution s;
//    s.wy_001_test();
    s.wy_002_test();
//    s.wy_003_test();
    return 0;
}
