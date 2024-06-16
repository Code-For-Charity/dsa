#define CACHE_SIZE 100

int cache[CACHE_SIZE] = {0, 1};
int cache_index = 1;

unsigned long long cached_fibonacci(int n) {
    while (cache_index < n) {
        cache[cache_index + 1] = cache[cache_index] + cache[cache_index - 1];
        cache_index++;
    }

    return cache[n];
}
