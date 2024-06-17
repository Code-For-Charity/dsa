def binary_search(array, value):
    left = 0
    right = len(array) - 1
    while left <= right:
        mid = (left + right) // 2
        mid_element = array[mid]
        if value == mid_element:
            return mid;
        elif value < mid_element:
            right = mid - 1
        else:
            left = mid + 1

    return -1
