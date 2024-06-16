#include <cstddef>
#include <vector>
#include <iostream>

using namespace std;

void print_vector(vector<int> &a) {
    for(auto var : a) {
        cout << var << " ";
    }
    cout << "\n";
}

void merge(vector<int> &a, size_t left, size_t mid, size_t right)
{
	vector<int> left_array(a.begin() + left, a.begin() + mid + 1);
	vector<int> right_array(a.begin() + mid + 1, a.begin() + right + 1);

	size_t i = 0;
	size_t j = 0;
	size_t k = left;

	while (i < left_array.size() && j < right_array.size()) {
		int left_element = left_array[i];
		int right_element = right_array[j];

		if (left_element < right_element) {
			a[k] = left_element;
			i++;
		} else {
			a[k] = right_element;
			j++;
		}
		k++;
	}

	while (i < left_array.size()) {
		a[k] = left_array[i];
		i++;
		k++;
	}
	while (j < right_array.size()) {
		a[k] = right_array[j];
		j++;
		k++;
	}
}

void merge_sort(vector<int> &a, size_t left, size_t right)
{
	if (left >= right) {
		return;
	}

	size_t mid = (left + right) / 2;
	merge_sort(a, left, mid);
	merge_sort(a, mid + 1, right);
	merge(a, left, mid, right);
}
