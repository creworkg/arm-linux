#!/bin/bash

docker run --rm \
    -it \
    --name=armf \
    --net=host \
    -v /home/g/arm_ws:/home/arm/ws \
    -w /home/arm/ws \
    arm-linux-dev:jelly \
    bash