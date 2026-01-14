#include "ll/core/LeviLamina.h"

#include "ll/api/Versions.h"
#include "ll/api/command/CommandRegistrar.h"
#include "ll/api/i18n/I18n.h"
#include "ll/api/memory/Hook.h"
#include "ll/api/service/GamingStatus.h"
#include "ll/api/utils/ErrorUtils.h"

#include "ll/core/Config.h"
#include "ll/core/CrashLogger.h"
#include "ll/core/command/BuiltinCommands.h"
#include "ll/core/gui/ImGuiHooks.h"
#include "ll/core/mod/ModRegistrar.h"

#include "mc/client/game/MinecraftGame.h"
#include "mc/client/gui/screens/controllers/StartMenuScreenController.h"
#include "mc/deps/core/file/Path.h"
#include "mc/deps/core/resource/PackOrigin.h"
#include "mc/deps/core/resource/PackType.h"
#include "mc/deps/core/string/StringHash.h"
#include "mc/module/VanillaGameModuleClient.h"
#include "mc/resources/CompositePackSource.h"
#include "mc/resources/DirectoryPackSource.h"
#include "mc/resources/IResourcePackRepository.h"
#include "mc/resources/Pack.h"
#include "mc/resources/PackInstance.h"
#include "mc/resources/PackManifest.h"
#include "mc/resources/PackSettingsFactory.h"
#include "mc/resources/PackSourceFactory.h"
#include "mc/resources/RepositorySourceOptions.h"
#include "mc/resources/RepositorySources.h"
#include "mc/resources/ResourcePack.h"
#include "mc/resources/ResourcePackRepository.h"
#include "mc/resources/ResourcePackStack.h"
#include "mc/scripting/ServerScriptManager.h"
#include "mc/server/ServerInstance.h"
#include "mc/server/module/VanillaGameModuleServer.h"
#include "mc/world/level/Level.h"

#include "pl/Config.h"

#include "windows.h"

namespace ll {

void setGamingStatus(GamingStatus);

namespace i18n {
std::string& defaultLocaleCode();
}

void leviLaminaMain() {
    // gui::init();

    if (auto res = i18n::getInstance().load(getSelfModIns()->getLangDir()); !res) {
        getLogger().error("i18n load failed");
        res.error().log(getLogger());
    }

    auto& config = getLeviConfig();

    if (config.language != "system") {
        i18n::defaultLocaleCode() = config.language;
    }

    printWelcomeMsg();

    command::registerCommands();

    mod::ModRegistrar::getInstance().loadAllMods();
}

// namespace service::bedrock {
// extern std::atomic<ServerInstance*> serverInstance;
// }
LL_AUTO_TYPE_INSTANCE_HOOK(
    EnableAllModsHook,
    HookPriority::High,
    ServerScriptManager,
    &ServerScriptManager::$onServerThreadStarted,
    EventResult,
    ::ServerInstance& ins
) {
    getLogger().debug("sendServerInitializeEnd");

    auto result = origin(ins);
    // service::bedrock::serverInstance = std::addressof(ins);

    CrashLogger::init();

    mod::ModRegistrar::getInstance().enableAllMods();

    setGamingStatus(GamingStatus::Running);
    return result;
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
    auto& resourcePackSourceMain = packSourceFactory.createDirectoryPackSource(
        ll::getSelfModIns()->getResourceDir(),
        PackType::Resources,
        PackOrigin::User,
        false
    );
    mPackSource->mPackSources->push_back(&resourcePackSourceMain);
    auto& behaviorPackSourceMain = packSourceFactory.createDirectoryPackSource(
        ll::getSelfModIns()->getBehaviorDir(),
        PackType::Behavior,
        PackOrigin::User,
        false
    );
    mPackSource->mPackSources->push_back(&behaviorPackSourceMain);
    for (auto& mod : ll::mod::ModManagerRegistry::getInstance().mods()) {
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
    InitPacksHook2,
    HookPriority::High,
    VanillaGameModuleClient,
    &VanillaGameModuleClient::$initializeResourceStack,
    void,
    ::Experiments const*                                            experiments,
    ::Bedrock::NotNullNonOwnerPtr<::IResourcePackRepository> const& repo,
    ::ResourcePackStack&                                            stack,
    ::BaseGameVersion const&                                        baseGameVersion,
    ::GameModuleClient::ResourceLoadingPhase                        loadingPhase,
    bool                                                            includeEditorPacks
) {
    repo->forEachPack([&](const ::ResourcePack& pack) {
        if (pack.mPack->mManifest->mPackType == PackType::Resources) {
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
    origin(experiments, repo, stack, baseGameVersion, loadingPhase, includeEditorPacks);
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
                auto  pack     = repo->getResourcePackForPackId(identity);
                if (pack) {
                    PackSettingsFactory& factory  = repo->getPackSettingsFactory();
                    auto&                manifest = pack->mPack->mManifest;
                    PackSettings*        settings = factory.getPackSettings(*manifest, {});
                    stack.add({pack, -1, false, settings}, repo, false);
                }
            }
        }
    });
    origin(experiments, repo, stack, baseGameVersion, includeEditorPacks);
}


LL_AUTO_TYPE_INSTANCE_HOOK(
    DisableAllModsHook,
    HookPriority::Low,
    ServerInstance,
    &ServerInstance::startLeaveGame,
    void
) {
    getLogger().debug("ServerInstance::startLeaveGame");

    mod::ModRegistrar::getInstance().disableAllMods();

    command::CommandRegistrar::getInstance(false).clear();
    // service::bedrock::serverInstance = nullptr;

    origin();
}

LL_AUTO_TYPE_INSTANCE_HOOK(
    PatchVersionBinding,
    HookPriority::Normal,
    StartMenuScreenController,
    &StartMenuScreenController::_registerBindings,
    void
) {
    bindString(
        StringHash("#version"),
        []() -> auto {
            auto gameVer   = getGameVersion();
            auto loaderVer = getLoaderVersion();
            return fmt::format(
                "v{}.{}.{}/LL-{}.{}.{}",
                gameVer.major,
                gameVer.minor,
                gameVer.patch,
                loaderVer.major,
                loaderVer.minor,
                loaderVer.patch
            );
        },
        []() -> auto { return true; }
    );
    origin();
}
} // namespace ll

BOOL APIENTRY DllMain(HMODULE /*hModule*/, DWORD ulReasonForCall, LPVOID /*lpReserved*/) {
    using namespace ll;
    if (ulReasonForCall != DLL_PROCESS_ATTACH) return TRUE;

    setGamingStatus(GamingStatus::Default);
    try {
        leviLaminaMain();
    } catch (...) {
        error_utils::printCurrentException(getLogger());
    }
    setGamingStatus(GamingStatus::Starting);
    return TRUE;
}
