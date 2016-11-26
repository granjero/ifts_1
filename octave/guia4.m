# Realizar una función que permita leer los datos de un archivo 
# con el siguiente formato. El parámetro de entrada de la función 
# deberá ser el nombre del archivo y el parámetro 
# de salida tendrá que ser dos vectores. 
# Uno de ellos el tensión y la corriente.

#function [tension,corriente, t] = guia4(nombre_archivo)
function salida = guia4(nombre_archivo)  
  # abre el archivo
  archivo = fopen(nombre_archivo, 'r');

  i = 1;
  
  salida.nombre = fscanf(archivo, '%s', 1);
  salida.fecha = fscanf(archivo, '%s', 3);
  salida.dia = salida.fecha(7:8);
  salida.mes = salida.fecha(10:12);
  salida.ano = salida.fecha(14:17);
  basura = fscanf(archivo, '%s', 2);
  
  while (!feof(archivo))
    salida.tension(i) = fscanf(archivo, '%f', 1);
    salida.corriente(i) = fscanf(archivo, '%f', 1);
    salida.t(i) = i;
    i++;
  end
  
  #tam = size(salida.tension);
  #tamanio = max(tam);
  
  #for (i = 1:tamanio )
  #  salida.t(i) = i;
  #end
  
  subplot(2,1,1)
  plot(salida.t, salida.corriente)
  title('Corriente')
  subplot(2,1,2)
  plot(salida.t, salida.tension)
  title('Tension')
  
  printf('listorti =) \n')
  
end