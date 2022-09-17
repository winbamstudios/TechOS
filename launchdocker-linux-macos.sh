#!/bin/sh

echo "Docker started"
docker run --rm -it -v "$(pwd)":/root/env myos-buildenv
