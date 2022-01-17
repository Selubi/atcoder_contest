def get_ints(): return map(int, input().strip().split())
def get_string(): return input().strip()


N=int(input())
A=[]
for i in range(N):
    x,y=get_ints()
    A.append((x,y))
ans=0
for i in A:
    for j in A:
        temp=((j[0]-i[0])**2+(j[1]-i[1])**2)**0.5
        ans=max(ans,temp)
print(ans)