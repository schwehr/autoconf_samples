#!/bin/bash

if [ ! -d m4 ]; then
  echo mkdir
  mkdir m4
fi

autoreconf --force --install -I m4  
