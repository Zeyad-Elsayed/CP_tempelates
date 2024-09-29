#include <bits/stdc++.h>

using namespace std;

struct BIT {
    vector<int> tree;
    
    int getAcc(int idx) {
        int sum = 0;
        while(idx > 0) {
            sum += tree[idx];
            idx -= (idx & -idx);
        }
        return sum;
    }

    void update(int idx, int value) {
        while(idx < tree.size()) {
            tree[idx] += value;
            idx += (idx & -idx);
        }
    }

};