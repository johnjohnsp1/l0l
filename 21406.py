from .core.shellcodes.database.generator import *
input = "cancan"
os = "windows"
shelltype = "exec"

input = generator( os, shelltype, input)
shellcode =  """
char shellcode [] = "%s";""" % input
print shellcode