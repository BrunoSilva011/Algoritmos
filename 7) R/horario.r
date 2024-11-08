duracao <- 3888
horas <- duracao / 3600
resto <- duracao %% 3600
minutos <- resto / 60
segundos <- resto %% 60
print( horas )
print( minutos )
print( segundos )