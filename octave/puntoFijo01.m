% puntoFijo01 (F, x0, n)
% F [funcion] debe ser una funcion definida
% x0 [numero] primer valor para evaluar F
% n [numero] cantidad de iteraciones
%
% itera n veces la funcion F que puede ser
% cualquier funcion definida y va almacenando los 
% valores en la variable que va a ser el indice de 
% la funcion que se evaluara en la siguiente iteracion


function  salida = puntoFijo01(F, x0, n)
  
  for i = 1 : n
    
    x1 = feval (F, x0);
    x0 = x1;
    
  end
  
  salida = x0;

end