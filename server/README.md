# Server component to run 443 MHz enabled devices

Install requirements:

```sudo apt install python3-pip```

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

## Manually start server with `screen`

```
sudo apt install screen
screen -S server
screen -r server
./run.sh
press and hold CTRL key, A key, and D key
```

## To start server in case of a reboot

Edit `/etc/rc.local` and add the following:

```
/home/pi/pi443mhz/server/run.sh
```
