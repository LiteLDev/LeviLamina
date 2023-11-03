#include "ll/api/ServerInfo.h"
#include "ll/api/memory/Hook.h"
#include "ll/core/LeviLamina.h"
#include "ll/core/Version.h"

#include "mc/deps/core/common/debug/LogDetails.h"

#include "ll/api/io/FunctionStream.h"
#include "ll/api/io/StreamRedirector.h"

#include "ll/core/Config.h"
#include "mc/deps/core/common/bedrock/Interface.h"

// disable auto compaction log
LL_AUTO_STATIC_HOOK(
    DiagnosticsLogHook,
    HookPriority::Normal,
    Bedrock::Diagnostics::Interface::log,
    void,
    ::BedrockLog::LogCategory category,
    std::bitset<3>            channelMask,
    ::BedrockLog::LogRule     rule,
    ::LogAreaID               area,
    uint                      priority,
    char const*               func,
    int                       line,
    char const*               pszFormat,
    char*                     va
) {
    if (ll::globalConfig.modules.tweak.disableAutoCompactionLog
        && std::string_view{func}.starts_with("DBStorage::_scheduleNextAutoCompaction")) {
        return;
    }
    origin(category, channelMask, rule, area, priority, func, line, pszFormat, va);
}

ll::Logger serverLogger("Server");

static std::unordered_map<uint, decltype(serverLogger.debug)&> loggerMap = {
    {1u, serverLogger.debug},
    {2u, serverLogger.info },
    {4u, serverLogger.warn },
    {8u, serverLogger.error}
};

static bool serverStarted = false;

void tryModifyServerStartInfo(std::string& s) {
    if (s != "Server started.") {
        if (s.starts_with("Version: ")) {
            s += fmt::format(
                "(ProtocolVersion {}) with {}",
                ll::getServerProtocolVersion(),
                fmt::format(
                    fg(fmt::color::light_sky_blue) | fmt::emphasis::bold,
                    "LeviLamina {}",
                    ll::getLoaderVersion().to_string()
                )
            );
        }
        return;
    }
    serverStarted = true;

    ll::severStartEndTime = std::chrono::steady_clock::now();

    s = fmt::format(
        R"(Server started in ({:.1f}s)! For help, type "help" or "?")",
        std::chrono::duration_cast<std::chrono::duration<double>>(ll::severStartEndTime - ll::severStartBeginTime)
            .count()
    );
}

MCAPI void BedrockLogOut(uint priority, char const* pszFormat, ...);

LL_AUTO_STATIC_HOOK(
    BedrockLogOutHook,
    HookPriority::Normal,
    BedrockLogOut,
    void,
    uint        priority,
    char const* pszFormat,
    ...
) {
    bool        success = false;
    std::string buffer;
    va_list     va;
    va_start(va, pszFormat);
    auto bufferCount = _vscprintf(pszFormat, va);
    if (bufferCount >= 0) { success = true; }
    if (success && bufferCount > 0) {
        buffer = std::string(bufferCount, ' ');
        vsprintf(buffer.data(), pszFormat, va);
    }
    va_end(va);

    if (!success) {
        serverLogger.fatal("!!! Unable to format log output message !!!");
        return;
    }

    std::istringstream iss(buffer);
    std::string        line;

    bool knownPriority = loggerMap.contains(priority);

    auto& logger = knownPriority ? loggerMap.at(priority) : serverLogger.warn;

    while (std::getline(iss, line)) {
        if (line.ends_with('\n')) { line.pop_back(); }

        if (!serverStarted) tryModifyServerStartInfo(line);

        if (!knownPriority) { line = fmt::format("<LVL|{}> {}", priority, line); }
        logger(line);
    }
}

// Block BDS from adding LOG metadata

LL_AUTO_TYPED_INSTANCE_HOOK(
    AppendLogEntryMetadataHook,
    HookPriority::Normal,
    ::BedrockLog::LogDetails,
    &::BedrockLog::LogDetails::_appendLogEntryMetadata,
    void,
    std::string&,
    std::string, // NOLINT
    ::LogAreaID,
    uint,
    std::string, // NOLINT
    int,
    int
) {}

// Redirect C++ output

