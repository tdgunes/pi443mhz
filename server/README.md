# Server component to run 443 MHz enabled devices

1. Install the flask by:

```pip3 install -r requirements.txt```

2. Edit run script if you want to change the port of the server (presumably 80).

3. Give permission to the run script:

```
chmod +x run.sh
```

4. Run the server

```
./run.sh
```

## Add for the server to be run in case of a reboot

Edit `/etc/rc.local` and add the following:

```
/home/pi/pi443mhz/server/run.sh
```
