import sys
def li():
    return int(input())
    
def solve():
    n=li()
    s=list(input())
    st=[]
    for i in s:
        if not st or st[-1]!=i:
            st.append(i)
    res = st.count('1')-1        
    if s[-1]=='0':
        res += 1
    print(res)  
    
t=1 
t=li()
for _ in range (t):
    solve()
    