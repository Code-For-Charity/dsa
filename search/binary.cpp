#include <bits/stdc++.h>

using namespace std;

int binary_search(const vector<int> &a, int value) {
    int left = 0;
    int right = a.size();

    while(left <= right) {
        int mid = (left + right) / 2;
        int mid_element = a[mid];

        if(value == mid_element) {
            return mid;
        } else if(value < mid_element){
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }

    return -1;
}
