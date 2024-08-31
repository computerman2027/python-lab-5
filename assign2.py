#assignment 2
#check palindrome string

st=input("Enter a string : ")
if(len(st.strip())==0):
    print("No string entered")
elif(st.strip()==st.strip()[::-1]):
    print("Palindrome string")
else:
    print("Not Palindrome string")
