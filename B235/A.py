def get_ints(): return map(int, input().strip().split())
def get_string(): return input().strip()

def f(x):
    return x**2+2*x+3

def solve(x):
    return f(f(f(x)+x)+f(f(x)))

t=int(input())
print(solve(t))