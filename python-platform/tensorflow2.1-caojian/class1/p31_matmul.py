import tensorflow as tf

a = tf.ones([3, 2])
b = tf.fill([2, 3], 3.)
print("a:", a)
print("b:", b)
print("a*b:", tf.matmul(a, b))
# 出错,a和b,同shape的话,a*b,就是元素乘,不能代表矩阵乘
# d = a*b
# print("d:",d)