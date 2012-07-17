#!/bin/bash

TARGET_DIRS=`find . \( -name '*.diff' -o -name '*.patch' \) -exec dirname {} \; | sort -u`
for TARGET_DIR in ${TARGET_DIRS}
do
	PATCHES=`find "${TARGET_DIR}" \( -name '*.diff' -o -name '*.patch' \) -exec basename {} \;`
	for PATCH in ${PATCHES}
	do
		patch -N -r /dev/null -d "../${TARGET_DIR}" -p 1 < "${TARGET_DIR}/${PATCH}"
	done
done
