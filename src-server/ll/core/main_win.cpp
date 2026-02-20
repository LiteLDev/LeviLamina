#include "ll/core/LeviLamina.h"

#include <chrono>
#include <csignal>
#include <cstdio>
#include <cwchar>
#include <filesystem>
#include <string>
#include <vector>

#include "fmt/core.h"

#include "ll/api/Versions.h"
#include "ll/api/command/CommandRegistrar.h"
#include "ll/api/i18n/I18n.h"
#include "ll/api/memory/Hook.h"
#include "ll/api/service/GamingStatus.h"
#include "ll/api/service/PlayerInfo.h"
#include "ll/api/utils/ErrorUtils.h"
#include "ll/api/utils/HashUtils.h"
#include "ll/api/utils/SystemUtils.h"

#include "ll/core/Config.h"
#include "ll/core/CrashLogger.h"
#include "ll/core/Version.h"
#include "ll/core/command/BuiltinCommands.h"
#include "ll/core/io/Output.h"
#include "ll/core/mod/ModRegistrar.h"
#include "ll/core/tweak/VulnerabilityFixes.h"

#include "mc/scripting/ServerScriptManager.h"
#include "mc/server/DedicatedServer.h"
#include "mc/server/ServerInstance.h"
#include "mc/server/commands/StopCommand.h"

#include "mc/deps/core/file/Path.h"
#include "mc/deps/core/resource/PackOrigin.h"
#include "mc/deps/core/resource/PackType.h"
#include "mc/resources/CompositePackSource.h"
#include "mc/resources/DirectoryPackSource.h"
#include "mc/resources/IResourcePackRepository.h"
#include "mc/resources/Pack.h"
#include "mc/resources/PackInstance.h"
#include "mc/resources/PackManifest.h"
#include "mc/resources/PackSettingsFactory.h"
#include "mc/resources/PackSourceFactory.h"
#include "mc/resources/RepositorySources.h"
#include "mc/resources/ResourcePack.h"
#include "mc/resources/ResourcePackStack.h"
#include "mc/scripting/ServerScriptManager.h"
#include "mc/server/ServerInstance.h"
#include "mc/server/module/VanillaGameModuleServer.h"
#include <mc/events/IMinecraftEventing.h>
#include <mc/util/BaseGameVersion.h>
#include <mc/world/events/EventResult.h>
#include <mc/world/level/block/BlockType.h>

#include "windows.h"

#include "tlhelp32.h"

#include "pl/Config.h"

#if defined(LL_DEBUG)
#include "ll/api/utils/StacktraceUtils.h"
#endif

