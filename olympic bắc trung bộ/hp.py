a = input().split()
h = input().split()
n = int(a[0])
M = int(a[1])
S = []
rS = []
for i in range(1, n + 5):
    S.append(0)
    rS.append(0)

S[0] = 0
rS[n + 1] = 0
ans = 0

for i in range(1, n + 1):
    S[i] = (S[i - 1] + int(h[i - 1])) % M

for i in range(n, 0, -1):
    rS[i] = (rS[i + 1] + int(h[i - 1])) % M

for i in range(1, n + 1):
    ans = (ans + ((S[i - 1] * int(h[i - 1])) % M * rS[i + 1]) % M) % M

print(ans)



