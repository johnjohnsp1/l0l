#------------------------------------------------------------------# 
#Author  : roissy
#Greetz  : b3mb4m, esw0rmer, ollend, bomch4nte
#Concat  : roissy@tuta.io
#Project : https://github.com/roissy/l0l
#LICENSE : https://github.com/roissy/l0l/blob/master/LICENSE
#------------------------------------------------------------------#


from re import findall
import codecs

def stackconvertSTR( string, win=False):
	db = []
	if len(string) == 1:
		string = codecs.encode(str.encode(string), 'hex')
		string = string.decode('utf-8')
		return r"\x6a"+r"\x"+string

	if "/" in string:
		if len(string) % 4 == 0:
			string = string
		elif  len(string) % 4 == 1:
			string = filler( string, 4)
		elif len(string)	% 4 == 2:
			string = filler( string, 3)
		elif len(string) % 4 == 3:
			string = filler( string, 2)
		for x in range(0,len(string),4):
			db.append(splitter(string[x:x+4]))
		return "".join(db[::-1])
		#return "".join(db)
		
	#Linux_x86
	#68 PUSH DWORD
	#6668 PUSH WORD
	#6A PUSH BYTE
	if len(string) == 4:
		first = codecs.encode(str.encode(string[::-1]), 'hex')
		stack = first.decode('utf-8')
		data = re.findall("..?", stack)
		return "\\x68\\x"+"\\x".join(data)


	elif len(string) % 4 == 0:
		for x in range(0,len(string),4):
			db.append(splitter(string[x:x+4]))
		if win == True:
			return "".join(db[::-1]) #Windows
		else:
			return "".join(db) #Unix,Linux etc..

	elif 2 < len(string) < 4:
		first = codecs.encode(str.encode(hexdump[::-1]), 'hex')
		first = first.decode('utf-8')
		second = re.findall("..?", first)[::-1]
		for x in second:
			db.append("\\x"+x)
		return "\\x66\\x68"+"".join(db)


	else:
		db = []
		for x in range(0,len(string),4):
			if len(string[x:x+4]) == 4:
				db.append(splitter(string[x:x+4]))
			else:
				db.append(splitter(string[x:x+4], "WordTime"))
		if win == True:
			return "".join(db[::-1]) #Windows
		else:
			return "".join(db) #Unix,Linux etc..)
