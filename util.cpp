#include<bits/stdc++.h>

using namespace std;

vector<int> generate_random_vector(size_t n) {
    vector<int> result(n, 0);

    for(size_t i = 0; i < n; i++) {
        result[i] = rand();
    }

    return result;
}

bool is_vector_sorted(vector<int> &v) {
    for(size_t i = 1; i < v.size(); i++) {
        if (v[i - 1] > v[i]) {
            return false;
        }
    }

    return true;
}
