for _ in range(int(input())):
    a,b,c=map(int,input().split())
    if a*b <=c:
        print((b*b)*a)
    else:
        if c%b==0:
            print((c//b)*(b*b))
        else:
            print(((c//b)*(b*b))+((c%b)*(c%b)))
        
        