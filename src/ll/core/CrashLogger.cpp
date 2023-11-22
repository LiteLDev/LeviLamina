#include "ll/core/CrashLogger.h"

#include <chrono>

#include "ll/api/Logger.h"
#include "ll/api/ServerInfo.h"
#include "ll/api/base/ErrorInfo.h"
#include "ll/api/base/Version.h"
#include "ll/api/utils/StacktraceUtils.h"
#include "ll/api/utils/StringUtils.h"
#include "ll/api/utils/WinUtils.h"
#include "ll/core/Config.h"

#include "windows.h"

#if _HAS_CXX23
#include "DbgHelp.h"
#pragma comment(lib, "DbgHelp.lib")
#endif

namespace ll {
using namespace i18n_literals;
using namespace utils;
using namespace string_utils;
Logger crashLogger("CrashLogger");

bool CrashLogger::startCrashLoggerProcess() {
    if (IsDebuggerPresent()) {
        crashLogger.info("ll.crashLogger.existsingDebuggerDetected"_tr);
        return true;
    }
    if (win_utils::isWine()) {
        crashLogger.info("ll.crashLogger.wineDetected"_tr);
        return true;
    }

    STARTUPINFO si;
    ZeroMemory(&si, sizeof(si));
    si.cb = sizeof(si);
    PROCESS_INFORMATION pi;

    SECURITY_ATTRIBUTES sa;
    sa.bInheritHandle       = true;
    sa.lpSecurityDescriptor = nullptr;
    sa.nLength              = sizeof(SECURITY_ATTRIBUTES);

    std::wstring cmd = string_utils::str2wstr(fmt::format(
        "{} {} \"{}\"",
        globalConfig.modules.crashLogger.path,
        GetCurrentProcessId(),
        ll::getBdsVersion().to_string()
    ));
    if (!CreateProcess(nullptr, cmd.data(), &sa, &sa, true, 0, nullptr, nullptr, &si, &pi)) {
        crashLogger.error("ll.crashLogger.error.cannotCreateDaemonProcess"_tr);
        error_info::printException(error_info::getWinLastError(), crashLogger);
        return false;
    }

    CloseHandle(pi.hProcess);
    CloseHandle(pi.hThread);
    return true;
}

void CrashLogger::initCrashLogger(bool enableCrashLogger) {

    if (!enableCrashLogger) {
        crashLogger.warn("ll.crashLogger.warning.crashLoggerDisabled.1"_tr);
        crashLogger.warn("ll.crashLogger.warning.crashLoggerDisabled.2"_tr);
        crashLogger.warn("ll.crashLogger.warning.crashLoggerDisabled.3"_tr);
        crashLogger.warn("");
        crashLogger.warn("ll.crashLogger.warning.crashLoggerDisabled.4"_tr);
        return;
    }
    // Start CrashLogger
    if (!startCrashLoggerProcess()) {
        crashLogger.warn("ll.crashLogger.init.fail.msg"_tr);
        crashLogger.warn("ll.crashLogger.init.fail.tip"_tr);
    } else {
        crashLogger.info("ll.crashLogger.init.success.msg"_tr);
    }
}
#if _HAS_CXX23

static struct CrashInfo {
    HANDLE                                         process{};
    HANDLE                                         thread{};
    DWORD                                          processId{};
    DWORD                                          threadId{};
    std::string                                    date;
    Logger                                         logger{"CrashLogger"};
    std::filesystem::path                          path{};
    decltype(ll::globalConfig.modules.crashLogger) settings{};
} crashInfo;

static void dumpSystemInfo() {
    crashInfo.logger.info("System Info:");
    crashInfo.logger.info("  |OS Version: {}", []() -> std::string {
        RTL_OSVERSIONINFOW osVersionInfoW = [] {
            RTL_OSVERSIONINFOW osVersionInfoW = {0};
            typedef uint(WINAPI * RtlGetVersionPtr)(PRTL_OSVERSIONINFOW);
            HMODULE hMod = ::GetModuleHandleW(L"ntdll.dll");
            if (hMod) {
                auto fxPtr = (RtlGetVersionPtr)::GetProcAddress(hMod, "RtlGetVersion");
                if (fxPtr != nullptr) {
                    osVersionInfoW.dwOSVersionInfoSize = sizeof(osVersionInfoW);
                    if (0 == fxPtr(&osVersionInfoW)) {
                        return osVersionInfoW;
                    }
                }
            }
            return osVersionInfoW;
        }();
        if (osVersionInfoW.dwMajorVersion == 0) {
            return "Unknown";
        }
        std::string osVersion =
            std::to_string(osVersionInfoW.dwMajorVersion) + "." + std::to_string(osVersionInfoW.dwMinorVersion);
        if (osVersionInfoW.dwBuildNumber != 0) {
            osVersion += "." + std::to_string(osVersionInfoW.dwBuildNumber);
        }
        if (osVersionInfoW.szCSDVersion[0] != 0) {
            osVersion += " " + wstr2str(osVersionInfoW.szCSDVersion);
        }
        return osVersion;
    }());
    crashInfo.logger.info("  |Is Wine: {}", win_utils::isWine());
    crashInfo.logger.info("  |CPU: {}", []() -> std::string {
        int cpuInfo[4] = {-1};
        __cpuid(cpuInfo, (int)0x80000000);
        uint nExIds = cpuInfo[0];

        char cpuBrandString[0x40] = {0};
        for (uint i = 0x80000000; i <= nExIds; ++i) {
            __cpuid(cpuInfo, (int)i);
            if (i == 0x80000002) {
                memcpy(cpuBrandString, cpuInfo, sizeof(cpuInfo));
            } else if (i == 0x80000003) {
                memcpy(cpuBrandString + 16, cpuInfo, sizeof(cpuInfo));
            } else if (i == 0x80000004) {
                memcpy(cpuBrandString + 32, cpuInfo, sizeof(cpuInfo));
            }
        }
        return cpuBrandString;
    }());
    crashInfo.logger.info("  |CPU Counts: {}", std::thread::hardware_concurrency());
    crashInfo.logger.info("  |CPU Arch: {}", [] {
        SYSTEM_INFO systemInfo;
        GetSystemInfo(&systemInfo);
        switch (systemInfo.wProcessorArchitecture) {
        case PROCESSOR_ARCHITECTURE_AMD64:
            return "x64";
        case PROCESSOR_ARCHITECTURE_ARM:
            return "ARM";
        case PROCESSOR_ARCHITECTURE_ARM64:
            return "ARM64";
        case PROCESSOR_ARCHITECTURE_IA64:
            return "IA64";
        case PROCESSOR_ARCHITECTURE_INTEL:
            return "x86";
        case PROCESSOR_ARCHITECTURE_UNKNOWN:
        default:
            return "Unknown";
        }
    }());
    crashInfo.logger.info(
        "  |RAM: {:.2f} GB",
        (double)([] {
            MEMORYSTATUSEX memoryStatus;
            memoryStatus.dwLength = sizeof(memoryStatus);
            GlobalMemoryStatusEx(&memoryStatus);
            return memoryStatus.ullTotalPhys;
        }()) / 1024
            / 1024 / 1024
    );
    crashInfo.logger.info(
        "  |LocalTime: {}",
        fmt::format(
            "{0:%F %T} {1}(UTC{0:%z})",
            fmt::localtime(_time64(nullptr)),
            tou8str(fmt::format("{:%Z}", fmt::localtime(_time64(nullptr))))
        )
    );
}
static void dumpStacktrace(_CONTEXT const& c) {
    crashInfo.logger.info("Stacktrace:");
    auto str = stacktrace_utils::toString(error_info::stacktraceFromCurrExc(c));
    for (auto& sv : splitByPattern(str, "\n")) {
        crashInfo.logger.info("  |{}", sv);
    }
}

static BOOL CALLBACK dumpModules(
    PCTSTR  ModuleName,
    DWORD64 ModuleBase,
    ULONG   ModuleSize,
    PVOID /*UserContext*/
) {
    crashInfo.logger.info(
        "  |0x{:0>12X} [0x{:0>8X}] {}<{}>",
        ModuleBase,
        ModuleSize,
        wstr2str(wcsrchr(ModuleName, TEXT('\\')) + 1),
        file_utils::getVersion(ModuleName).to_string()
    );
    return TRUE;
}

static bool genMiniDumpFile(PEXCEPTION_POINTERS e) {

    auto dumpFilePath = crashInfo.path / (crashInfo.settings.dumpPrefix + crashInfo.date + ".dmp");

    auto hDumpFile =
        CreateFileW(dumpFilePath.c_str(), GENERIC_WRITE, 0, nullptr, CREATE_ALWAYS, FILE_ATTRIBUTE_NORMAL, nullptr);
    if (hDumpFile == INVALID_HANDLE_VALUE || hDumpFile == nullptr) {
        throw error_info::getWinLastError();
    }

    MINIDUMP_EXCEPTION_INFORMATION dumpInfo;
    ZeroMemory(&dumpInfo, sizeof(MINIDUMP_EXCEPTION_INFORMATION));

    dumpInfo.ExceptionPointers = e;
    dumpInfo.ThreadId          = crashInfo.threadId;
    dumpInfo.ClientPointers    = FALSE;

    if (!MiniDumpWriteDump(
            crashInfo.process,
            crashInfo.processId,
            hDumpFile,
            MiniDumpNormal,
            &dumpInfo,
            nullptr,
            nullptr
        )) {
        CloseHandle(hDumpFile);
        throw error_info::getWinLastError();
    }
    CloseHandle(hDumpFile);
    std::error_code ec;
    dumpFilePath = canonical(dumpFilePath, ec);
    crashInfo.logger.info("MiniDump generated at {}", u8str2str(dumpFilePath.u8string()));
    return true;
}

static LONG unhandledExceptionFilter(_In_ struct _EXCEPTION_POINTERS* e) {
    try {

        crashInfo.date                      = fmt::format("{:%Y-%m-%d_%H-%M-%S}", fmt::localtime(_time64(nullptr)));
        crashInfo.logger.playerLevel        = -2;
        crashInfo.logger.fileLevel          = INT32_MAX;
        crashInfo.logger.consoleLevel       = INT32_MAX;
        crashInfo.logger.info.consoleFormat = {"{0} [{1}] {3}", "{:%T}", "{}", "", "{}"};
        crashInfo.logger.info.style         = {
            fmt::fg(fmt::color::light_blue),
            fmt::fg(fmt::color::light_green),
            {},
            {},
        };
        crashInfo.settings = ll::globalConfig.modules.crashLogger;
        crashInfo.path     = file_utils::u8path(crashInfo.settings.logPath);
        crashInfo.logger.setFile(
            u8str2str((crashInfo.path / (crashInfo.settings.logPrefix + crashInfo.date + ".log")).u8string())
        );

        crashInfo.logger.info.fileFormat = {"{0} [{1}] {3}", "{:%F %T}", "{}", "", "{}"};
        crashInfo.logger.error           = crashInfo.logger.info;
        crashInfo.process                = GetCurrentProcess();
        crashInfo.thread                 = GetCurrentThread();
        crashInfo.processId              = GetCurrentProcessId();
        crashInfo.threadId               = GetCurrentThreadId();

        fmt::print("\n");

        crashInfo.logger.info("BDS Crashed! Generating Stacktrace and MiniDump...");
        try {
            genMiniDumpFile(e);
        } catch (...) {
            crashInfo.logger.error("!!! Error In GenMiniDumpFile !!!");
            ll::error_info::printCurrentException(crashInfo.logger);
        }
        stacktrace_utils::SymbolLoader symbol{};

        crashInfo.logger.info("");
        dumpSystemInfo();
        crashInfo.logger.info("");

        crashInfo.logger.info("Exception:");
        {
            auto str = error_info::makeExceptionString(error_info::createExceptionPtr(*e->ExceptionRecord));
            for (auto& sv : string_utils::splitByPattern(str, "\n")) {
                crashInfo.logger.info("  |{}", sv);
            }
        }
        crashInfo.logger.info("");
        crashInfo.logger.info("Registers:");
        {
            auto str = stacktrace_utils::toString(*e->ContextRecord);
            for (auto& sv : splitByPattern(str, "\n")) {
                crashInfo.logger.info("  |{}", sv);
            }
        }
        crashInfo.logger.info("");
        dumpStacktrace(*e->ContextRecord);
        crashInfo.logger.info("");
        crashInfo.logger.info("Modules:");
        if (!EnumerateLoadedModulesW64(crashInfo.process, dumpModules, nullptr)) {
            throw error_info::getWinLastError();
        }
    } catch (...) {
        crashInfo.logger.error("!!! Error In CrashLogger !!!");
        ll::error_info::printCurrentException(crashInfo.logger);
        crashInfo.logger.error("");
        crashInfo.logger.error("\n{}", ll::utils::stacktrace_utils::toString(std::stacktrace::current()));
    }
    std::exit((int)e->ExceptionRecord->ExceptionCode);
}

CrashLoggerNew::CrashLoggerNew() {
    if (IsDebuggerPresent()) {
        crashLogger.warn("ll.crashLogger.init.fail.msg"_tr);
    } else {
        previous = SetUnhandledExceptionFilter(unhandledExceptionFilter);
        crashLogger.info("ll.crashLogger.init.success.msg"_tr);
    }
}

CrashLoggerNew::~CrashLoggerNew() { SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)previous); }
#endif
} // namespace ll