#!/usr/bin/env bash

make

if [ "${?}" == "0" ] ; then
	echo -e	"\n\n--------------------------\n\n"
	./build/bridb
fi
