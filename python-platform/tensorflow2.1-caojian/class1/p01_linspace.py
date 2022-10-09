import numpy as np
a = np.linspace(-2,2,20)
b = np.arange(1.1,2.1,0.1)
# c = range(1.1,2.1,0.1)   不能生成浮点数
#arange另一种使用方法,放size,再reshape
# a = np.arange(10).reshape(2,5)
print(a)
print(b) 
# print(c)