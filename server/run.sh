#!/usr/bin/env bash

export FLASK_DEBUG="0"
export FLASK_APP="./server.py"
export FLASK_RUN_PORT="8000"

python3 -m flask run --host=0.0.0.0
