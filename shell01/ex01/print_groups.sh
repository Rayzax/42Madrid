#!/usr/bin/env sh

groups "${FT_USER:=$USER}" | tr " " "," | tr -d "\n"
