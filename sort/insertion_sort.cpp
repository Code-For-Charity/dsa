#include <cstddef>
#include <vector>

using namespace std;

void insertion_sort(vector<int> &a)
{
	for (size_t i = 1; i < a.size(); i++) {
		int key = a[i];
		size_t j = i - 1;
		while (j >= 0 && a[j] > key) {
			a[j + 1] = a[j];
			j -= 1;
		}
		a[j + 1] = key;
	}
}
