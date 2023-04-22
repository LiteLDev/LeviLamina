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

#ifdef LLSE_BACKEND_PYTHON
#include "PythonHelper.h"
#endif
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

#ifdef LLSE_BACKEND_PYTHON
    // This fix is used for Python3.10's bug: 
    // The thread will freeze when creating a new engine while another thread is blocking to read stdin
    // Side effects: sys.stdin cannot be used after this patch.
    // More info to see: https://github.com/python/cpython/issues/83526
    //
    // Attention! When CPython is upgraded, this fix must be re-adapted or removed!!
    // 
    PythonHelper::FixPython310Stdin::patchPython310CreateStdio();
    
    PythonHelper::initPythonRuntime();
#endif

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