import cv2 as cv
import numpy as np
img = cv.imread('img/about-1.jpg')

width,height = 350,350
pts1 = np.float32([[117,476],[449,464],[122,774],[490,772]])
pts2 = np.float32([[0,0],[width,0],[0,height],[width,height]])
matrix = cv.getPerspectiveTransform(pts1,pts2)
imgoutput = cv.warpPerspective(img,matrix,(width,height))
cv.imshow('ou',imgoutput)

cv.waitKey(0)
