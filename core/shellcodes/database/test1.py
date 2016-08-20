from generator import *

input = "a"
os = "windows"
shelltype = "exec"

input = generator( os, shelltype, input)
shellcode =  '\nchar shellcode [] = "%s";' % input
print shellcode