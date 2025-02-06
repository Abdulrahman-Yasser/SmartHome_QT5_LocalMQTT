#!/bin/sh
# Required-Start: $weston 

case "$1" in
	
start)
# weston &
echo "This is the init script line 1"
echo "This is the init script line 2"



# export QTDIR=/usr/bin/qt5
# export QT_QPA_PLATFORM_PLUGIN_PATH=/usr/lib/plugins/platforms
# export QT_QPA_PLATFORM=eglfs:fb=/dev/fb0
# export QT_QPA_GENERIC_PLUGINS=evdevtouch:/dev/input/event1
# export QML2_IMPORT_PATH=$QTDIR/qml

# export XDG_RUNTIME_DIR=/run/user/1000
# echo " the xdg_runtime_var is : ${XDG_RUNTIME_DIR}"
# export DISPLAY=:1
# sleep 20s # could be less
# echo "with DIR `ls /run/user/1000`"
# su weston -c "source /etc/my_variables/var.sh"
while true;
do
if [ -S "/run/user/1000/wayland-1" ]; then
  echo "Wayland display server is available"
  sleep 1
  break
else
  echo "Wayland display server is not available"
fi
done

export WAYLAND_DISPLAY=wayland-1
export XDG_SESSION_TYPE=wayland
export DISPLAY=:0 
export XDG_RUNTIME_DIR="/run/user/`id -u weston`" 
export QT_QPA_FONTDIR=/usr/share/fonts/ttf
echo "Launching myQTApp"


# yocto-gui-cmake -platform wayland
# su weston -c "myQTApp -platform wayland"

;;
	
stop)
# killall -9 my-smart-home
# killall -9 yocto-gui-cmake
;;
esac
