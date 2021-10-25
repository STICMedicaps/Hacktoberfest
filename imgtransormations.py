import cv2 as cv
import numpy as np

img = cv.imread('img/about.png')
cv.imshow('Img',img)

# transltion
# def translate(img, x, y):
#     transMat=np.float32([[1,0,x],[0,1,y]])
#     dimensions=(img.shape[1], img.shape[0])
#     return cv.warpAffine(img, transMat, dimensions)

# -x -> left
# -y -> Up
# x -> right
# y -> Down

# translateimg = translate(img, 100, 100)
# cv.imshow('show', translateimg)


#rotate
def rotate(img, angle, rotpoint=None):
    (height,weight) = img.shape[:2]

    if rotpoint is None:
        rotpoint = (weight//2,height//2)
    
    rotMat = cv.getRotationMatrix2D(rotpoint, angle, 1.0)
    dimensions= (weight,height)

    return cv.warpAffine(img, rotMat, dimensions)

rotateimg = rotate(img, 45)
cv.imshow('rotateimg', rotateimg)

cv.waitKey(0)