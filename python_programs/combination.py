def combination(ls,res,id=0,temp=[]):
    n = len(ls)
    if(temp!=[]):
        res.append(temp.copy())
    for i in range(id,n):
        temp.append(ls[i])
        combination(ls,res,i+1,temp)
        temp.pop()
ls = list(map(int,input().split()))
res=[]
combination(ls,res)
print(*res,sep='\n')