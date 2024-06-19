class Matrix {
    public:
	int data[2][2];

	Matrix *multiply(Matrix *other)
	{
		Matrix *result = new Matrix();
		result->data[0][0] = this->data[0][0] * other->data[0][0] +
				     this->data[0][1] * other->data[1][0];

		result->data[0][1] = this->data[0][0] * other->data[0][1] +
				     this->data[0][1] * other->data[1][1];

		result->data[1][0] = this->data[1][0] * other->data[0][0] +
				     this->data[1][1] * other->data[1][0];

		result->data[1][1] = this->data[1][0] * other->data[0][1] +
				     this->data[1][1] * other->data[1][1];

		return result;
	}

	Matrix *pow(int n)
	{
		if (n == 0) {
			Matrix *identity = new Matrix();
			identity->data[0][0] = 1;
			identity->data[0][1] = 0;
			identity->data[1][0] = 0;
			identity->data[1][1] = 1;

			return identity;
		}

		Matrix *half = this->pow(n / 2);
		Matrix *result = half->multiply(half);
		if (n % 2 == 1) {
			result = result->multiply(this);
		}

		return result;
	}
};

unsigned long long fibonacci_matrix(int n)
{
	Matrix *init = new Matrix();
	init->data[0][0] = 0;
	init->data[0][1] = 1;
	init->data[1][0] = 1;
	init->data[1][1] = 1;
	Matrix *result = init->pow(n);

	return result->data[0][1];
}
