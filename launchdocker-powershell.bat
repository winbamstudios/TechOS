@echo off
echo Docker container launched
docker run --rm -it -v "${pwd}:/root/env" myos-buildenv
