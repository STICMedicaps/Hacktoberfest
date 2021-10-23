import cv2 as cv
import numpy as np
cap = cv.VideoCapture(0)
cap.set(3,1080)
cap.set(4,740)
cap.set(10,100)

mycolor = []

def findColor(img):
    imgHSV = cv.cvtColor(img, cv.COLOR_BGR2HSV)
    lower = np.array([h_min,s_min,v_min])
    uppers = np.array([h_max,s_max,v_max])  
    mask= cv.inRange(img,lower,uppers)
    cv.imshow("img",mask)
    
while True:
    success, img = cap.read()
    cv.imshow('video', img)
    if cv.waitKey(1) & 0xFF == ord('q'):
        break