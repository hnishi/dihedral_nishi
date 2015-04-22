#set term png size 1000,1000  #canvas size
#set output "out_dih.png"
#set size 0.95,0.95  #ratio of graph in canvas
#set term wxt size 1000,1000

set title "phi psi plot with RMSD"
set xlabel "phi"
set ylabel "psi"

set xrange[-180:180]
set yrange[-180:180]
#set zrange[0:3]
#set cbrange[0:3]
set xtics 45
set ytics 45
set grid

plot "out_dih_rmsd.dat" u 1:2:3 lc palette

pause -1
