fid = fopen('temperatura');

i = 1;

while (! feof (fid))
  fscanf(fid, '%s', 1);
  tempMedMax(i) = fscanf(fid, '%f', 1);
  tempMed(i) = fscanf(fid, '%f', 1);
  tempMedMin(i) = fscanf(fid, '%f', 1);
  humRel(i) = fscanf(fid, '%f', 1);
  vientoMed(i) = fscanf(fid, '%f', 1);
  diasCieloClaro(i) = fscanf(fid, '%f', 1);
  diasCieloCub(i) = fscanf(fid, '%f', 1);
  diasPrecip(i) = fscanf(fid, '%f', 1);
  precipMens(i) = fscanf(fid, '%f', 1);
  i++;
end


subplot (2,2,1)
  plot(
  1:max(size(tempMedMax)),tempMedMax,
  1:max(size(tempMed)),tempMed,
  1:max(size(tempMedMin)),tempMedMin
  )
  legend('Temp. Med. Maximas','Temp. Media','Temp. Med. Min')
  xlabel('Meses')
subplot (2,2,2)
plot(
1:max(size(humRel)),humRel
)
legend('Humedad Relativa Media Mensual')
subplot (2,2,3)
plot(
1:max(size(vientoMed)),vientoMed
)
legend('Viento')

subplot(2,2,4)
plot(
1:max(size(diasCieloClaro)),diasCieloClaro,
1:max(size(diasCieloCub)),diasCieloCub,
1:max(size(diasPrecip)),diasPrecip
#1:max(size(precipMens)),precipMens,
)
legend('Dias Despejados','Deas Nublados', 'Dias Lluviosos')


#tempMedMax