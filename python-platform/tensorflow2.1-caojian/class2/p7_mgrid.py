import numpy as np
import tensorflow as tf

# help(np.mgrid)
# 生成等间隔数值点,x生成的个数为总个数,y也是
x, y = np.mgrid[1:3:1, 2:4:0.5]
# 将x, y拉直，并合并配对为二维张量，生成二维坐标点
grid = np.c_[x.ravel(), y.ravel()]
print("x:\n", x)
print("y:\n", y)
print("x.ravel():\n", x.ravel())
print("y.ravel():\n", y.ravel())
print('grid:\n', grid)


# 生成等间隔数值点
# x, y, z = np.mgrid[1:3:1, 2:4:0.5,1:2:0.5]
# # # 将x, y拉直，并合并配对为二维张量，生成二维坐标点
# grid = np.c_[x.ravel(), y.ravel(),z.ravel()]
# print("x:\n", x)
# print("y:\n", y)
# print("z:\n", z)
# print("x.ravel():\n", x.ravel())
# print("y.ravel():\n", y.ravel())
# print("z.ravel():\n", z.ravel())
# print('grid:\n', grid)
