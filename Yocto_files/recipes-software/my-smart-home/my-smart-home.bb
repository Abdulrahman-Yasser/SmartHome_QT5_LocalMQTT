# Recipe created by recipetool
# This is the basis of a recipe and may need further editing in order to be fully functional.
# (Feel free to remove these comments when editing.)

# Unable to find any files that looked like license statements. Check the accompanying
# documentation and source headers and set LICENSE and LIC_FILES_CHKSUM accordingly.
#
# NOTE: LICENSE is being set to "CLOSED" to allow you to at least start building - if
# this is not accurate with respect to the licensing of the software being built (it
# will not be in most cases) you must specify the correct value before using this
# recipe for anything other than initial testing/development!
LICENSE = "CLOSED"
LIC_FILES_CHKSUM = ""

S="${WORKDIR}"
DEPENDS += " paho-mqtt-cpp qtbase wayland "

SRC_URI = " \ 
file://mainwindow.ui				\
file://mainwindow.h				\
file://CMakeLists.txt				\
file://SmartHomeLeds/smarthome_leds.cpp		\
file://SmartHomeLeds/smarthome_leds.h		\
file://SmartHomeLeds/smarthome_leds.ui		\
file://yocto-gui-cmake_autogen/moc_predefs.h	\
file://yocto-gui-cmake_autogen/mocs_compilation.cpp					\
file://yocto-gui-cmake_autogen/YOVFA3NXAK/moc_smarthome_leds.cpp			\
file://yocto-gui-cmake_autogen/YOVFA3NXAK/moc_smarthome_leds.cpp.d			\
file://yocto-gui-cmake_autogen/G4FKZC7HID/moc_smarthometemperature.cpp			\
file://yocto-gui-cmake_autogen/G4FKZC7HID/moc_smarthometemperature.cpp.d		\
file://yocto-gui-cmake_autogen/EWIEGA46WW/moc_mainwindow.cpp.d				\
file://yocto-gui-cmake_autogen/EWIEGA46WW/moc_mainwindow.cpp				\
file://yocto-gui-cmake_autogen/include/ui_smarthome_leds.h				\
file://yocto-gui-cmake_autogen/include/ui_mainwindow.h					\
file://yocto-gui-cmake_autogen/include/SmartHomeTemperature				\
file://yocto-gui-cmake_autogen/include/SmartHomeTemperature/ui_smarthometemperature.h	\
file://yocto-gui-cmake_autogen/include/ui_smarthometemperature.h			\
file://mainwindow.cpp							\
file://main.cpp								\
file://SmartHomeTemperature/Mail/Mail_reaction.h			\
file://SmartHomeTemperature/Mail/.qtcreator				\
file://SmartHomeTemperature/Mail/.qtcreator/project.json		\
file://SmartHomeTemperature/Mail/Mail_reaction.cpp			\
file://SmartHomeTemperature/Whatsapp/Whatsapp_reaction.h		\	
file://SmartHomeTemperature/Whatsapp/Whatsapp_reaction.cpp		\
file://SmartHomeTemperature/Whatsapp/.qtcreator/project.json		\
file://SmartHomeTemperature/WeatherStatus/WeatherStatus.h		\
file://SmartHomeTemperature/WeatherStatus/.qtcreator/project.json	\
file://SmartHomeTemperature/WeatherStatus/WeatherStatus.cpp		\
file://SmartHomeTemperature/Observer/Observer.h				\
file://SmartHomeTemperature/Observer/Observer.cpp			\
file://SmartHomeTemperature/HumadityTemperature_sensor/dht11_sensor.h	\
file://SmartHomeTemperature/HumadityTemperature_sensor/.qtcreator/project.json	\
file://SmartHomeTemperature/HumadityTemperature_sensor/dht11_sensor.cpp		\
file://SmartHomeTemperature/SmokeSensor/.qtcreator/project.json			\
file://SmartHomeTemperature/smarthometemperature.ui				\
file://SmartHomeTemperature/smarthometemperature.h				\
file://SmartHomeTemperature/LCD/LCD.cpp						\
file://SmartHomeTemperature/LCD/LCD.h						\
file://SmartHomeTemperature/LCD/.qtcreator/project.json				\
file://SmartHomeTemperature/Notifier/Notifier.h					\
file://SmartHomeTemperature/Notifier/.qtcreator/project.json			\
file://SmartHomeTemperature/Notifier/Notifier.cpp				\
file://SmartHomeTemperature/smarthometemperature.cpp				\
file://NetworkHandling/mqtt_client.h						\
file://NetworkHandling/mqtt_client.cpp						\
file://Makefile									\
"
# NOTE: unable to map the following CMake package dependencies: Qt QT
inherit cmake
inherit cmake_qt5

# Specify any options you want to pass to cmake using EXTRA_OECMAKE:
EXTRA_OECMAKE = ""

