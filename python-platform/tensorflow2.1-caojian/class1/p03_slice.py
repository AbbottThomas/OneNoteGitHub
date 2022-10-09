import numpy as np
a = np.arange(16).reshape(4,4)
print(a)
b = a[3:]
print("b:",b)
c = a[:,2:]
print("c:",c)
