import imp
from mailbox import linesep
import tensorflow as tf
import matplotlib.pyplot as plt
import numpy as np

dd = tf.random.normal([100, 100], mean=0.5, stddev=1)
d = tf.random.normal([100], mean=0.5, stddev=1)
print("d:", d)
ee = tf.random.truncated_normal([100, 100], mean=0.5, stddev=1)
e = tf.random.truncated_normal([100 ], mean=0.5, stddev=1)
print("e:", e)

# 新增加画图,观看
x = np.linspace(-4,4,100)
fig = plt.figure("distributed")
fig.add_subplot(2,1,1)
plt.title("Normality")
# plt.plot(x,d)
plt.plot(dd)
fig.add_subplot(2,1,2)
plt.title("Trncated-Normality")
# plt.plot(x,e.numpy())
plt.plot(ee)
plt.show()

