import cv2 as cv
import numpy as np

def nothing(x):
    pass

cv.namedWindow('image')
img = np.zeros((300, 512, 3), np.uint8)#300x512,3channel

cv.createTrackbar('R','image',0,255,nothing)
cv.createTrackbar('G','image',0,255,nothing)
cv.createTrackbar('B','image',0,255,nothing)

switch = "0:OFF\n1:ON"
cv.createTrackbar(switch,'image',0,1,nothing)

while(1):
    cv.imshow('image', img)
    k = cv.waitKey(1)&0xFF
    if k==27:#key Esc
        break
    #print(k)
    #print(ord('q'))
    r = cv.getTrackbarPos('R','image')
    g = cv.getTrackbarPos('G','image')
    b = cv.getTrackbarPos('B','image')
    s = cv.getTrackbarPos(switch,'image')
    
    if s==0:
        img[:] = 0
    else:
        img[:] = [b,g,r]#default color pattern：bgr

cv.destroyAllWindows()