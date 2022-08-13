#include <LiteLoader/Main/Config.h>
#include <API/APIHelp.h>
#include <API/EventAPI.h>
#include <Engine/GlobalShareData.h>
#include <Engine/EngineOwnData.h>
#include <Engine/LocalShareData.h>
#include <Engine/RemoteCall.h>
#include <Engine/MessageSystem.h>
#include <Engine/EngineManager.h>
#include <SafeGuardRecord.h>
#include <windows.h>
#include <string>
#include <exception>
#include <thread>
#include <chrono>
#include <memory>
#include <filesystem>
#include <Configs.h>
#include <LoggerAPI.h>
#include <LiteLoader/Main/Version.h>
#include <Utils/FileHelper.h>
#include <Tools/JsonHelper.h>
#include <EconomicSystem.h>
using namespace std;

// Global vars
fifo_json globalConfig;
::Logger logger("LiteLoader");


extern void LoadDepends();
extern void LoadMain();
extern void BindAPIs(ScriptEngine* engine);
extern void LoadDebugEngine();
extern void InitDynamicCallSystem();


void LoadConfigFile() {
    try {
        auto content = ReadAllFile(LITELOADER_CONFIG_FILE);
        if (content) {
            globalConfig = fifo_json::parse(*content, nullptr, true, true);
            return;
        }
    } catch (const nlohmann::json::exception& e) {
        logger.error("Fail to parse config file <{}>!", LITELOADER_CONFIG_FILE);
        logger.error("{}", TextEncoding::toUTF8(e.what()));
    } catch (...) {
        logger.error("Fail to load config file <{}>!", LITELOADER_CONFIG_FILE);
    }
    globalConfig = fifo_json::object();
}


void entry() {
    // Enable thread SEH protection
    _set_se_translator(seh_exception::TranslateSEHtoCE);

    // Register myself
    LL::registerPlugin(LLSE_LOADER_NAME, LLSE_LOADER_DESCRIPTION, LITELOADER_VERSION,
                       {{"GitHub", "github.com/LiteLDev/LiteLoaderBDS"}});

    // Load config file
    LoadConfigFile();

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

    // Init dynamic call system
    InitDynamicCallSystem();

    // Pre-load depending libs
    LoadDepends();

    // Load plugins
    LoadMain();

    // Register real-time debug
    LoadDebugEngine();

    // Register basic event listeners
    InitBasicEventListeners();

    #ifndef LLSE_BACKEND_NODEJS
    // Init message system
    InitMessageSystem();
    #endif
}