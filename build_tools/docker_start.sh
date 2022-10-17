#!/bin/bash

docker run --rm \
    -it \
    --name=armf \
    --net=host \
    -v /home/g/arm_ws:/home/arm/ws \
    -v /media/sf_IMX6ULL:/home/arm/imx6ull \
    -w /home/arm/ws \
    arm-linux-dev:jelly \
    bash