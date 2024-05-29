#include "ll/core/CrashLogger.h"

#include <chrono>

#include "ll/api/Logger.h"
#include "ll/api/data/Version.h"
#include "ll/api/i18n/I18n.h"
#include "ll/api/service/ServerInfo.h"
#include "ll/api/utils/ErrorUtils.h"
#include "ll/api/utils/StacktraceUtils.h"
#include "ll/api/utils/StringUtils.h"
#include "ll/api/utils/WinUtils.h"
#include "ll/core/Config.h"

#include <windows.h>

#if _HAS_CXX23
#include "DbgHelp.h"
#pragma comment(lib, "DbgHelp.lib")
#endif

namespace ll {
using namespace i18n_literals;
using namespace utils;
using namespace string_utils;
Logger crashLogger("CrashLogger");

void CrashLogger::initCrashLogger() {

    if (IsDebuggerPresent()) {
        crashLogger.warn("Debugger detected, CrashLogger will not be enabled"_tr());
        return;
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
        globalConfig.modules.crashLogger.externalPath,
        GetCurrentProcessId(),
        ll::getBdsVersion().to_string()
    ));
    if (!CreateProcess(nullptr, cmd.data(), &sa, &sa, true, 0, nullptr, nullptr, &si, &pi)) {
        crashLogger.error("Couldn't Create CrashLogger Daemon Process"_tr());
        error_utils::printException(crashLogger, error_utils::getWinLastError());
        return;
    }

    CloseHandle(pi.hProcess);
    CloseHandle(pi.hThread);

    crashLogger.info("CrashLogger enabled successfully"_tr());
    return;
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
    crashInfo.logger.info("  |OS Version: {} {}", win_utils::getSystemName(), []() -> std::string {
        RTL_OSVERSIONINFOW osVersionInfoW = [] {
            RTL_OSVERSIONINFOW osVersionInfoW{};
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
    }() + (win_utils::isWine() ? " (wine)" : ""));
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
    crashInfo.logger.info("  |LocalTime: {}", fmt::format("{0:%F %T} (UTC{0:%z})", fmt::localtime(_time64(nullptr))));
}
static void dumpStacktrace(_CONTEXT const& c) {
    try {
        crashInfo.logger.info("Stacktrace:");
        auto str = stacktrace_utils::toString(error_utils::stacktraceFromContext(c));
        for (auto& sv : splitByPattern(str, "\n")) {
            crashInfo.logger.info("  |{}", sv);
        }
    } catch (...) {}
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

    auto dumpFilePath =
        crashInfo.path / string_utils::str2u8str(crashInfo.settings.dumpPrefix + crashInfo.date + ".dmp");

    auto hDumpFile =
        CreateFileW(dumpFilePath.c_str(), GENERIC_WRITE, 0, nullptr, CREATE_ALWAYS, FILE_ATTRIBUTE_NORMAL, nullptr);
    if (hDumpFile == INVALID_HANDLE_VALUE || hDumpFile == nullptr) {
        throw error_utils::getWinLastError();
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
        throw error_utils::getWinLastError();
    }
    CloseHandle(hDumpFile);
    std::error_code ec;
    dumpFilePath = canonical(dumpFilePath, ec);
    crashInfo.logger.info("MiniDump generated at {}", u8str2str(dumpFilePath.u8string()));
    return true;
}

static LONG unhandledExceptionFilter(_In_ struct _EXCEPTION_POINTERS* e) {
    auto lock = Logger::lock();
    try {
        crashInfo.date                      = fmt::format("{:%Y-%m-%d_%H-%M-%S}", fmt::localtime(_time64(nullptr)));
        crashInfo.logger.playerLevel        = -2;
        crashInfo.logger.fileLevel          = INT32_MAX;
        crashInfo.logger.consoleLevel       = INT32_MAX;
        crashInfo.logger.info.consoleFormat = {"{0} [{1}] {3}", "{:%T}.{:0>3}", "{}", "", "{}"};
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
        crashInfo.logger.ofs.value() << std::unitbuf;

        crashInfo.logger.info.fileFormat = {"{0} [{1}] {3}", "{:%F %T}.{:0>3}", "{}", "", "{}"};
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
            ll::error_utils::printCurrentException(crashInfo.logger);
        }
        stacktrace_utils::SymbolLoader symbol{};

        crashInfo.logger.info("");
        dumpSystemInfo();
        crashInfo.logger.info("");

        crashInfo.logger.info("Exception:");
        try {
            auto str = error_utils::makeExceptionString(error_utils::createExceptionPtr(*e->ExceptionRecord));
            for (auto& sv : string_utils::splitByPattern(str, "\n")) {
                crashInfo.logger.info("  |{}", sv);
            }
        } catch (...) {
            crashInfo.logger.info("unknown error");
        }
        crashInfo.logger.info("");
        crashInfo.logger.info("Registers:");
        try {
            auto str = stacktrace_utils::toString(*e->ContextRecord);
            for (auto& sv : splitByPattern(str, "\n")) {
                crashInfo.logger.info("  |{}", sv);
            }
        } catch (...) {
            crashInfo.logger.info("unknown error");
        }
        crashInfo.logger.info("");
        dumpStacktrace(*e->ContextRecord);
        crashInfo.logger.info("");
        crashInfo.logger.info("Modules:");
        if (!EnumerateLoadedModulesW64(crashInfo.process, dumpModules, nullptr)) {
            throw error_utils::getWinLastError();
        }
    } catch (...) {
        crashInfo.logger.error("!!! Error in CrashLogger !!!");
        ll::error_utils::printCurrentException(crashInfo.logger);
        crashInfo.logger.error("");
        crashInfo.logger.error("\n{}", ll::stacktrace_utils::toString(std::stacktrace::current()));
    }
    std::exit((int)e->ExceptionRecord->ExceptionCode);
}

static LONG uncatchableExceptionHandler(_In_ struct _EXCEPTION_POINTERS* e) {
    static std::atomic_bool onceFlag{false};
    auto const&             code = e->ExceptionRecord->ExceptionCode;
    if (code == STATUS_HEAP_CORRUPTION || code == STATUS_STACK_BUFFER_OVERRUN
        // need to add all can't catch status code
    ) {
        if (!onceFlag) {
            onceFlag = true;
            unhandledExceptionFilter(e);
        }
    }
    return EXCEPTION_CONTINUE_SEARCH;
}

CrashLoggerNew::CrashLoggerNew() {
    if (IsDebuggerPresent()) {
        crashLogger.warn("Debugger detected, CrashLogger will not be enabled"_tr());
    } else {
        AddVectoredExceptionHandler(0, uncatchableExceptionHandler);

        previous = SetUnhandledExceptionFilter(unhandledExceptionFilter);
        crashLogger.info("CrashLogger enabled successfully"_tr());
    }
}

CrashLoggerNew::~CrashLoggerNew() { SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)previous); }
#endif
} // namespace ll
