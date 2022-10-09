import matplotlib.pyplot as plt
import numpy as np
x1 = np.arange(-2,2,0.01)
x2 = np.linspace(-4,4,100)
y1 = np.sin(x1)
y2 = np.sin(x2)

f1 = plt.figure("test")
f1.add_subplot(1,2,1)
plt.title("[-2,2]")
plt.xlabel("x1")
plt.ylabel("y1")
plt.plot(x1,y1)
plt.legend()
# plt.show()  不能要,否直接展现了,不在一个图里
f1.add_subplot(1,2,2)
plt.title("[-4,4]")
plt.xlabel("x2")
plt.ylabel("y2")
plt.plot(x2,y2)
plt.legend()
plt.show()

