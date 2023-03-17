import time 
inicio = time.time()
p = 1
a = 1
b = 1

for i in range(1, 100):
	p = i * p

print(p)

for i in range(1, 1000):
	a = i * a

print("\n",a)

for i in range(1, 2000):
	b = i * b
	
print("\n",b)

fin = time.time()
print(fin-inicio)


