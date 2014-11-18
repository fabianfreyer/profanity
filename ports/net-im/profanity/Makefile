# Created by: Fabian Freyer <fabian.freyer@physik.tu-berlin.de>
# $FreeBSD$

PORTNAME=      profanity
PORTVERSION=   0.4.5
CATEGORIES=    net-im
MASTER_SITES=  GH

MAINTAINER=    nobody@example.org
COMMENT=       A console based XMPP client

LICENSE=       GPLv3

BUILD_DEPENDS= pkgconf:${PORTSDIR}/devel/pkgconf
LIB_DEPENDS=   libstrophe.so:${PORTSDIR}/net-im/libstrophe

USE_GITHUB=    yes
GH_ACCOUNT=    boothj5
GH_PROJECT=    profanity
GH_COMMIT=     8120c9e

DIST_SUBDIR=   ${PORTNAME}

CONFIGURE_ARGS=--with-pkgconfigdir=${PREFIX}/libdata/pkgconfig
AUTOMAKE_ARGS= --add-missing
USE_AUTOTOOLS= libtoolize autoconf aclocal autoheader automake
GNU_CONFIGURE= yes

OPTIONS_DEFINE=OTR NOTIFICATIONS
OPTIONS_DEFAULT=OTR

OTR_DESC=      Build with OTR support
OTR_LIB_DEPENDS=libotr.so:${PORTSDIR}/security/libotr

NOTIFICATIONS_DESC=Build with Desktop notification support
NOTIFICATIONS_LIB_DEPENDS=libnotify.so:${PORTSDIR}/devel/libnotify

.include <bsd.port.mk>
