#!/usr/bin/bash
# Lay git up help
echo "Please enter commit message"
read msg
git add .
git commit -m $msg
git push
