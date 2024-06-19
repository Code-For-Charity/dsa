cache = [0, 1]
max_cached_index = 1

def fibonacci_cached(n):
    global cache
    global max_cached_index

    while n > max_cached_index:
        cache.append(cache[max_cached_index] + cache[max_cached_index - 1])
        max_cached_index += 1

    return cache[max_cached_index]
