class Solution:
    def uniquePaths(self, m: int, n: int) -> int:
        dp = [n * [0] for _ in range(m)]
        dp[1][0] = 1
        for i in range(m):
            for j in range(n):
                if i == 0 or j == 0:
                    dp[i][j] = 1
        for i in range(1, m):
            for j in range(1, n):
                dp[i][j] = dp[i - 1][j] + dp[i][j - 1]
        return dp[-1][-1]


print(Solution().uniquePaths(3, 2))
