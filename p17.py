record="Leo tolstroy*1828-8-28*1910-11-20"
fields=record.split("*")
print(fields)

born=fields[1].split("-")
print(born)

died=fields[2].split("-")
print(died)

print("Lived about",int(died[0])-int(born[0]),"years")
