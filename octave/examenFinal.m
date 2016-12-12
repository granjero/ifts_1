#http://www.varsitytutors.com/hotmath/hotmath_help/spanish/topics/line-of-best-fit

clear all

clc

#archivo = input("escriba entre comillas simples el nombre del archivo a leer \n")
#file = fopen(archivo);

#file = fopen('m1-1.txt');
file = fopen('m1-2.txt');
#file = fopen('m1-3.txt');
#file = fopen('poblacionmozambique.txt');
#file = fopen('poblacionnigeria.txt');

i = 1;

while (! feof (file))
  x(i) = fscanf(file, '%f', 1);
  y(i) = fscanf(file, '%f', 1);
  i++;
endwhile

fclose(file);

#sumatoria de x
sumX = sum(x);

#promedio x
promX = sumX / length(x);

#sumatoria de y
sumY = sum(y);

#promedio y
promY = sumY / length(x);

#sumatoria de xy
for i = 1 : length(x)
  xy(i) = x(i) * y(i);
endfor
sumXY = sum(xy);

#x cuadrado
for i = 1 : length(x)
  xcuadrado(i) = x(i) ^ 2;
endfor

#sumatoria de x^2
sumXcuadrado = sum(xcuadrado);

#Calculo pendiente 
#con numeradorP = sumXY-((sumX - sumY) / length(x))
#y denominadorP = sumXcuadrado -(xcuadrado / length(x))
numeradorP = sumXY-((sumX - sumY) / length(x));
denominadorP = sumXcuadrado -(sumXcuadrado / length(x));
pendiente = numeradorP / denominadorP;

#Calculo ordenada al origen con ordenadaOrigen = promY - pendiente*promX
ordenadaOrigen = promY - pendiente*promX;

#ecuacion de la recta Y = M*X+B

for i = 1 : length(x)
  Y(i) = pendiente * x(i) + ordenadaOrigen;
endfor  

plot(x,y,'',x,Y,'')