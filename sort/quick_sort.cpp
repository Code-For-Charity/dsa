#include <bits/stdc++.h>

using namespace std;

int partition(vector<int> &a, int left, int right)
{
	int length = right - left + 1;
	int pivot_index = left + rand() % length;
	swap(a[pivot_index], a[right]);

	pivot_index = right;
	int pivot = a[pivot_index];

	int i = left;
	for (int j = left; j < right; j++) {
		if (a[j] < pivot) {
			swap(a[i], a[j]);
			i++;
		}
	}
	swap(a[i], a[right]);

	return i;
}

void quick_sort(vector<int> &a, int left, int right)
{
	if (left >= right) {
		return;
	}

	int pivot_index = partition(a, left, right);
	if (pivot_index > left) {
		quick_sort(a, left, pivot_index);
	}
	if (pivot_index + 1 < right) {
		quick_sort(a, pivot_index + 1, right);
	}
}
