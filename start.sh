#!/usr/bin/env bash
./stop.sh
./gwsocket --addr=127.0.0.1 -p 8080 --pipein=./send --pipeout=./recv &
sudo /usr/local/nginx/sbin/nginx -c $(pwd)/nginx.conf.default
chibi-scheme -r main.scm &
google-chrome-stable 127.0.0.1 &
disown

