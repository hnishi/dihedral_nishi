#!/bin/bash

################################################################################
# function : do_paste_rmsd
# description :
#   
#
################################################################################
#echo "USAGE: bash do_paste_rmsd.bash out_dih.dat <output filename>"
#dir=`pwd`
#file_dih=__FILEDIH__

#cat out_dih.dat | awk '{print $1,$2}' > paste_rmsd.dat #cat out_dih.dat | cut -d" " -f1-4 #cat out_dih.dat | cut -d" " -f1,4 
#cat out_dih.dat | cut -d" " -f1-4 > aaa #cat out_dih.dat | cut -d" " -f1,4 
#cat ${file_dih} | awk '{print $1}' > aaa
#cat ${file_dih} | awk '{print $2}' > ccc
cat $1 | awk '{print $1}' > aaa
cat $1 | awk '{print $2}' > ccc


#echo "file 'bbb', that includes rmsd values for all structures, should be prepared "
cat $2 | awk '{print $2}' > bbb
paste aaa ccc bbb > $3
rm aaa bbb ccc
echo "out_dih_rmsd.dat was output"

