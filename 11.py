print("192424248")

import heapq

arr = [4, 10, 3, 5, 1]

heapq.heapify(arr)

result = []

while arr:
    result.append(heapq.heappop(arr))

print(result)
