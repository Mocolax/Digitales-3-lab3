#!/bin/bash
if [ $(ls -d Digitales-3-lab3) ]
then
	echo "Archivos ya descargados y compilados"
	cd Digitales-3-lab3
else
	git clone https://github.com/Mocolax/Digitales-3-lab3
	chmod 777 Digitales-3-lab3
	cd Digitales-3-lab3
	gcc EjercicioA.c -o ejercicioA
	gcc EjercicioB.c -o ejercicioB
	gcc EjercicioC.c -o ejercicioC
	gcc EjercicioD.c -o ejercicioD
fi

(time ./ejercicioA) 2> ../Nose.txt
grep 'real' ../Nose.txt | tr -d '[a-z]' | sed -e 's/^	0//' > ../datei.txt
c=$(cat ../datei.txt)

(time python3 ./Lab3.py) 2> ../Nose.txt
grep 'real' ../Nose.txt | tr -d '[a-z]' | sed -e 's/^	0//' > ../datei.txt
py=$(cat ../datei.txt)
echo "$c $py"
decimal=$(printf "%d" $c)
decimal2=$(printf "%d" $py)
echo $decimal $decimal2
echo "$(($decimal2 - $decimal)), ">> csv.csv
