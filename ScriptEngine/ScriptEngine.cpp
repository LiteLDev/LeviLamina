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

//配置文件
fifo_json globalConfig;

::Logger logger("LiteLoader");

extern void LoadDepends();
extern void LoadMain();
extern void BindAPIs(ScriptEngine* engine);
extern void LoadDebugEngine();

void LoaderInfo() {
    logger.info(std::string("ScriptEngine for ") + LLSE_MODULE_TYPE + " loaded");
    logger.info(std::string("Version ") + LITELOADER_VERSION.toString());
}

void LoadConfigFile() {
    try {
        auto content = ReadAllFile(LITELOADER_CONFIG_FILE);
        if (content) {
            globalConfig = fifo_json::parse(*content, nullptr, true, true);
            return;
        }
    } catch (const nlohmann::json::exception& e) {
        logger.error("Fail to parse config file <{}> !", LITELOADER_CONFIG_FILE);
        logger.error("{}", TextEncoding::toUTF8(e.what()));
    } catch (...) {
        logger.error("Fail to load config file <{}> !", LITELOADER_CONFIG_FILE);
    }
    globalConfig = fifo_json::object();
}

void entry() {
    //设置全局SEH处理
    _set_se_translator(seh_exception::TranslateSEHtoCE);

    // Register Myself
    LL::registerPlugin(LLSE_LOADER_NAME, LLSE_LOADER_DESCRIPTION, LITELOADER_VERSION,
                       {{"GitHub", "github.com/LiteLDev/LiteLoaderBDS"}});

    // Load Global Config
    LoadConfigFile();

    // I18n
    Translation::loadFromImpl(GetCurrentModule(), LL::getLoaderHandle());

    //初始化全局数据
    InitLocalShareData();
    InitGlobalShareData();
    InitSafeGuardRecord();

    //欢迎
    if (localShareData->isFirstInstance) {
        logger.info("ScriptEngine initializing...");
    }
    LoaderInfo();

    //初始化经济系统
    EconomySystem::init();

    //预加载库
    LoadDepends();

    //加载插件
    LoadMain();

    //注册后台调试
    LoadDebugEngine();

    //初始化事件监听
    InitBasicEventListeners();

    #ifndef SCRIPTX_LANG_NODEJS
    //初始化消息队列
    InitMessageSystem();
    #endif
}