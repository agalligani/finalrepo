#!/bin/bash

PATCHES=`find . \( -name '*.diff' -o -name '*.patch' \) -print`
for PATCH in ${PATCHES}
do
	echo ${PATCH#./}
done
