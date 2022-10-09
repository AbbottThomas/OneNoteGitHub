import tensorflow as tf

a = tf.constant([1, 2, 3, 1, 1])
b = tf.constant([0, 1, 3, 4, 5])
c = tf.where(tf.greater(a, b), a, b)  # 若a>b，返回a对应位置的元素，否则返回b对应位置的元素
print("c：", c)

# help(tf.where)
# where(condition,x,y) ,条件,返回x,或y
# help(tf.greater)
# tf.greater(x,y),返回bool型张量,x > y

