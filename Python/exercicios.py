import numpy as np

a = np.linspace(-np.pi, np.pi, 100)
b = np.cos(a)
c = np.sin(a)
print (b @ c)

from sympi import Symbol
xx, y = Symbol('x'), Symbol('y')
x + x + x + y