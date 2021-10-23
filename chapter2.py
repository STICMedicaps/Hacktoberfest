import cv2 as cv
import numpy as np

img = cv.imread('img/post-1.jpg')
kernal = np.ones((5,5), np.int8)
gray = cv.cvtColor(img, cv.COLOR_BGR2GRAY)
blur = cv.GaussianBlur(gray, (3,3), 0)
imgcanny= cv.Canny(img,150,200)
imgdialation = cv.dilate(imgcanny,kernal,iterations=5)
imgerrosion = cv.erode(imgdialation,kernal,iterations=1)
cv.imshow('Img', imgdialation)
cv.imshow('Img Err', imgerrosion)
cv.waitKey(0)