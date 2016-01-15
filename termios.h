//Termios wrapper for Windows 32-bit using the Windows API

#ifndef TERMIOS_H_
#define TERMIOS_H_

#include <windows.h>



struct termios {
   tcflag_t c_iflag;      // input modes
   tcflag_t c_oflag;      // output modes
   tcflag_t c_cflag;      // control modes
   tcflag_t c_lflag;      // local modes
   cc_t     c_cc[NCCS];   // special characters
}

#endif  //TERMIOS_H_

