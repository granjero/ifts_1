% puntoFijo01 (F, x0, n)
% F [funcion] debe ser una funcion definida
% x0 [numero] primer valor para evaluar F
% n [numero] criterio de parada
%
% itera hasta que el criterio de parada sea menor a la diferencia entre los valores
% y va evaluando cualquier funcion definida F y va almacenando los 
% valores en la variable que va a ser el indice de 
% la funcion que se evaluara en la siguiente iteracion


function  salida = puntoFijo02(F, x0, n)
  
  parada = 100;
  
  while (n < parada)      
    
    x1 = feval (F, x0);
    parada = abs(x0 - x1);
    x0 = x1;
  
  end
  
  salida = x0;

end