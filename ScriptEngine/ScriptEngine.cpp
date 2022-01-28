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
#include <Tools/IniHelper.h>
#include <TranslationAPI.h>
#include <EconomicSystem.h>
#include <LiteLoader/Main/Config.h>

using namespace std;

//主引擎表
std::vector<ScriptEngine*> lxlModules;

::Logger logger("LiteLoader");

extern void LoadDepends();
extern void LoadMain();
extern void BindAPIs(ScriptEngine *engine);
extern void LoadDebugEngine();

void LoaderInfo()
{
    bool isNotRelease = LL::Version::Status::LXL_VERSION_STATUS != LL::Version::Status::Release;

    logger.info(std::string("LiteLoader-ScriptEngine for ") + LXL_MODULE_TYPE + " loaded");
    logger.info(std::string("Version ") + to_string(LXL_VERSION_MAJOR) + "." + to_string(LXL_VERSION_MINOR) + "."
        + to_string(LXL_VERSION_REVISION) + (isNotRelease ? string(" ") + LXL_VERSION_STATUS_STRING : string("")));
}

void entry()
{
    //设置全局SEH处理
    _set_se_translator(seh_exception::TranslateSEHtoCE);

    //Register Myself
    LL::registerPlugin(LXL_LOADER_NAME, LXL_LOADER_DESCRIPTION, LXL_VERSION,
    {
        {"GitHub","github.com/LiteLDev/LiteLoaderBDS"}
    });

    //I18n
    Translation::load("plugins/LiteLoader/LandPack/" + LL::globalConfig.language + ".json");

    //初始化全局数据
    InitLocalShareData();
    InitGlobalShareData();
    InitSafeGuardRecord();

    //初始化消息系统
    InitMessageSystem();

    //欢迎
    if (localShareData->isFirstInstance)
    {
        logger.info("LiteLoader-ScriptEngine initializing...");
    }
    LoaderInfo();

    //初始化经济系统
    EconomySystem::init(MoneyEventCallback);

    //预加载库
    LoadDepends();
    
    //加载插件
    LoadMain();

    //注册后台调试
    LoadDebugEngine();

    //初始化事件监听
    InitBasicEventListeners();
}