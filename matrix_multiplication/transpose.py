def transpose(a):
    transposed_a = [[0] * len(a) for i in range(len(a[0]))]
    for i in range(len(a)):
        for j in range(len(a[0])):
            transposed_a[j][i] = a[i][j]

    return transposed_a


def multiply(a, b):
    if len(a[0]) != len(b):
        return

    b = transpose(b)

    row_count = len(a)
    column_count = len(b)

    c = [[0] * column_count for i in range(row_count)]

    for i in range(row_count):
        for j in range(column_count):
            for k in range(len(a[0])):
                c[i][j] += a[i][k] * b[j][k]

    return c
