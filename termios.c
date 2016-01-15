/* Copyright (C) 2015-2016 Jorgeluis A. Guerra
   This file is NOT part of the GNU C Library.
   This is a sort of termios 'wrapper' for Windows 32-bit using the
   Windows API, implemented with the funcionalities of this API to
   write functions 'termios like' and then allowing compatibility for
   codes originally implemented for POSIX systems.

   MIT License */

// POSIX Standard: 7.1-2 General Terminal Interface "termios.h"

struct termios

tcgetattr()
cfmakeraw()
cfsetispeed()
cfsetospeed()
tcsetattr()

