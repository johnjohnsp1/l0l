from generator import *

class roissy(object):   
    def __init__(self):
        self.disassembly = "None"



argv = raw_input("enter message:")

self.disassembly = generator( "windows", "messagebox", argv)