clear all
clc
im = imread('aj.jpg');

subplot(2,2,1)
imshow(im)
title('Original')

subplot(2,2,2)
imshow(im(:,:,1))
title('R')

subplot(2,2,3)
imshow(im(:,:,2))
title('G')

subplot(2,2,4)
imshow(im(:,:,3))
title('B')


#while (im)
#  R = im(:,:,1);
#  G = im(:,:,2);
#  B = im(:,:,3);
#end
#plot(R)
#imshow(im)