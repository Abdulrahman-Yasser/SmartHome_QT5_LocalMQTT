#!/bin/sh

export QT_QPA_PLATFORM=wayland
export QT_QPA_FONTDIR=/usr/share/fonts/ttf
export XDG_RUNTIME_DIR=/run/user/`id -u weston`
export WAYLAND_DISPLAY=wayland-0
export DISPLAY=:1
	
