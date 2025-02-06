# Recipe created by recipetool
# This is the basis of a recipe and may need further editing in order to be fully functional.
# (Feel free to remove these comments when editing.)

# WARNING: the following LICENSE and LIC_FILES_CHKSUM values are best guesses - it is
# your responsibility to verify that the values are complete and correct.
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://build/Desktop_Qt5-Debug/.qtc/package-manager/LICENSE.conan;md5=71aee2551f0ef50993e0a5f6ae12ee58"

# SRC_URI = "file:///${PV}/abdu/Study/Embedded_Linux/git_ignoring/repos/poky/meta-gui/recipes-software/smart_${PV}_qt5/smart_${PV}.tar"

SRC_URI = " \
file://Control_LEDs/control_leds.ui	\
file://Control_LEDs/control_leds.h	\
file://Control_LEDs/control_leds.cpp	\
file://mainwindow.ui			\
file://mainwindow.h			\
file://CMakeLists.txt			\
file://Home_Weather/home_weather.h	\
file://Home_Weather/home_weather.ui	\
file://Home_Weather/home_weather.cpp	\
file://CMakeLists.txt.user		\
file://mainwindow.cpp			\
file://main.cpp				\
"

S = "${WORKDIR}"

# NOTE: unable to map the following CMake package dependencies: Qt QT
inherit cmake
inherit cmake_qt5
# Specify any options you want to pass to cmake using EXTRA_OECMAKE:
EXTRA_OECMAKE = ""

