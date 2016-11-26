clear all

pkg load image-acquisition

obj = videoinput("v4l2", "/dev/video0")
get(obj);
set(obj, "VideoFormat", "RGB3");
set(obj, "VideoResolution", [640 480]);
#preview(obj)
start(obj)

img0 = getsnapshot(obj);
imwrite(img0, "im0.png")
img0 = double(img0);

stop(obj)

for i = 1 : 2
  pause(1);
  printf("%d \n", i)
end

start(obj)

img1 = getsnapshot(obj);
imwrite(img1, "im1.png")
img1 = double(img1);

stop(obj)

%{
img0 = ones(480, 640, 3) * 100;
imwrite(img0, "im0.jpg")
img1 = ones(480, 640, 3) *  0;
imwrite(img1, "im1.jpg")
%}

diferencia =  img0 - img1 ;



diferencia = diferencia.^2;

valor = 0;

for i = 1 : 480
  for j = 1 : 640
    for k = 1 : 3
      valor = valor + diferencia ( i, j, k );
    end
  end  
end

valor = valor / 921600
valor = sqrt(valor)

#cuadrado = sqrt((sum(resta.^ 2)));

#result = cuadrado / 307200;

#[alto, ancho, colores] = size(resta)

#for i = 0 : alto  
 # sum(resta(i) 



#image(img0)
#image(img1)

