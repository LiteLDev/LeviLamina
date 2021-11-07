#pragma once

// LL Debug Mode
extern bool LoaderDebugMode;

// CrashLogger Path
#define DAEMON_PROCESS_PATH L"plugins\\LiteLoader\\CrashLogger_Daemon.exe"

// When comes with these plugins, disable builtin CrashLogger since they will cause crash
constexpr const char* NoCrashLogger[] = { "BDSNetRunner", "AntiCheats", "CrashLogger" };
