#! /bin/bash
# ~/.bashrc: executed by bash(1) for non-login shells.

export PS1='\h:\w\$ '
umask 022
export QT_QPA_FONTDIR=/usr/share/fonts/ttf
export XDG_RUNTIME_DIR=/tmp/root-weston
echo "I've Entered till here !"
echo "${USER}"
export DISPLAY=:1.0
myQTApp -platform wayland 
# yocto-gui-cmake -platform wayland &
# yocto-iot-gui -platform wayland & 
# weston 
# You may uncomment the following lines if you want `ls' to be colorized:
# export LS_OPTIONS='--color=auto'
# eval `dircolors`
# alias ls='ls $LS_OPTIONS'
# alias ll='ls $LS_OPTIONS -l'
# alias l='ls $LS_OPTIONS -lA'
#
# Some more alias to avoid making mistakes:
# alias rm='rm -i'
# alias cp='cp -i'
# alias mv='mv -i'
