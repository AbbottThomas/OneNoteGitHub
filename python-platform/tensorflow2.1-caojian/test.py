# import tensorflow as tf

# tensorflow_version = tf.__version__
# gpu_available = tf.test.is_gpu_available()

# print("tensorflow version:", tensorflow_version, "\tGPU available:", gpu_available)

# a = tf.constant([1.0, 2.0], name="a")
# b = tf.constant([1.0, 2.0], name="b")
# result = tf.add(a, b, name="add")
# print(result)

from operator import itemgetter
L = [("Bob",75),("Cat",60),("Kattie",90)]
by_name = lambda t : t[0]

def by_score(t):
    pass
name = sorted(L,key=by_name)
print(name)


