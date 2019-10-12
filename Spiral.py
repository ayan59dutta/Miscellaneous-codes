n = 4
a=[]
for _ in range(n):
    a.append(list(map(int, input().split())))
t, b, l, r = 0, n, 0, n
di = 0
while(t<=b and l <=r):
    if di == 0:
        for i in range(l,r):
            print(a[t][i], end = ' ')

        t+=1
        di = 1

    elif di == 1:
        for i in range(t,b):
            print(a[i][r-1], end = ' ')

        r -=1
        di = 2

    elif di == 2:
        for i in range(r-1,l-1,-1):
            print(a[b-1][i], end = ' ')

        b -=1
        di = 3

    elif di == 3:
        for i in range(b-1,t-1,-1):
            print(a[i][l], end = ' ')

        l +=1
        di= 0
    
        
