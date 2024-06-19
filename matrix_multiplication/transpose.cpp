#include <bits/stdc++.h>

using namespace std;

typedef vector<vector<int> > Matrix;

Matrix transpose(const Matrix &a)
{
	vector<vector<int>> result_matrix(a[0].size(), vector<int>(a.size(), 0));

    for(int i = 0; i < a.size(); i++) {
        for(int j = 0; j < a[0].size(); j++) {
            result_matrix[j][i] = a[i][j];
        }
    }

    return result_matrix;
}

Matrix multiply(const Matrix &a, const Matrix &b)
{
	assert(a[0].size() == b.size());

    Matrix transposed_b = transpose(b);
	vector<vector<int>> result_matrix(a.size(), vector<int>(b.size(), 0));

    for (int i = 0; i < a.size(); i++) {
        for (int j = 0; j < transposed_b.size(); j++)  {
            for (int k = 0; k < a[0].size(); k++) {
                result_matrix[i][j] += a[i][k] * transposed_b[j][k];
            }
        }
    }

	return result_matrix;
}
