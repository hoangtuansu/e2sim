/*
 *
 * Copyright 2019 AT&T Intellectual Property
 * Copyright 2019 Nokia
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */

#ifndef E2SIM_DEFS_H
#define E2SIM_DEFS_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

#define VERSION             "1.2.0"      //May 2019
#define DEFAULT_SCTP_IP     "127.0.0.1"
#define X2AP_PPID           (452984832) //27 = 1b, PPID = 1b000000(hex) -> 452984832(dec)
#define X2AP_SCTP_PORT      36421
#define RIC_SCTP_SRC_PORT   36422
#define MAX_SCTP_BUFFER     10000
#define WORKDIR_ENV         "E2SIM_DIR" //environment variable

char* time_stamp(void);

// #define LOG_I(...) {printf("[%s]", time_stamp()); printf(__VA_ARGS__); printf("\n");}
// #define LOG_E(...) {printf("[%s]", time_stamp()); printf(__VA_ARGS__); printf("\n");}
// #define LOG_D(...) {printf("[%s]", time_stamp()); printf(__VA_ARGS__); printf("\n");}

#define LOG_I(format, ...) \
    do { \
        const char *file = __FILE__; \
        const char *fileName = strrchr(file, '/'); \
        if (fileName != NULL) { \
            fileName++; \
        } \
        else { \
            fileName = file; \
        } \
        fprintf(stderr, "[%s:%d] [INFO] ", fileName, __LINE__); \
        fprintf(stderr, format, ##__VA_ARGS__); \
        fprintf(stderr, "\n"); \
    } while (0);

#define LOG_D(format, ...) \
    do { \
        const char *file = __FILE__; \
        const char *fileName = strrchr(file, '/'); \
        if (fileName != NULL) { \
            fileName++; \
        } \
        else { \
            fileName = file; \
        } \
        fprintf(stderr, "[%s:%d] [DEBUG] ", fileName, __LINE__); \
        fprintf(stderr, format, ##__VA_ARGS__); \
        fprintf(stderr, "\n"); \
    } while (0);

#define LOG_E(format, ...) \
    do { \
        const char *file = __FILE__; \
        const char *fileName = strrchr(file, '/'); \
        if (fileName != NULL) { \
            fileName++; \
        } \
        else { \
            fileName = file; \
        } \
        fprintf(stderr, "[%s:%d] [ERROR] ", fileName, __LINE__); \
        fprintf(stderr, format, ##__VA_ARGS__); \
        fprintf(stderr, "\n"); \
    } while (0);

typedef struct SCTP_DATA {
  unsigned char *data;
  int           len;
} sctp_data_t;

typedef struct {
  unsigned char buffer[MAX_SCTP_BUFFER];
  int           len;
} sctp_buffer_t;

typedef struct {
  char* server_ip;
  int   server_port;
  //... extend as needed
} options_t;

options_t read_input_options(int argc, char *argv[]);

#endif
