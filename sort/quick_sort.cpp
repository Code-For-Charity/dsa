#include <cstddef>
#include <cstdlib>
#include <vector>
#include <stdlib.h>

using namespace std;

size_t partition(vector<int> &a, size_t left, size_t right)
{
	size_t length = right - left + 1;
	size_t pivot_index = left + rand() % length;
	swap(a[pivot_index], a[right]);

	pivot_index = right;
	int pivot = a[pivot_index];

	size_t i = left;
	for (size_t j = left; j < right; j++) {
		if (a[j] < pivot) {
			swap(a[i], a[j]);
			i++;
		}
	}
    swap(a[i], a[right]);

    return i;
}

void quick_sort(vector<int> &a, size_t left, size_t right)
{
    if (left >= right) {
        return;
    }

    size_t pivot_index = partition(a, left, right);
    if (pivot_index > left) {
        quick_sort(a, left, pivot_index);
    }
    if (pivot_index + 1 < right) {
        quick_sort(a, pivot_index + 1, right);
    }
}
