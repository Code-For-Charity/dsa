#include <bits/stdc++.h>

using namespace std;

// Return the index of value in vector a if found and return -1 otherwise
int linear_search(const vector<int> &a, int value) {
    for(size_t i = 0; i < a.size(); i++) {
        if(a[i] == value) {
            return i;
        }
    }

    return -1;
}
