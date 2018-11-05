import random as rand
lista = []
for i in range(100000):
    lista.append(rand.randint(1,100000))


file = open("array.txt","w")
file.write(str(lista))
file.close()
