import tensorflow as tf

a = tf.ones([1, 3])
b = tf.fill([1, 3], 3.)
c = tf.fill([1,2],2)
# 自行广播??
# 可以直接上运算
d = a*b*3 + b*2 + 1

# e = a*c   错误的
# print("e:",e)

print("d:",d)
print("a:", a)
print("b:", b)
print("a+b:", tf.add(a, b))
print("a-b:", tf.subtract(a, b))
print("a*b:", tf.multiply(a, b))
print("b/a:", tf.divide(b, a))
