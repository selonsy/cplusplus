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
#include "numeric"

using namespace std;

vector<int> sort_indexes(const vector<int> &v) {
    // 初始化索引向量
    vector<int> idx(v.size());
    //使用iota对向量赋0~？的连续值
    iota(idx.begin(), idx.end(), 0);

    // 通过比较v的值对索引idx进行排序
    sort(idx.begin(), idx.end(),
         [&v](size_t i1, size_t i2) { return v[i1] < v[i2]; });
    return idx;
}

void pdd003(int N, int M, vector<int> &nums, int yilai[][2]) {
    vector<int> ids = sort_indexes(nums);
    for (int i = 0; i < M; ++i) {
        int a = yilai[i][0]-1;
        int b = yilai[i][1]-1;
        int ai = -1;
        int bi = -1;
        for (int j = 0; j < ids.size(); ++j) {
            if (ids[j] == a)ai = j;
            if (ids[j] == b)bi = j;
        }
        if(bi<ai){
            swap(ids[bi],ids[ai]);
        }
    }
    for (int k = 0; k < ids.size(); ++k) {
        cout<<ids[k]+1;
        if(k!=ids.size()-1)cout<<" ";
    }
}

int main() {
    //cout << "Hello world 2019 ++!" << endl;
    int N, M;
    cin>>N>>M;
    vector<int> nums1;
    for (int j = 0; j < N; ++j) {
        int t;
        cin >> t;
        nums1.push_back(t);
    }
    int yilai[M][2];
    for (int i = 0; i < M; ++i) {
        int a, b;
        cin >> a >> b;
        yilai[i][0] = a;
        yilai[i][1] = b;
    }

//    int N = 5;
//    int M = 6;
//    vector<int> nums1 = {1,2,1,1,1};
//    int yilai[6][2] = {{1,2},{1,3},{1,4},{2,5},{3,5},{4,5}};
    pdd003(N, M, nums1, yilai);
    return 0;
}
