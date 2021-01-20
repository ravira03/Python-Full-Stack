from itertools import combinations
ls = list(map(int,input().split()))
n = len(ls)
res = []
for i in range(1,n+1):
    res.extend(combinations(ls,i))
print(*res,sep='\n')
count = 0
for i in res:
    if(sum(i)%2==0):
        count+=1
print(count)