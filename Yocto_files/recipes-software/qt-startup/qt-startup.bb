SUMMARY = "QT application staratup script in linux"
LICENSE = "CLOSED"

SRC_URI = "file://qt-init-bash.sh \
file://my_var.sh \ 
		"

S = "${WORKDIR}"

inherit update-rc.d 



# stopp in remote, shutdown, and hult

INITSCRIPT_PARAMS = "start 21 1 2 3 4 5 . stop 0 1 6 ." 


do_install() {
	install -d ${D}${sysconfdir}/init.d
	install -m 0755 ${WORKDIR}/qt-init-bash.sh ${D}${sysconfdir}/init.d/QT-startup-bash
	install -d ${D}${sysconfdir}/my_variables
	install -m 0755 ${WORKDIR}/my_var.sh ${D}${sysconfdir}/my_variables/var.sh

}

INITSCRIPT_NAME = "QT-startup-bash"

