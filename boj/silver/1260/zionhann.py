# Link: https://www.acmicpc.net/problem/1260


def bfs(graph: tuple[tuple[int]], start: int):
    queue = [start]
    visited: set[int] = set()

    while queue:
        vertex = queue.pop(0)

        if vertex not in visited:
            print(vertex, end=" ")
            visited.add(vertex)
            adjacent = sorted(
                [i for i, v in enumerate(graph[vertex]) if v == 1 and i not in visited]
            )
            queue.extend(adjacent)


def dfs(graph: tuple[tuple[int]], start: int):
    stack = [start]
    visited: set[int] = set()

    while stack:
        vertex = stack.pop()

        # find adjacent vertices
        # visit a node where index is smaller first
        if vertex not in visited:
            print(vertex, end=" ")
            visited.add(vertex)
            adjacent = sorted(
                [i for i, v in enumerate(graph[vertex]) if v == 1 and i not in visited],
                reverse=True,
            )
            stack.extend(adjacent)


N, M, V = map(int, input().split())

# ignore 0 index since vetext number starts from 1
graph = [[0] * (N + 1) for _ in range(N + 1)]

# make a graph
for _ in range(M):
    v1, v2 = map(int, input().split())
    graph[v1][v2] = graph[v2][v1] = 1

dfs(graph, V)
print()
bfs(graph, V)
