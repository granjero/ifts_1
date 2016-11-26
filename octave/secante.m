% 
% secante(x0, F, cota)
%

function  salida = secante(x0, F, cota)
  
  parada = 100;  
  
  x1 = feval (F, x0);
  
  while (cota < parada)
        
    x2 = x1 - ( (feval(F, x1)) / ( (feval(F, x1) - feval(F,x0) / ( x1 - x0) ) ) );
    
    parada = abs(x2 - x1);
    
    x0 = x1;
    x1 = x2;
  
  end   
  
  salida = x2;

  end