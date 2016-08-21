/* C Headers */

#ifdef __unix__
#elif defined(_WIN32) || defined(WIN32)
#define OS_Windows
#endif

#include <stdio.h>
#include <stdlib.h>

#ifdef OS_Windows
    #include <conio.h>
#else
    #include <curses.h>
#endif

#include <string.h>
#include <time.h>
#include <signal.h>
#include <direct.h>

/* C++ Headers */

#include <iostream>
#include <string>
#include <algorithm>
#include <fstream>

using namespace std;

/* lib */

#include "lib/rlutil.h"


/* Core */

#include "banner/banner.cpp"
#include "functions.cpp"
#include "lists.cpp"

/* Shellcodes */

#include "shellcodes/shellcodes.cpp"

/* Backdoors */

#include "backdoors/scripting_payloads.cpp"




