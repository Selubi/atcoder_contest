def get_ints(): return map(int, input().strip().split())
def get_string(): return input().strip()


K=int(input())
K=K
S="{0:b}".format(K)
ans=""
for i in S:
    if(i=='1'):
        ans+="2"
    else:
        ans+="0"
print(ans)