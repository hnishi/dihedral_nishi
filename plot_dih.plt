set term png size 1000,1000  #canvas size
set output "out_dih.png"
#set size 0.95,0.95  #ratio of graph in canvas

set title
set xlabel "phi"
set ylabel "psi"

set xrange[-180:180]
set yrange[-180:180]
set xtics 45
set ytics 45
set grid

plot "out_dih.dat"

#pause -1
