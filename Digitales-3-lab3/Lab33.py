import time 
inicio = time.time()
for i in range(1000):
    f = open("text1.txt", "a")
    f.write("\n7")
    f.close()
fin = time.time()
print(fin-inicio)

