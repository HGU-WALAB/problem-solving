# 2 3
# 1
# 2
# Expected: 2

N, K = map(int, input().split())

coins = []
ans = 0

for _ in range(N):
    coins.append(int(input()))

while K != 0:
    coin = coins.pop()

    if coin == K:
        ans += 1
        break
    elif coin < K:
        ans += K // coin
        K = K % coin

print(ans)
