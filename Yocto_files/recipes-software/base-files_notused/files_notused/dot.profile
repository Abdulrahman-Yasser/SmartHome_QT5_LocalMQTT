#! /bin/bash
# ~/.profile: executed by Bourne-compatible login shells.

if [ -f ~/.bashrc ]; then
  . ~/.bashrc
fi
export QT_QPA_FONTDIR=/usr/share/fonts/ttf

echo "Program"

myQTApp -platform wayland

# path set by /etc/profile
# export PATH

# Might fail after "su - myuser" when /dev/tty* is not writable by "myuser".
mesg n 2>/dev/null
