import random as rand
lista = []
for i in range(10000):
    lista.append(rand.randint(1,10000))


file = open("array.txt","w")
file.write(str(lista))
file.close()
