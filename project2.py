import cv2 as cv
import numpy as np
weidth = 640
height = 480

cap = cv.VideoCapture(0)
cap.set(3,640)
cap.set(4,480)
cap.set(10,130)

def preProcessing(img):
    imggray = cv.cvtColor(img, cv.COLOR_BGR2GRAY)
    imgblur = cv.GaussianBlur(imggray, (5,5), 1)
    imgcanny = cv.Canny(imgblur,200,200)
    kernal = np.ones((5,5))
    imgdia = cv.dilate(imgcanny,kernal,iterations=2)
    imgerode = cv.erode(imgdia,kernal,iterations=1)
    return imgerode

def getcontours(img):
    biggest = np.array([])
    maxarea = 0
    contours,hierarchy = cv.findContours(img,cv.RETR_EXTERNAL,cv.CHAIN_APPROX_NONE)
    for cnt in contours:
        area = cv.contourArea(cnt)
        if area>1000:
            cv.drawContours(imgcontour,cnt,-1,(255,0,0),3)
            peri = cv.arcLength(cnt,True)
            approx= cv.approxPolyDP(cnt,0.02*peri,True)
            if area>maxarea and len(approx) == 4:
                biggest = approx
                maxarea = area
    return biggest

while True:
    success, img = cap.read()
    cv.resize(img, (weidth,height))
    imgcontour = img.copy()
    imgget = preProcessing(img)
    getcontours(imgget)
    cv.imshow('video', imgcontour)

    if cv.waitKey(1) & 0xFF == ord('q'):
        break