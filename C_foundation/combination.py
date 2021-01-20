def combination(ls,res,id=0,temp=[]):
    n = len(ls)
    if(temp!=[] and sum(temp)%2==0):
        res[0]+=1
    for i in range(id,n):
        temp.append(ls[i])
        combination(ls,res,i+1,temp)
        temp.pop()
ls = list(map(int,input().split()))
res = [0]
combination(ls,res)
print(*res)