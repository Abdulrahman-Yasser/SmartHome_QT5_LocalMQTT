SUMMARY = "This is to test QT program"
DESCRIPTION = "Just fr testinng qt purpose"

LICENSE = "CLOSED"

DEPENDS += " qtbase wayland "

SRC_URI = "file://myQTApp.cpp \
	   file://myQTApp.pro \
	   "

S = "${WORKDIR}"


do_install:append() {
	install -d ${D}/usr/bin
	bbwarn "the ld flags are ${LDFLAGS}"
	install -m 0755 myQTApp ${D}/usr/bin
}

FILES_${PN} += "${bindir}/myQTApp"

inherit qmake5

