def comb(st1):
    temp=[[]]
    for ch in st1:
        newtemp=[]
        for p in temp:
            for i in range(len(p)+1):
                newp=p.copy()
                newp.insert(i,ch)
                newtemp.append(newp)
        temp=newtemp    
    return temp

st=input("enter a string : ")
ans=comb(st)
print("No of combination =",len(ans))
for word in ans:
    print("".join(word))