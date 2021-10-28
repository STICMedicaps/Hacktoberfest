import cv2 as cv
import numpy as np
img = cv.imread('img/post-1.jpg')
print(img.shape)
imgresize = cv.resize(img, (200,200))
cv.imshow("resize", imgresize)
imgcrop = img[150:200, 0:300]
cv.imshow('crop', imgcrop)
cv.imshow('Img',img)

cv.waitKey(0)