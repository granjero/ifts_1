function salida = biseccion(F, a, b)

a0 = a;
b0 = b;
x0 = (a0 + b0) / 2;
Fa0 = feval(F, a0);
Fx0 = feval(F, x0);

if Fa0 * Fx0 < 0
  a1 = a0;
  b1 = x0;
else
  a1 = x0;
  b1 = b0;
endif

for i = 1:10

end

salida = (a1 + b1) / 2;

valoresEjeX = a:0.0001:b;
valoresEjeY = feval(F, valoresEjeX);
plot(valoresEjeX, valoresEjeY);

end