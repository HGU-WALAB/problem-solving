# Trial: 6

import sys
from collections import deque


def bfs(graph: list[list[int]], N: int, M: int) -> int:
    dx = [0, 0, -1, 1]
    dy = [1, -1, 0, 0]

    queue = deque([(0, 0)])

    while queue:
        x, y = queue.popleft()

        for i in range(4):
            nx = x + dx[i]
            ny = y + dy[i]

            if 0 <= nx < M and 0 <= ny < N and graph[ny][nx] == 1:
                graph[ny][nx] = graph[y][x] + 1
                queue.append((nx, ny))
    return graph[N - 1][M - 1]


N, M = map(int, input().split())
maze = []

for _ in range(N):
    row = list(map(int, sys.stdin.readline().strip()))
    maze.append(row)

print(bfs(maze, N, M))
