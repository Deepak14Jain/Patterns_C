n = int(input("Value of N = "))
m = n*3
mid = n//2
st = ''
p = m//3
l = list()
for i in range(mid):
    for j in range(p):
        if (i+j) >= mid and (j-i)<=mid:
            st += '.|.'
        else:
            st += '---'
    l.append(st)
    st = ''
for i in range(len(l)):
    print(l[i])
k = 0
while(k<m):
    if k == ((m//2)-3):
        print("WELCOME",end="")
        k = ((m//2)+4)
    elif k == m-1:
        print("-")
        k += 1
    else:
        print("-",end="")
        k += 1
for i in range(len(l)-1,-1,-1):
    print(l[i])