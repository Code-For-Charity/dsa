def fibonacci_iterative(n):
    if n == 0:
        return 0
    if n == 1:
        return 1
    
    a = 0
    b = 1
    c = 1

    for i in range(2, n + 1):
        c = a + b
        a = b
        b = c

    return c