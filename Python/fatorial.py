import numpy as np


n = int(input("Informe o número desejado: "))
fact = 1
for i in range(1, n + 1):
    fact = fact * i

print("O fatorial do numero desejado é:")
print(fact)
input()
