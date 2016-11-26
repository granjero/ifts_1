% 
% newton(x0, F, F1, cota)
%

function  salida = newton(x0, F, F1, cota)
  
  parada = 100;  
  
  while (cota < parada)
  
    x1 = x0 - ( (feval (F, x0)) / (feval (F1, x0)) );
    parada = abs(x0 - x1);
    x0 = x1;
  
  end   
  
  salida = x0;

  end