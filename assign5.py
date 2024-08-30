#assignment no 5
#reverse a sentence

st=input("Enter a sentence : ")
s=st.split(' ')
ans1=""
ans2=""
for i in s:
    ans1=i+" "+ans1
    ans2=i[::-1]+" "+ans2
print("Ans1 =",ans1)
print("Ans2 =",ans2)

