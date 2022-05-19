ssh -i /home/ab/.ssh/LightsailDefaultKey-us-east-1.pem ubuntu@44.203.64.72


sudo ./gwsocket --addr=44.203.64.72 -p 8080 --pipein=./send --pipeout=./recv &
sudo nginx



js - ws = new WebSocket("ws://44.203.64.72:80/ws")



So you need to tell your linux to allow processes to bind to the non-local address. Just add the following line into /etc/sysctl.conf file:

# allow processes to bind to the non-local address
# (necessary for apache/nginx in Amazon EC2)
net.ipv4.ip_nonlocal_bind = 1
and then reload your sysctl.conf by:

$ sysctl -p /etc/sysctl.conf

which will be fine on reboots.

nginx -c $(pwd)/nginx.conf.default

sudo pkill -f nginx & wait $!
