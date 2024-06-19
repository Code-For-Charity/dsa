def multiply(a, b):
    return [
        [a[0][0] * b[0][0] + a[0][1] * b[0][1], a[0][0] * b[1][0] + a[0][1] * b[1][1]],
        [a[1][0] * b[0][0] + a[1][1] * b[0][1], a[1][0] * b[1][0] + a[1][1] * b[1][1]],
    ]


def pow(a, n):
    if n == 0:
        return [[1, 0], [0, 1]]

    half = pow(a, n // 2)
    result = multiply(half, half)

    if n % 2 == 1:
        result = multiply(result, a)

    return result


def fibonacci_matrix(n):
    init = [[0, 1], [1, 1]]
    return pow(init, n)[0][1]
