n=int(input())
arr=[]
for i in range(n):
    arr.append(int(input()))
s,a=0,0
for i in arr:
    s=s+i   
    if(s<1):
        a=a+(-1*s)+1 
        s=1 
print(a)
