#include <bits/stdc++.h>

using namespace std;

int get_index_of_first_min(const vector<int> &a, int left, int right)
{
	if (left > right) {
		return 0;
	}

	int min = a[left];
	int min_index = left;

	for (int i = left + 1; i <= right; i++) {
		if (a[i] < min) {
			min = a[i];
			min_index = i;
		}
	}

    return min_index;
}

void selection_sort(vector<int> &a)
{
	for (int i = 0; i < a.size(); i++) {
        int min_index = get_index_of_first_min(a, i , a.size() - 1);
        swap(a[i], a[min_index]);
	}
}
