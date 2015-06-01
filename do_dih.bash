#!/bin/bash

################################################################################
# function : do_dih
# description :
#   
#
################################################################################
istart=210
iend=222
dir=`pwd`

mkdir $dir/outs
 
for (( i=$istart; i<=$iend; i++ ))
do
   #cd $dir/md$mdn/no$i
   echo residue $i ---------------------------------------
   sed "s/__STARTRES__/${i}/g" prm.inp |sed "s/__OUTFILE__/outs\/${i}.dat/g" > ${i}.inp
   ./a.out ${i}.inp > outs/$i.res
   rm ${i}.inp
   sed "s/__STARTRES__/$i/g" plot_dih.plt > plot_${i}.plt
   rm plot_${i}.plt
   cd $dir/outs
   gnuplot ../plot_$i.plt
   cd $dir
done


