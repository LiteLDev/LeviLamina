#include "ll/core/LeviLamina.h"

#include "ll/api/Versions.h"
#include "ll/api/command/CommandRegistrar.h"
#include "ll/api/event/EventBus.h"
#include "ll/api/i18n/I18n.h"
#include "ll/api/memory/Hook.h"
#include "ll/api/service/GamingStatus.h"
#include "ll/api/utils/ErrorUtils.h"

#include "ll/core/Config.h"
#include "ll/core/CrashLogger.h"
#include "ll/core/command/BuiltinCommands.h"
#include "ll/core/gui/ImGuiHooks.h"
#include "ll/core/mod/ModRegistrar.h"

#include "mc/server/ServerInstance.h"
#include "mc/world/events/ServerInstanceEventCoordinator.h"
#include "mc/world/level/Level.h"

#include "mc/deps/core/string/StringHash.h"
#include "mc/gui/screens/controllers/StartMenuScreenController.h"

#include "windows.h"

namespace ll {
void leviLaminaMain() {
    error_utils::initExceptionTranslator();

    gui::init();

    if (auto res = ::ll::i18n::getInstance().load(getSelfModIns()->getLangDir()); !res) {
        getLogger().error("i18n load failed");
        res.error().log(getLogger());
    }

    auto& config = getLeviConfig();

    if (config.language != "system") {
        ::ll::i18n::defaultLocaleCode() = config.language;
    }
    CrashLogger::init();

    printWelcomeMsg();

    command::registerCommands();

    mod::ModRegistrar::getInstance().loadAllMods();
}

namespace service::bedrock {
extern std::atomic<ServerInstance*> serverInstance;
}

LL_AUTO_TYPE_INSTANCE_HOOK(
    EnableAllModsHook,
    HookPriority::High,
    ServerInstanceEventCoordinator,
    &ServerInstanceEventCoordinator::sendServerInitializeEnd,
    void,
    ::ServerInstance& ins
) {
    getLogger().debug("sendServerInitializeEnd");

    origin(ins);
    service::bedrock::serverInstance = std::addressof(ins);

    mod::ModRegistrar::getInstance().enableAllMods();

    setGamingStatus(GamingStatus::Running);
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

    command::CommandRegistrar::getInstance().clear();

    service::bedrock::serverInstance = nullptr;

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
    if (ulReasonForCall == DLL_PROCESS_DETACH) {
        mod::ModRegistrar::getInstance().releaseAllMods();
    }
    if (ulReasonForCall != DLL_PROCESS_ATTACH) return TRUE;

    ::ll::setGamingStatus(::ll::GamingStatus::Default);
    try {
        ::ll::leviLaminaMain();
    } catch (...) {
        ::ll::error_utils::printCurrentException(::ll::getLogger());
    }
    ::ll::setGamingStatus(::ll::GamingStatus::Starting);
    return TRUE;
}
