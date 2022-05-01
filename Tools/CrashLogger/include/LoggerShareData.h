#pragma once

#define MACHINE_TYPE IMAGE_FILE_MACHINE_AMD64
#define DAEMON_PROCESS_PATH L"plugins\\CrashLogger\\CrashLogger_Daemon.exe"
#define STACKTRACE_OUTPUT_PATH_PREFIX "logs\\Crash\\StackTrace_"
#define DUMP_OUTPUT_PATH_PREFIX "logs\\Crash\\CrashDump_"

#define CRT_EXCEPTION_CODE 0xE06D7363
#define CRT_RAISE_CODE CRT_EXCEPTION_CODE
#define SLEEP_BEFORE_ABORT 3