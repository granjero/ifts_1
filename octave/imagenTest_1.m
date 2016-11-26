clear all
clc
im = imread('kan.jpg');

#gris = rgb2ntsc(im);
rectang = [50 50 50 50]
crop = imcrop(im,rectang);
imshow(crop)