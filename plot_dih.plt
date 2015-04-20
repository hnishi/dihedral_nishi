#set term png
#set output "out_dih.png"

set xlabel "phi"
set ylabel "psi"

set xrange[-180:180]
set yrange[-180:180]

plot "out_dih.dat"

pause -1
