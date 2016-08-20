#------------------------------------------------------------------# 
#Author  : roissy
#Greetz  : b3mb4m, esw0rmer, ollend, bomch4nte
#Concat  : roissy@tuta.io
#Project : https://github.com/roissy/l0l
#LICENSE : https://github.com/roissy/l0l/blob/master/LICENSE
#------------------------------------------------------------------#

def generator( choose, shellcode, argv="None", argv2="None"):

	if choose == "windows":
		if shellcode == "messagebox":
			from Windows import messagebox
			from stackconvert import stackconvertSTR
			if argv == "None":
				return messagebox.messagebox( False)
			else:
				return messagebox.messagebox( stackconvertSTR(argv, True))
