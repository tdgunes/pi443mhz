import flask
import logging
import os

app = flask.Flask(__name__)
app.logger.setLevel(logging.DEBUG)

DEVICES = [0, 0, 0]

EXECUTABLE = """printf "{device_id}\\n{status}\\n" | /home/pi/pi443mhz/build/pi443mhz"""


@app.route('/<device_id>/on/', methods=['GET'])
def on(device_id):
    cmd = EXECUTABLE.format(device_id=device_id, status="1")
    DEVICES[int(device_id)] = 1
    print(cmd)
    os.system(cmd)
    return "Done"
    
@app.route('/<device_id>/off/', methods=['GET'])
def off(device_id):
    cmd = EXECUTABLE.format(device_id=device_id, status="0")
    DEVICES[int(device_id)] = 0
    print(cmd)
    os.system(cmd)
    return "Done"

@app.route('/<device_id>/status/', methods=['GET'])
def status(device_id):
    return str(DEVICES[int(device_id)])

