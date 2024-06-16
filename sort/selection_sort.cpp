#include <cstddef>
#include <vector>

using namespace std;

size_t get_index_of_first_min(const vector<int> &a, size_t left, size_t right)
{
	if (left > right) {
		return 0;
	}

	int min = a[left];
	int min_index = left;

	for (size_t i = left + 1; i <= right; i++) {
		if (a[i] < min) {
			min = a[i];
			min_index = i;
		}
	}

    return min_index;
}

void selection_sort(vector<int> &a)
{
	for (size_t i = 0; i < a.size(); i++) {
        size_t min_index = get_index_of_first_min(a, i , a.size() - 1);
        swap(a[i], a[min_index]);
	}
}