LL_AUTO_STATIC_HOOK(CppOutputRedirectHook, HookPriority::High, "main", int, int argc, char* argv[]) {

    ll::Logger           coutlogger("std::cout");
    ll::io::ofuncstream  coutfs{[&](std::string_view s) {
        if (s.ends_with('\n')) { s.remove_suffix(1); }
        if (s.empty()) { return; }
        coutlogger.warn(s);
    }};
    ll::StreamRedirector coutsr(std::cout, coutfs.rdbuf());

    ll::Logger           cloglogger("std::clog");
    ll::io::ofuncstream  clogfs{[&](std::string_view s) {
        if (s.ends_with('\n')) { s.remove_suffix(1); }
        if (s.empty()) { return; }
        cloglogger.error(s);
    }};
    ll::StreamRedirector clogsr(std::clog, clogfs.rdbuf());

    ll::Logger           cerrlogger("std::cerr");
    ll::io::ofuncstream  cerrfs{[&](std::string_view s) {
        if (s.ends_with('\n')) { s.remove_suffix(1); }
        if (s.empty()) { return; }
        cerrlogger.fatal(s);
    }};
    ll::StreamRedirector cerrsr(std::cerr, cerrfs.rdbuf());

    return origin(argc, argv);
}

// Redirect C output

ll::Logger stdoutlogger("stdout");
ll::Logger stderrlogger("stderr");

enum class PrintFileType {
    Stdout,
    Stderr,
    Custom,
};

LL_AUTO_STATIC_HOOK(
    StdioPrintRedirectHook,
    HookPriority::Highest,
    __stdio_common_vfprintf,
    int,
    uint64      options,
    FILE*       stream,
    char const* format,
    _locale_t   locale,
    va_list     argList
) {
    PrintFileType type = PrintFileType::Custom;

    if (stream == stdout) {
        type = PrintFileType::Stdout;
    } else if (stream == stderr) {
        type = PrintFileType::Stderr;
    } else {
        return origin(options, stream, format, locale, argList);
    }
    auto bufferCount = _vscprintf_l(format, locale, argList);

    if (bufferCount <= 0) { return 0; }

    auto buffer = std::string(bufferCount, ' ');

    _vsprintf_l(buffer.data(), format, locale, argList);

    if (buffer.ends_with('\n')) { buffer.pop_back(); }

    if (type == PrintFileType::Stdout) {
        stdoutlogger.warn(buffer);
    } else {
        stderrlogger.fatal(buffer);
    }

    return bufferCount;
}

LL_AUTO_STATIC_HOOK(
    StdioPrintSRedirectHook,
    HookPriority::Highest,
    __stdio_common_vfprintf_s,
    int,
    uint64      options,
    FILE*       stream,
    char const* format,
    _locale_t   locale,
    va_list     argList
) {
    if (stream != stdout && stream != stderr) { return origin(options, stream, format, locale, argList); }
    return __stdio_common_vfprintf(options, stream, format, locale, argList);
}

LL_AUTO_STATIC_HOOK(
    StdioPrintPRedirectHook,
    HookPriority::Highest,
    __stdio_common_vfprintf_p,
    int,
    uint64      options,
    FILE*       stream,
    char const* format,
    _locale_t   locale,
    va_list     argList
) {
    if (stream != stdout && stream != stderr) { return origin(options, stream, format, locale, argList); }
    auto bufferCount = _vscprintf_p_l(format, locale, argList);
    if (bufferCount <= 0) { return 0; }
    auto buffer = std::string(bufferCount, ' ');
    _vsprintf_p_l(buffer.data(), bufferCount, format, locale, argList);
    fprintf(stream, buffer.c_str());
    return bufferCount;
}

LL_AUTO_STATIC_HOOK(StdioPutsRedirectHook, HookPriority::Highest, puts, int, char const* str) {
    printf(str);
    return 0;
}

LL_AUTO_STATIC_HOOK(StdioFPutsRedirectHook, HookPriority::Highest, fputs, int, char const* str, FILE* stream) {
    if (stream != stdout && stream != stderr) { return origin(str, stream); }
    fprintf(stream, str);
    return 0;
}

LL_AUTO_STATIC_HOOK(StdioPutcharRedirectHook, HookPriority::Highest, putchar, int, int c) {
    std::clog << (char)c;
    return 0;
}

LL_AUTO_STATIC_HOOK(StdioPutcRedirectHook, HookPriority::Highest, putc, int, int c, FILE* stream) {
    if (stream != stdout && stream != stderr) { return origin(c, stream); }
    std::clog << (char)c;
    return 0;
}

LL_AUTO_STATIC_HOOK(StdioFPutcRedirectHook, HookPriority::Highest, fputc, int, int c, FILE* stream) {
    if (stream != stdout && stream != stderr) { return origin(c, stream); }
    std::clog << (char)c;
    return 0;
}

LL_AUTO_STATIC_HOOK(
    StdioFWriteRedirectHook,
    HookPriority::Highest,
    fwrite,
    size_t,
    void const* buffer,
    size_t      elementSize,
    size_t      elementCount,
    FILE*       stream
) {
    if (stream != stdout && stream != stderr) { return origin(buffer, elementSize, elementCount, stream); }
    auto sbuffer = std::string((char const*)buffer, elementCount * elementSize);
    fprintf(stream, sbuffer.c_str());
    return 0;
}
