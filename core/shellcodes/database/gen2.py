#------------------------------------------------------------------# 
#Author  : roissy
#Greetz  : b3mb4m, esw0rmer, bomch4nte
#Concat  : roissy@tuta.io
#Project : https://github.com/roissy/l0l
#LICENSE : https://github.com/roissy/l0l/blob/master/LICENSE
#------------------------------------------------------------------#

from re import findall
import sys
import re
import codecs


def plaintext( string):
	string = codecs.encode(str.encode(string), 'hex')
	string = string.decode('utf-8')
	db = re.findall("..?", string)
	return "\\x"+"\\x".join(db)

def plaintextreverse( string):
	string = codecs.encode(str.encode(string), 'hex')
	string = string.decode('utf-8')
	db = re.findall("..?", string)
	return "\\x"+"\\x".join(db[::-1])



def PORT( port):
	from convertoffset import decimaltohex
	db = []
	fixmesempai = re.findall('..?', decimaltohex(str(port)))
	for x in fixmesempai:
		if len(x) == 1:
			x = "0"+x
		db.append(x)
	return "\\x"+"\\x".join(db)



def IP( ip):
	from convertoffset import decimaltohex
	#0x101017f : 127.1.1.1
	ip = str(ip).split(".")
	db = []
	db2 = []
	for x in ip:
		db.append(decimaltohex( int(x)))
	for x in db: 
		if len(x) == 1:
			x = "0"+x
		db2.append(x)
	return "\\x"+"\\x".join(db2)


def rawSTR( string):
	db = []
	for x in string:
		first = codecs.encode(str.encode(x), 'hex')
		x = x.decode('utf-8')
		db.append("\\x"+x)
	return "".join(db)


def ARM( string):
	db = []
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
			db.append(ARMsplitter(string[x:x+4]))
		return "".join(db)
		
def ARMsplitter( hexdump, pushdword="None"):
	db = []
	if pushdword == "None":
		fixmesempai = re.findall('....?', hexdump)
		for x in fixmesempai[::-1]:
			first = codecs.encode(str.encode(x[::-1]), 'hex')
			first = first.decode('utf-8')
			second = re.findall("..?", first)[::-1]
			db.append("\\x"+"\\x".join(second))
		return "".join(db)			




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


def filler( string, number):
	string = [x for x in string]
	for x in range(0, len(string)):
		if string[x] == "/":
			string[x] = "/"*number
			break
	return "".join(string) 


def splitter( hexdump, pushdword="None"):
	db = []
	if pushdword == "None":
		fixmesempai = re.findall('....?', hexdump)
		for x in fixmesempai[::-1]:
			first = codecs.encode(str.encode(x[::-1]), 'hex')
			first = first.decode('utf-8')
			second = re.findall("..?", first)[::-1]
			db.append("\\x"+"\\x".join(second))
		return "\\x68"+"".join(db)	
				
	else:		
		#Byte ..
		if len(hexdump) == 1:
			string = codecs.encode(str.encode(hexdump), 'hex')
			string = string.decode('utf-8')
			return r"\x6a"+r"\x"+string
		else:
			first = codecs.encode(str.encode(hexdump[::-1]), 'hex')
			first = first.decode('utf-8')
			second = re.findall("..?", first)[::-1]
			for x in second:
				db.append("\\x"+x)
			return "\\x66\\x68"+"".join(db)



			

						
					
shellcode =  r"\x33\xc9\x64\x8b\x49\x30\x8b\x49\x0c\x8b"
shellcode += r"\x49\x1c\x8b\x59\x08\x8b\x41\x20\x8b\x09"
shellcode += r"\x80\x78\x0c\x33\x75\xf2\x8b\xeb\x03\x6d"
shellcode += r"\x3c\x8b\x6d\x78\x03\xeb\x8b\x45\x20\x03"
shellcode += r"\xc3\x33\xd2\x8b\x34\x90\x03\xf3\x42\x81"
shellcode += r"\x3e\x47\x65\x74\x50\x75\xf2\x81\x7e\x04"
shellcode += r"\x72\x6f\x63\x41\x75\xe9\x8b\x75\x24\x03"
shellcode += r"\xf3\x66\x8b\x14\x56\x8b\x75\x1c\x03\xf3"
shellcode += r"\x8b\x74\x96\xfc\x03\xf3\x33\xff\x57\x68"
shellcode += r"\x61\x72\x79\x41\x68\x4c\x69\x62\x72\x68"
shellcode += r"\x4c\x6f\x61\x64\x54\x53\xff\xd6\x33\xc9"
shellcode += r"\x57\x66\xb9\x33\x32\x51\x68\x75\x73\x65"
shellcode += r"\x72\x54\xff\xd0\x57\x68\x6f\x78\x41\x01"
shellcode += r"\xfe\x4c\x24\x03\x68\x61\x67\x65\x42\x68"
shellcode += r"\x4d\x65\x73\x73\x54\x50\xff\xd6\x57"
shellcode += stackconvertSTR("kadir kadir deneme deneme")
shellcode += r"\x8b\xcc\x57\x57\x51\x57"
shellcode += r"\xff\xd0\x57\x68\x65\x73\x73\x01\xfe\x4c"
shellcode += r"\x24\x03\x68\x50\x72\x6f\x63\x68\x45\x78"
shellcode += r"\x69\x74\x54\x53\xff\xd6\x57\xff\xd0"



print shellcode