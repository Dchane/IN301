gcc exo3.c -o exo3
./exo3 > nombres.data
sort -n nombres.data > nombres_tries_data 
uniq nombres_tries_data > nombres_uniq.data
