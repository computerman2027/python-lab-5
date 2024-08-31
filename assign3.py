#assignment 3
# combination of 3 to 4 words

st=input("enter a string : ")
l=len(st)
if (l<3 or l>4):
    print("INVALID LENGTH")
else:
    for i in range(l):
        for j in range(l):
            if j!=i:
                for k in range(l):
                    if not(k!=j and k!=i):
                        continue
                    if l==3:
                        print(st[i]+st[j]+st[k])
                    else:
                        for m in range(l):
                            if not(m!=j and m!=i and m!=k):
                                continue
                            print(st[i]+st[j]+st[k]+st[m])
                    
