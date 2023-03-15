import time 
inicio = time.time()
valor = 0
for i in range(1000000000):
    valor = valor + 1
    print(valor)
fin = time.time()
print(fin-inicio)
