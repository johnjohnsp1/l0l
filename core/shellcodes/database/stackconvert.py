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