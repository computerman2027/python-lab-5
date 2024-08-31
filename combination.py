def comb(st1,ans):
    if(len(st1)==0):
        print(ans)
        return
    for i in range(len(st1)):
        ch=st1[i]
        left_str=st1[0:i]
        right_str=st1[i+1:]
        comb(left_str+right_str,ans+ch)
      
st=input("enter a string : ")
comb(st,"")
