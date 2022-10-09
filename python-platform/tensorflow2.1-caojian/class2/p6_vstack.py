import numpy as np

a = np.array([1, 2, 3])
b = np.array([4, 5, 6])
c = np.vstack((a, b))
print("c:\n", c)


# 新增加的
# d = np.hstack((a,b))
# d = [a,b]   ,变成列表了
# d=np.array([]),不行,超过了
dd = np.array([[3,3,4],[4,4,5],[5,5,6]])
d = np.eye(3,3)
print("d:\n",d)
d[0,:] = a
print("d:\n",d)
d[1,:] = b[0]
d[2,:] = dd[1,:]
print("d:\n",d)
# e,f = np.vsplit(c,2)
# print(e)
# print(f)



