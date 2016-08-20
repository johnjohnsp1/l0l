from core.shellcodes.database.generator import *
input = "cancan cancan"
os = "windows"
shelltype = "messagebox"

input = generator( os, shelltype, input)
shellcode =  """
char shellcode [] = "%s";""" % input
print shellcode