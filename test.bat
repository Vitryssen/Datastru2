set  terminal  pdf  font "cmr"
set  output  "stdSort.pdf"
#set  size 1,2
set  key box
#set  samples 50, 50
#set  style  data  lines
set  title "std::sort  -- Random  series"
set  xlabel "N elements"
set  ylabel "t [ms]"
x = 0
f(x) = a*x**2
f1(x) = a1*x*log(x)/log(2)
fit [1000:10000][0:2000] f1(x) "stdSort.data" via a1
plot "stdSort.data" title "Random  input" with  errorbars , f1(x) smooth  csplines t "Fit n log n"
#close  output  file
set  output
set  terminal  pop