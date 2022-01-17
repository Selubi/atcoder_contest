def get_ints(): return map(int, input().strip().split())
def get_string(): return input().strip()


N,K=get_ints()
P=list(get_ints())
subP=P[:K]
subP.sort()
now=subP[0]
next_largest=subP[1]
print(now,next_largest)
# for i in P[K:]:
#     if()