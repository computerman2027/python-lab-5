#assignment 2
#check palindrome string

st=input("Enter a string : ")
if(len(st.strip())==0):
    print("No string entered")
elif(st==st[::-1]):
    print("Palindrome string")
else:
    print("Not Palindrome string")
