print("192424248")

import math

points = [(1, 2), (4, 5), (7, 8), (3, 1)]

min_distance = float("inf")
pair = None

for i in range(len(points)):
    for j in range(i + 1, len(points)):
        d = math.sqrt(
            (points[i][0] - points[j][0]) ** 2 +
            (points[i][1] - points[j][1]) ** 2
        )

        if d < min_distance:
            min_distance = d
            pair = (points[i], points[j])

print(pair, min_distance)
