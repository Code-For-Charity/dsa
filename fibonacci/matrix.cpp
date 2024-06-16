// 2x2 matrix
// a b
// c d
struct Matrix {
    int a;
    int b;
    int c;
    int d;
};
struct Matrix multiply(struct Matrix &first, struct Matrix &second) {
    int a = first.a * second.a + first.b * second.c;
    int b = first.a * second.b + first.b * second.d;
    int c = first.c * second.a + first.d * second.c;
    int d = first.c * second.b + first.d * second.d;
    return {
        .a = a,
        .b = b,
        .c = c,
        .d = d
    };
}
struct Matrix pow(struct Matrix &matrix, int n) {
    if (n == 0) {
        return 
    }

    struct Matrix half = pow(matrix, n / 2);
    struct Matrix result = multiply(half, half);
    if (n % 2 == 1) {
        result = multiply(result, matrix);
    }

    return result;
}

unsigned long long fibonacci_matrix(int n) {
    struct Matrix init = {
        .a = 1,
        .b = 1,
        .c = 0,
        .d = 1,
    };
    struct Matrix result = pow(init, n);

    return 1;
}