namespace ll {

using namespace hash_utils;

namespace fs = std::filesystem;
std::chrono::steady_clock::time_point severStartBeginTime;
std::chrono::steady_clock::time_point severStartEndTime;

void checkOtherBdsInstance() {
    auto currentPath = sys_utils::getModulePath(nullptr).value();
    // and pid is not current process
    std::vector<DWORD> pids;
    ::PROCESSENTRY32W  pe32;
    pe32.dwSize         = sizeof(PROCESSENTRY32W);
    HANDLE hProcessSnap = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
    if (hProcessSnap == INVALID_HANDLE_VALUE) {
        return;
    }
    if (::Process32FirstW(hProcessSnap, &pe32)) {
        std::wstring currentExe = currentPath.filename().wstring();
        do {
            if (pe32.th32ProcessID != GetCurrentProcessId()
                && (wcscmp(pe32.szExeFile, L"bedrock_server.exe") == 0
                    || wcscmp(pe32.szExeFile, L"bedrock_server_mod.exe") == 0 || pe32.szExeFile == currentExe)) {
                pids.push_back(pe32.th32ProcessID);
            }
        } while (::Process32NextW(hProcessSnap, &pe32));
    }
    CloseHandle(hProcessSnap);
    // Get the BDS process paths
    for (auto& pid : pids) {
        // Open process handle
        auto handle = OpenProcess(PROCESS_QUERY_INFORMATION | PROCESS_VM_READ | PROCESS_TERMINATE, false, pid);
        if (handle) {
            // Get the full path of the process
            auto path = sys_utils::getModulePath(nullptr, handle).value();
            // Compare the path
            if (path == currentPath) {
                getLogger().error("Detected the existence of another BDS process with the same path!"_tr());
                getLogger().error("This may cause the network port and the level to be occupied"_tr());
                while (true) {
                    getLogger().error(
                        "Do you want to terminate the process with PID {0}?  (y=Yes, n=No, e=Exit)"_tr(pid)
                    );
                    char input;
                    rewind(stdin);
                    input = static_cast<char>(getchar());
                    rewind(stdin);
                    if (input == 'n' || input == 'N') {
                        break;
                    }
                    if (input == 'y' || input == 'Y') {
                        TerminateProcess(handle, 1);
                        break;
                    }
                    if (input == 'e' || input == 'E') {
                        std::terminate();
                    }
                }
            }
            CloseHandle(handle);
        }
    }
}

void checkProtocolVersion() {
    auto currentProtocol = getNetworkProtocolVersion();
    if (TARGET_BDS_PROTOCOL_VERSION != currentProtocol) {
        getLogger().warn(
            "Protocol version not match, target version: {0}, current version: {1}"_tr(
                TARGET_BDS_PROTOCOL_VERSION,
                currentProtocol
            )
        );
        getLogger().warn(
            "This will most likely crash the server, please use the LeviLamina that matches the BDS version!"_tr()
        );
    }
}

BOOL WINAPI ConsoleExitHandler(DWORD CEvent) {
    switch (CEvent) {
    case CTRL_C_EVENT:
    case CTRL_CLOSE_EVENT:
    case CTRL_SHUTDOWN_EVENT: {
        if (StopCommand::mServer()) {
            StopCommand::mServer()->requestServerShutdown();
        } else {
            std::terminate();
        }
        return true;
    }
    default:
        break;
    }
    return false;
}

void unixSignalHandler(int signum) {
    switch (signum) {
    case SIGINT:
    case SIGTERM: {
        if (StopCommand::mServer()) StopCommand::mServer()->requestServerShutdown();
        else std::terminate();
        break;
    }
    default:
        break;
    }
}

void setGamingStatus(GamingStatus);

namespace i18n {
std::string& defaultLocaleCode();
}

void leviLaminaMain() {
    if (auto res = i18n::getInstance().load(getSelfModIns()->getLangDir()); !res) {
        getLogger().error("i18n load failed");
        res.error().log(getLogger());
    }

    auto& config = getLeviConfig();

    // Update default language
    if (config.language != "system") {
        i18n::defaultLocaleCode() = config.language;
    }

    checkProtocolVersion();

    if (config.targeted.checkRunningBDS) {
        checkOtherBdsInstance();
    }
    if (config.targeted.playerInfo.alwaysLaunch) {
        service::PlayerInfo::getInstance();
    }
    // Register Exit Event Handler.
    SetConsoleCtrlHandler(ConsoleExitHandler, true);
    signal(SIGTERM, unixSignalHandler);
    signal(SIGINT, unixSignalHandler);

    printWelcomeMsg();

#ifdef LL_DEBUG
    getLogger().warn("LeviLamina is running in DEBUG mode!"_tr());
#endif

    command::registerCommands();

    mod::ModRegistrar::getInstance().loadAllMods();

    if (config.modules.vulnerabilityFixes) {
        vulnerability_fixes::enableFixes();
    }
}

LL_AUTO_STATIC_HOOK(LeviLaminaMainHook, HookPriority::High, "main"_sym, int, int argc, char* argv[]) {

#if defined(LL_DEBUG)
    static stacktrace_utils::SymbolLoader symbols{};
#endif
    setGamingStatus(GamingStatus::Default);
    severStartBeginTime = std::chrono::steady_clock::now();
    for (int i = 0; i < argc; ++i) {
        switch (doHash(argv[i])) {
        case "-v"_h:
        case "--version"_h:
            io::defaultOutput(fmt::format("{}", getGameVersion().to_string()));
            return 0;
        case "--protocolversion"_h:
            io::defaultOutput(fmt::format("{}", getNetworkProtocolVersion()));
            return 0;
        default:
            break;
        }
    }
    setGamingStatus(GamingStatus::Starting);
    try {
        leviLaminaMain();
    } catch (...) {
        error_utils::printCurrentException(getLogger());
    }
    auto res = origin(argc, argv);
    setGamingStatus(GamingStatus::Default);
    return res;
}

LL_AUTO_TYPE_INSTANCE_HOOK(
    EnableAllModsHook,
    HookPriority::High,
    ServerScriptManager,
    &ServerScriptManager::$onServerThreadStarted,
    EventResult,
    ::ServerInstance& ins
) {
    auto result = origin(ins);

    CrashLogger::init();

    mod::ModRegistrar::getInstance().enableAllMods();

    setGamingStatus(GamingStatus::Running);
    return result;
}
LL_AUTO_TYPE_INSTANCE_HOOK(
    DisableAllModsHook,
    HookPriority::Low,
    ServerInstance,
    &ServerInstance::leaveGameSync,
    void
) {
    setGamingStatus(GamingStatus::Stopping);

    mod::ModRegistrar::getInstance().disableAllMods();

    command::CommandRegistrar::getInstance(false).clear();

    origin();
}

LL_AUTO_TYPE_INSTANCE_HOOK(
    InitPacksHook,
    HookPriority::High,
    RepositorySources,
    &RepositorySources::initializePackSource,
    void,
    ::PackSourceFactory& packSourceFactory
) {
    origin(packSourceFactory);
    auto& resourcePackSourceMain =
        packSourceFactory
            .createDirectoryPackSource(getSelfModIns()->getResourceDir(), PackType::Resources, PackOrigin::User, false);
    mPackSource->mPackSources->push_back(&resourcePackSourceMain);
    auto& behaviorPackSourceMain =
        packSourceFactory
            .createDirectoryPackSource(getSelfModIns()->getBehaviorDir(), PackType::Behavior, PackOrigin::User, false);
    mPackSource->mPackSources->push_back(&behaviorPackSourceMain);
    for (auto& mod : mod::ModManagerRegistry::getInstance().mods()) {
        auto& resourcePackSource =
            packSourceFactory
                .createDirectoryPackSource(mod.getResourceDir(), PackType::Resources, PackOrigin::User, false);
        mPackSource->mPackSources->push_back(&resourcePackSource);
        auto& behaviorPackSource =
            packSourceFactory
                .createDirectoryPackSource(mod.getBehaviorDir(), PackType::Behavior, PackOrigin::User, false);
        mPackSource->mPackSources->push_back(&behaviorPackSource);
    }
}

LL_AUTO_TYPE_INSTANCE_HOOK(
    InitPacksHook3,
    HookPriority::High,
    VanillaGameModuleServer,
    &VanillaGameModuleServer::$initializeBehaviorStack,
    void,
    ::Experiments const&                                            experiments,
    ::Bedrock::NotNullNonOwnerPtr<::IResourcePackRepository> const& repo,
    ::ResourcePackStack&                                            stack,
    ::BaseGameVersion const&                                        baseGameVersion,
    bool                                                            includeEditorPacks
) {
    repo->forEachPack([&](const ::ResourcePack& pack) {
        if (pack.mPack->mManifest->mPackType == PackType::Behavior) {
            auto packPath = pack.mPack->mManifest->mLocation->mPath->value;
            if (packPath.find(pl::pl_mods_path) != std::string::npos) {
                auto& identity = pack.mPack->mManifest->mIdentity;
                auto  newPack  = repo->getResourcePackForPackId(identity);
                if (newPack) {
                    PackSettingsFactory& factory  = repo->getPackSettingsFactory();
                    auto&                manifest = newPack->mPack->mManifest;
                    PackSettings*        settings = factory.getPackSettings(*manifest, {});
                    stack.add({newPack, -1, false, settings}, repo, false);
                }
            }
        }
    });
    origin(experiments, repo, stack, baseGameVersion, includeEditorPacks);
}

} // namespace ll
