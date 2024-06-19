def multiply(a, b):
    if len(a[0]) != len(b):
        return

    row_count = len(a)
    column_count = len(b[0])

    c = [[0] * column_count for i in range(row_count)]

    for i in range(row_count):
        for j in range(column_count):
            for k in range(len(a[0])):
                c[i][j] += a[i][k] * b[k][j]

    return c
