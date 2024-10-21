#include "ll/core/CrashLogger.h"

#include <chrono>

#include "ll/api/Versions.h"
#include "ll/api/data/Version.h"
#include "ll/api/i18n/I18n.h"
#include "ll/api/io/FileSink.h"
#include "ll/api/io/FileUtils.h"
#include "ll/api/io/Logger.h"
#include "ll/api/io/LoggerRegistry.h"
#include "ll/api/io/PatternFormatter.h"
#include "ll/api/utils/ErrorUtils.h"
#include "ll/api/utils/StacktraceUtils.h"
#include "ll/api/utils/StringUtils.h"
#include "ll/api/utils/SystemUtils.h"
#include "ll/core/Config.h"
#include "ll/core/LeviLamina.h"
#include "ll/core/io/Output.h"

#include "pl/Config.h"

#include "windows.h"

#include "DbgHelp.h"

namespace ll::inline utils::error_utils {
Stacktrace stacktraceFromContext(optional_ref<_CONTEXT const> context, size_t skip = 0, size_t maxDepth = ~0ull);
}

namespace ll {
using namespace string_utils;

auto crashLoggerPtr = io::LoggerRegistry::getInstance().getOrCreate("CrashLogger");

class CrashLoggerNew {
    void* previous{};

public:
    CrashLoggerNew();
    ~CrashLoggerNew();
};

static std::unique_ptr<CrashLoggerNew> cln;


std::string toString(_CONTEXT const& c) {
    return fmt::format("RAX: 0x{:016X}  RBX: 0x{:016X}  RCX: 0x{:016X}\n", c.Rax, c.Rbx, c.Rcx)
         + fmt::format("RDX: 0x{:016X}  RSI: 0x{:016X}  RDI: 0x{:016X}\n", c.Rdx, c.Rsi, c.Rdi)
         + fmt::format("RBP: 0x{:016X}  RSP: 0x{:016X}  R8:  0x{:016X}\n", c.Rbp, c.Rsp, c.R8)
         + fmt::format("R9:  0x{:016X}  R10: 0x{:016X}  R11: 0x{:016X}\n", c.R9, c.R10, c.R11)
         + fmt::format("R12: 0x{:016X}  R13: 0x{:016X}  R14: 0x{:016X}\n", c.R12, c.R13, c.R14)
         + fmt::format("R15: 0x{:016X}\n", c.R15) + fmt::format("RIP: 0x{:016X}  EFLAGS: 0x{:08X}\n", c.Rip, c.EFlags)
         + fmt::format("DR0: 0x{:016X}  DR1: 0x{:016X}  DR2: 0x{:016X}\n", c.Dr0, c.Dr1, c.Dr2)
         + fmt::format("DR3: 0x{:016X}  DR6: 0x{:016X}  DR7: 0x{:016X}\n", c.Dr3, c.Dr6, c.Dr7)
         + fmt::format(
               "CS:  0x{:04X}  DS: 0x{:04X}  ES:  0x{:04X}  FS: 0x{:04X}  GS:  0x{:04X}  SS: 0x{:04X}",
               c.SegCs,
               c.SegDs,
               c.SegEs,
               c.SegFs,
               c.SegGs,
               c.SegSs
         );
}

void CrashLogger::init() {
    auto& config = getLeviConfig();

    if (!config.modules.crashLogger.enabled) {
        return;
    }
    if (IsDebuggerPresent()) {
        crashLoggerPtr->warn("Debugger detected, CrashLogger will not be enabled"_tr());
        return;
    }
    if (config.modules.crashLogger.useBuiltin) {
        cln = std::make_unique<CrashLoggerNew>();
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
        getSelfModIns()->getModDir() / sv2u8sv(config.modules.crashLogger.externalpath.value_or("CrashLogger.exe")),
        GetCurrentProcessId(),
        ll::getGameVersion().to_string()
    ));
    if (!CreateProcess(nullptr, cmd.data(), &sa, &sa, true, 0, nullptr, nullptr, &si, &pi)) {
        crashLoggerPtr->error("Couldn't Create CrashLogger Daemon Process"_tr());
        error_utils::printException(error_utils::getLastSystemError(), *crashLoggerPtr);
        return;
    }

    CloseHandle(pi.hProcess);
    CloseHandle(pi.hThread);

    crashLoggerPtr->info("CrashLogger enabled successfully"_tr());
    return;
}

static struct CrashInfo {
    HANDLE                                            process{};
    HANDLE                                            thread{};
    DWORD                                             processId{};
    DWORD                                             threadId{};
    std::string                                       date;
    std::shared_ptr<io::Logger>                       loggerPtr;
    io::Logger&                                       logger;
    std::filesystem::path                             path{};
    decltype(ll::getLeviConfig().modules.crashLogger) settings{};
    CrashInfo() : loggerPtr(io::LoggerRegistry::getInstance().getOrCreate("CrashLogger")), logger(*loggerPtr) {}
} crashInfo;

