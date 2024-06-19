#include <bits/stdc++.h>

using namespace std;

typedef vector<vector<int> > Matrix;

Matrix multiply(Matrix &a, Matrix &b)
{
	assert(a[0].size() == b.size());

	int result_row_count = a.size();
	int result_column_count = b[0].size();
	vector<vector<int> > result_matrix(result_row_count,
					   vector<int>(result_column_count, 0));

	for (int i = 0; i < result_row_count; i++) {
		for (int j = 0; j < result_column_count; j++) {
			for (int k = 0; k < a[0].size(); k++) {
				result_matrix[i][j] += a[i][k] * b[k][j];
			}
		}
	}

	return result_matrix;
}
