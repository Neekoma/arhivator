#pragma once

#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>
#include<string.h>

#define bool uint8_t
#define true 1
#define false 0

#define FILE_NAME 0x01FF
#define FILE_START 0xFFC1

bool save(char* filename, uint8_t count, char** files);
void* load(char* filename);