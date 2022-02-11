#include <API/APIHelp.h>
#include <API/EventAPI.h>
#include <Engine/GlobalShareData.h>
#include <Engine/EngineOwnData.h>
#include <Engine/LocalShareData.h>
#include <Engine/RemoteCall.h>
#include <Engine/MessageSystem.h>
#include <SafeGuardRecord.h>
#include <windows.h>
#include <string>
#include <exception>
#include <thread>
#include <chrono>
#include <memory>
#include <filesystem>
#include <Configs.h>
#include <Version.h>
#include <LoggerAPI.h>
#include <Utils/FileHelper.h>
#include <Tools/JsonHelper.h>
#include <TranslationAPI.h>
#include <EconomicSystem.h>

using namespace std;

//主引擎表
std::vector<ScriptEngine*> currentModuleEngines;
//配置文件
fifo_json globalConfig;

::Logger logger("LiteLoader");

extern void LoadDepends();
extern void LoadMain();
extern void BindAPIs(ScriptEngine *engine);
extern void LoadDebugEngine();

void LoaderInfo()
{
    logger.info(std::string("ScriptEngine for ") + LLSE_MODULE_TYPE + " loaded");
    logger.info(std::string("Version ") + LLSE_VERSION.toString());
}

void LoadConfigFile()
{
    try {
        auto content = ReadAllFile(LITELOADER_CONFIG_FILE);
        if (content) {
            globalConfig = fifo_json::parse(*content, nullptr, true, true);
        }
    }
    catch (const nlohmann::json::exception& e) {
        logger.error("Fail to parse config file <{}> !", LITELOADER_CONFIG_FILE);
        logger.error("{}", e.what());
    }
    catch (...) {
        logger.error("Fail to load config file <{}> !", LITELOADER_CONFIG_FILE);
    }
}

void entry()
{
    //设置全局SEH处理
    _set_se_translator(seh_exception::TranslateSEHtoCE);

    //Register Myself
    LL::registerPlugin(LLSE_LOADER_NAME, LLSE_LOADER_DESCRIPTION, LLSE_VERSION,
    {
        {"GitHub","github.com/LiteLDev/LiteLoaderBDS"}
    });

    //Load Global Config
    LoadConfigFile();

    //I18n
    Translation::load("plugins/LiteLoader/LangPack/" + globalConfig.value("Language","en") + ".json");

    //初始化全局数据
    InitLocalShareData();
    InitGlobalShareData();
    InitSafeGuardRecord();

    //欢迎
    if (localShareData->isFirstInstance)
    {
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

    //初始化消息队列
    InitMessageSystem();
}