static void dumpSystemInfo() {
    crashInfo.logger.info("System Info:");
    crashInfo.logger.info("  |OS Version: {} {}", sys_utils::getSystemName(), []() -> std::string {
        RTL_OSVERSIONINFOW osVersionInfoW = [] {
            RTL_OSVERSIONINFOW osVersionInfoW{};
            HMODULE            hMod = ::GetModuleHandleW(L"ntdll.dll");
            if (hMod) {
                using RtlGetVersionPtr = uint(WINAPI*)(PRTL_OSVERSIONINFOW);
                auto fxPtr             = (RtlGetVersionPtr)::GetProcAddress(hMod, "RtlGetVersion");
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
            std::to_string(osVersionInfoW.dwMajorVersion) + '.' + std::to_string(osVersionInfoW.dwMinorVersion);
        if (osVersionInfoW.dwBuildNumber != 0) {
            osVersion += '.' + std::to_string(osVersionInfoW.dwBuildNumber);
        }
        if (osVersionInfoW.szCSDVersion[0] != 0) {
            osVersion += ' ' + wstr2str(osVersionInfoW.szCSDVersion);
        }
        return osVersion;
    }() + (sys_utils::isWine() ? " (wine)" : ""));
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
        file_utils::getVersion(ModuleName).value_or(data::Version{}).to_string()
    );
    return TRUE;
}

static bool genMiniDumpFile(PEXCEPTION_POINTERS e) {

    auto dumpFilePath = crashInfo.path / string_utils::str2u8str("minidump_" + crashInfo.date + ".dmp");

    std::error_code ec;
    if (auto c = std::filesystem::canonical(dumpFilePath, ec); ec.value() == 0) {
        dumpFilePath = c;
    } else {
        dumpFilePath = dumpFilePath.lexically_normal();
    }

    auto hDumpFile =
        CreateFileW(dumpFilePath.c_str(), GENERIC_WRITE, 0, nullptr, CREATE_ALWAYS, FILE_ATTRIBUTE_NORMAL, nullptr);
    if (hDumpFile == INVALID_HANDLE_VALUE || hDumpFile == nullptr) {
        throw error_utils::getLastSystemError();
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
        throw error_utils::getLastSystemError();
    }
    CloseHandle(hDumpFile);
    crashInfo.logger.info("MiniDump generated at {}", u8str2str(dumpFilePath.u8string()));
    return true;
}

static LONG unhandledExceptionFilter(_In_ struct _EXCEPTION_POINTERS* e) {
    try {
        crashInfo.date       = fmt::format("{:%Y-%m-%d_%H-%M-%S}", fmt::localtime(_time64(nullptr)));
        crashInfo.settings   = ll::getLeviConfig().modules.crashLogger;
        crashInfo.path       = file_utils::u8path(pl::pl_log_path) / u8"crash";
        auto formatter       = makePolymorphic<io::PatternFormatter>("{tm:.3%T.} [{lvl}] {msg}");
        formatter->styles[1] = {
            {
             {},
             {},
             fmt::fg(fmt::color::crimson),
             fmt::fg(fmt::color::light_blue),
             }
        };
        formatter->styles[3] = {
            {
             {},
             {},
             fmt::fg(fmt::color::light_green),
             fmt::fg(fmt::color::light_blue),
             }
        };
        crashInfo.logger.getSink(0)->setFormatter(std::move(formatter));
        crashInfo.logger.addSink(std::make_shared<io::FileSink>(
            crashInfo.path / ("trace_" + crashInfo.date + ".log"),
            makePolymorphic<io::PatternFormatter>("{tm:.3%F %T.} [{lvl}] {msg}", false)
        ));
        crashInfo.logger.setLevel(io::LogLevel::Trace);
        crashInfo.logger.setFlushLevel(io::LogLevel::Info);

        crashInfo.process   = GetCurrentProcess();
        crashInfo.thread    = GetCurrentThread();
        crashInfo.processId = GetCurrentProcessId();
        crashInfo.threadId  = GetCurrentThreadId();

        io::defaultOutput("\n");

        crashInfo.logger.info("Process Crashed! Generating Stacktrace and MiniDump...");
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
            auto str = error_utils::makeExceptionString(error_utils::createExceptionPtr(e->ExceptionRecord));
            for (auto& sv : string_utils::splitByPattern(str, "\n")) {
                crashInfo.logger.info("  |{}", sv);
            }
        } catch (...) {
            crashInfo.logger.info("unknown error");
        }
        crashInfo.logger.info("");
        crashInfo.logger.info("Registers:");
        try {
            auto str = toString(*e->ContextRecord);
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
            throw error_utils::getLastSystemError();
        }
    } catch (...) {
        crashInfo.logger.error("!!! Error in CrashLogger !!!");
        ll::error_utils::printCurrentException(crashInfo.logger);
        crashInfo.logger.error("");
        crashInfo.logger.error("\n{}", ll::stacktrace_utils::toString(Stacktrace::current()));
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
    AddVectoredExceptionHandler(0, uncatchableExceptionHandler);

    previous = SetUnhandledExceptionFilter(unhandledExceptionFilter);
    crashLoggerPtr->info("CrashLogger enabled successfully"_tr());
}

CrashLoggerNew::~CrashLoggerNew() { SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)previous); }
} // namespace ll
