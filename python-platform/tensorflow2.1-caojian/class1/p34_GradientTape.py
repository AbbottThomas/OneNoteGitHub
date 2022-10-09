import tensorflow as tf

# aa = tf.constant(1)
# bb = tf.constant([1])
# print("aa.shape:",aa.shape)
# print("bb.shape:",bb.shape)



with tf.GradientTape() as tape:
    x = tf.Variable(tf.constant(3.0))
    y = tf.pow(x, 2)
grad = tape.gradient(y, x)
print(grad)
print(type(grad))
print("grad.shape:",grad.shape)
w = grad*0.2
print(w)