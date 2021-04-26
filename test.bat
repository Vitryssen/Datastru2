set  terminal  pdf  font "cmr"
set  output  "image.pdf"
#set  size 1,2
set  key box
#set  samples 50, 50
#set  style  data  lines
set  title "Selection  sort  -- Random  series"
set  xlabel "N elements"
set  ylabel "t [ms]"
x = 0.0
plot "selectionSort.data" title "Random  input" with  errorbars , "fit.data" smooth  csplines t "Fit k N^2"
#close  output  file
set  output
set  terminal  pop