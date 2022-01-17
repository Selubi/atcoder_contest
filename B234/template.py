def get_ints(): return map(int, input().strip().split())
def get_string(): return input().strip()

L,R =get_ints()
S=get_string()
rev=S[L-1:R]
rev=rev[::-1]
print(f"{S[:L-1]}{rev}{S[R:]}")