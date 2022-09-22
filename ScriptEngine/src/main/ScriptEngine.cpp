#include <liteloader/Config.h>
#include "api/APIHelp.h"
#include "api/EventAPI.h"
#include "engine/GlobalShareData.h"
#include "engine/EngineOwnData.h"
#include "engine/LocalShareData.h"
#include "engine/RemoteCall.h"
#include "engine/MessageSystem.h"
#include "engine/EngineManager.h"
#include "main/SafeGuardRecord.h"
#include <windows.h>
#include <string>
#include <exception>
#include <thread>
#include <chrono>
#include <memory>
#include <filesystem>
#include "main/Configs.h"
#include <llapi/LoggerAPI.h>
#include <liteloader/Version.h>
#include <llapi/utils/FileHelper.h>
#include "utils/JsonHelper.h"
#include "main/EconomicSystem.h"
using namespace std;

// Global vars
::Logger logger("LiteLoader");


extern void LoadDepends();
extern void LoadMain();
extern void BindAPIs(ScriptEngine* engine);
extern void LoadDebugEngine();


void entry() {
    // Enable thread SEH protection
    if (!ll::isDebugMode())
        _set_se_translator(seh_exception::TranslateSEHtoCE);

    // Register myself
    ll::registerPlugin(LLSE_LOADER_NAME, LLSE_LOADER_DESCRIPTION, LITELOADER_VERSION,
                       {{"GitHub", "github.com/LiteLDev/LiteLoaderBDS"}});

    // Load i18n files
    Translation::loadFromImpl(GetCurrentModule(), ll::getLoaderHandle());

    // Init global share data
    InitLocalShareData();
    InitGlobalShareData();
    InitSafeGuardRecord();

    // Welcome
    if (localShareData->isFirstInstance) {
        logger.info("ScriptEngine initializing...");
    }

    // Init builtin economy system
    if (ll::globalConfig.enableEconomyCore) {
        EconomySystem::init();
    }

    // Pre-load depending libs
    LoadDepends();

    // Load plugins
    LoadMain();

    // Register real-time debug
    LoadDebugEngine();

    // Register basic event listeners
    InitBasicEventListeners();

    // Init message system
    InitMessageSystem();
}