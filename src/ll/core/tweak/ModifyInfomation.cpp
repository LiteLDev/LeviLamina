#include "ll/api/ServerInfo.h"
#include "ll/api/memory/Hook.h"
#include "ll/core/LeviLamina.h"
#include "ll/core/Version.h"

#include "mc/deps/core/common/debug/LogDetails.h"

#include "ll/core/tweak/OutputRedirector.h"

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
                    LL_FILE_VERSION_STRING
                )
            );
        }
        return;
    }
    serverStarted = true;

    ll::SeverStartEndTime = std::chrono::steady_clock::now();

    s = std::format(
        R"(Server started in ({:.1f}s)! For help, type "help" or "?")",
        std::chrono::duration_cast<std::chrono::duration<double>>(ll::SeverStartEndTime - ll::SeverStartBeginTime)
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
    constexpr const int BUFFER_SIZE = 4096; // from ida
    char                Buffer[BUFFER_SIZE];
    va_list             va;
    va_start(va, pszFormat);
    auto v1 = vsprintf(Buffer, pszFormat, va);
    va_end(va);
    if (v1 < 0 || v1 >= BUFFER_SIZE) return origin(priority, pszFormat, va);

    std::istringstream iss(Buffer);
    std::string        line;

    bool knownPriority = loggerMap.contains(priority);

    auto& logger = knownPriority ? loggerMap.at(priority) : serverLogger.warn;

    while (std::getline(iss, line)) {
        if (!line.empty() && line.back() == '\n') { line.pop_back(); }
        if (!serverStarted) tryModifyServerStartInfo(line);
        if (!knownPriority) { line = std::format("<LVL|{}> {}", priority, line); }
        logger(line);
    }
}

LL_AUTO_STATIC_HOOK(CppOutputRedirectHook, HookPriority::High, "main", int, int argc, char* argv[]) {

    ll::Logger coutlogger("std::cout");
    ll::Logger cerrlogger("std::cerr");

    ll::redirect::ofuncstream      coutfs{[&](std::string_view s) {
        if (s.ends_with("\n")) { s.remove_suffix(1); }
        if (s.empty()) { return; }
        coutlogger.warn(s);
    }};
    ll::redirect::ofuncstream      cerrfs{[&](std::string_view s) {
        if (s.ends_with("\n")) { s.remove_suffix(1); }
        if (s.empty()) { return; }
        cerrlogger.error(s);
    }};
    ll::redirect::StreamRedirector coutsr(std::cout, coutfs.rdbuf());
    ll::redirect::StreamRedirector cerrsr(std::cerr, cerrfs.rdbuf());

    return origin(argc, argv);
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
