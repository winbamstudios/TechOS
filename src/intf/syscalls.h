#pragma once

#include <stdint.h>
#include <stddef.h>

enum {
    KILL_PROCESS = 0,
    START_PROCESS = 1,
    GET_PROCESSES = 2,
    GET_FILE = 3,
    GET_FOLDER = 4,
    MANAGE_FILE = 5,
    MANAGE_FOLDER = 6
};

void RunSysCall(uint8_t syscallid, char* arguments);
