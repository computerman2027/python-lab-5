#assignment 4
#initials of a name

st=input("Enter a string : ")
st=st.strip()
st=" "+st
i=0
ans=""
while i<len(st):
    if st[i]==" " and st[i+1]!=" ":
        ans=ans+(st[i+1].capitalize())+"."
    i+=1
print("Initial =",ans)
