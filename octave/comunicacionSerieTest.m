#
# y = ((Vf - Vi) / Tf - Ti ) . (T - Ti) + Vi
#
# y = 

#Borra todas las variables habidas 
clear all

#abre el archivo
archivo = fopen('voltajes', 'r');

i = 1;

titulos = fscanf(archivo, '%s', 3);

while (!feof(archivo))
  Vi(i) = fscanf(archivo, '%f', 1);
  Vf(i) = fscanf(archivo, '%f', 1);
  tiempo(i) = fscanf(archivo, '%f', 1);
  i++;
end

Vi
Vf
tiempo






