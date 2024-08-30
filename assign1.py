#assignment 1
#to calculate frequency of each character no repeatation allowed

st=input("Enter a string :")
d=""
for i in st:
    if(i not in d):
        c=0
        d=d+i
        for j in st:
            if(j==i):
                c+=1
        print(i,"repeats",c,"times")
