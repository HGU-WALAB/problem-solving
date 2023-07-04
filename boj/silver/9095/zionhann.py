# Trial: 1
# 1 -> 1
# 2 -> 1 + 1, 2
# 3 -> 1 + 1 + 1, 1 + 2, 2 + 1, 3

# dp[n] means the number of ways \
# in which a given integer can be expressed as a sum of 1s, 2s, and 3s.
# only if n > 0


def solution(n: int) -> int:
    dp = [0] * (n + 1)
    dp[0] = 1

    for i in range(1, n + 1):
        dp[i] += dp[i - 1]

        if i >= 2:
            dp[i] += dp[i - 2]
        if i >= 3:
            dp[i] += dp[i - 3]
    return dp[n]


def main():
    T = int(input())

    for _ in range(T):
        n = int(input())
        print(solution(n))


main()
