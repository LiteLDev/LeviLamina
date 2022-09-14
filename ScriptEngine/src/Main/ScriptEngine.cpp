#include <liteloader/Config.h>
#include "../API/APIHelp.h"
#include "../API/EventAPI.h"
#include "../Engine/GlobalShareData.h"
#include "../Engine/EngineOwnData.h"
#include "../Engine/LocalShareData.h"
#include "../Engine/RemoteCall.h"
#include "../Engine/MessageSystem.h"
#include "../Engine/EngineManager.h"
#include "SafeGuardRecord.h"
#include <windows.h>
#include <string>
#include <exception>
#include <thread>
#include <chrono>
#include <memory>
#include <filesystem>
#include "Configs.h"
#include <llapi/LoggerAPI.h>
#include <liteloader/Version.h>
#include <llapi/utils/FileHelper.h>
#include "../Tools/JsonHelper.h"
#include "EconomicSystem.h"
using namespace std;

// Global vars
::Logger logger("LiteLoader");


extern void LoadDepends();
extern void LoadMain();
extern void BindAPIs(ScriptEngine* engine);
extern void LoadDebugEngine();


void entry() {
    // Enable thread SEH protection
    if (!LL::isDebugMode())
        _set_se_translator(seh_exception::TranslateSEHtoCE);

    // Register myself
    LL::registerPlugin(LLSE_LOADER_NAME, LLSE_LOADER_DESCRIPTION, LITELOADER_VERSION,
                       {{"GitHub", "github.com/LiteLDev/LiteLoaderBDS"}});

    // Load i18n files
    Translation::loadFromImpl(GetCurrentModule(), LL::getLoaderHandle());

    // Init global share data
    InitLocalShareData();
    InitGlobalShareData();
    InitSafeGuardRecord();

    // Welcome
    if (localShareData->isFirstInstance) {
        logger.info("ScriptEngine initializing...");
    }

    // Init builtin economy system
    if (LL::globalConfig.enableEconomyCore) {
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