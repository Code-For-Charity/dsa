#include <bits/stdc++.h>

using namespace std;

void bubble_sort(vector<int> &a)
{
	for (int i = a.size() - 1; i >= 1; i--) {
		for (int j = 0; j < i; j++) {
			if (a[j] > a[j + 1]) {
				swap(a[j], a[j + 1]);
			}
		}
	}
}
