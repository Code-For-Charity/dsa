#include <cstddef>
#include <utility>
#include <vector>

using namespace std;

void bubble_sort(vector<int> &a)
{
	for (size_t i = a.size() - 1; i >= 1; i--) {
		for (size_t j = 0; j < i; j++) {
			if (a[j] > a[j + 1]) {
				swap(a[j], a[j + 1]);
			}
		}
	}
}
