cat data.dat | wc -l
cat data.dat | grep "dolor\|dalor" -o | wc -l
cat data.dat | wc -w
cat data.dat | grep -o  '\bmol\w*'| wc -l
