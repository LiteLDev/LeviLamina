#include "LoaderHelper.h"
#include <API/APIHelp.h>
#include <Engine/GlobalShareData.h>
#include <Engine/EngineOwnData.h>
#include <API/EventAPI.h>
#include <list>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>
#include <filesystem>
#include <exception>
#include <filesystem>
#include <memory>
#include <Configs.h>
#include <Loader.h>
#include <Engine/LoaderHelper.h>
#include <Engine/RemoteCall.h>
#include <Engine/MessageSystem.h>
#include <API/CommandAPI.h>
#include <Utils/StringHelper.h>
#include <ScheduleAPI.h>
#include <Utils/Hash.h>
#define H(x) do_hash(x)
using namespace std;

//读取辅助函数
std::string ReadFileFrom(const std::string &filePath)
{
    std::ifstream fRead(filePath);
    if(!fRead)
    {
        throw std::exception("Fail to open file!");
        return string();
    }
    std::string data((std::istreambuf_iterator<char>(fRead)),
        std::istreambuf_iterator<char>());
    fRead.close();
    return data;
}

//创建新引擎
ScriptEngine* NewEngine()
{
    ScriptEngine* engine;

#if !defined(SCRIPTX_BACKEND_WEBASSEMBLY)
    engine = new ScriptEngineImpl();
#else
    engine = ScriptEngineImpl::instance();
#endif

    engine->setData(make_shared<EngineOwnData>());
    return engine;
}

//远程装载回调
void RemoteLoadRequest(ModuleMessage& msg)
{
    istringstream sin(msg.getData());

    bool isHotLoad;
    int backId;
    string filePath;

    sin >> isHotLoad >> filePath;
    bool res = LxlLoadPlugin(filePath, isHotLoad);

    msg.sendResult(ModuleMessage::MessageType::RemoteLoadReturn, string(res ? "1" : "0"));
}

void RemoteLoadReturn(ModuleMessage& msg)
{
    if (msg.getData() == "0")
    {
        logger.error("Romote Load Failed!");
    }
}

//加载插件
bool LxlLoadPlugin(const std::string& filePath, bool isHotLoad)
{
    if (filePath == LXL_DEBUG_ENGINE_NAME)
        return true;

    string suffix = filesystem::path(filePath).extension().u8string();

    if (suffix != LXL_PLUGINS_SUFFIX)
    {
        string moduleToBroadcast;
        switch (H(suffix.c_str()))
        {
        case H(".lua"):
            moduleToBroadcast = LXL_LANG_LUA;
            break;
        case H(".js"):
            moduleToBroadcast = LXL_LANG_JS;
            break;
        default:
            logger.error("Do not support this type of plugin!");
            return false;
            break;
        }

        //Remote Load
        logger.debug("Remote Load begin");

        ostringstream sout;
        sout << isHotLoad << "\n" << filePath;
        string request = sout.str();

        auto result = ModuleMessage::sendToRandom(moduleToBroadcast, ModuleMessage::MessageType::RemoteLoadRequest, request);
        if(!result)
        {
            logger.error("Fail to send remote load request!");
            return false;
        }

        if (!result.waitForAllResults(LXL_MAXWAIT_REMOTE_LOAD))
        {
            logger.error("Remote Load Timeout!");
            return false;
        }
        return true;
    }

    //判重
    string pluginName = std::filesystem::path(filePath).filename().u8string();
    for (auto plugin : globalShareData->pluginsList)
    {
        if (pluginName == plugin)
            return true;
    }

    if (!filesystem::exists(filePath))
    {
        logger.error("Plugin no found! Check the path you input again.");
        return false;
    }

    try
    {
        std::string scripts = ReadFileFrom(filePath);

        //启动引擎
        ScriptEngine* engine = NewEngine();
        currentModuleEngines.push_back(engine);
        globalShareData->engines.push_back({ LLSE_MODULE_TYPE, pluginName, engine });
        EngineScope enter(engine);

        //setData
        ENGINE_OWN_DATA()->pluginName = pluginName;
        ENGINE_OWN_DATA()->pluginPath = filePath;
        ENGINE_OWN_DATA()->logger.title = SplitStrWithPattern(pluginName,"\.")[0];

        //绑定API
        try {
            BindAPIs(engine);
        }
        catch (const Exception& e)
        {
            logger.error("Fail in Binding APIs!\n");
            throw;
        }

        //加载libs依赖库
        try
        {
            for (auto& i : depends) {
                engine->eval(i);
            }
        }
        catch (const Exception& e)
        {
            logger.error("Fail in Loading Dependence Lib!\n");
            throw;
        }

        //加载脚本
        try
        {
            engine->eval(scripts);
        }
        catch (const Exception& e)
        {
            logger.error("Fail in Loading Script Plugin!\n");
            throw;
        }
        ExitEngineScope exit;

        AddToGlobalPluginsList(pluginName);
        if (isHotLoad)
            LxlCallEventsOnHotLoad(engine);
        logger.info(pluginName + " loaded.");
        return true;
    }
    catch (const Exception& e)
    {
        ScriptEngine* deleteEngine = currentModuleEngines.back();
        currentModuleEngines.pop_back();
        globalShareData->engines.pop_back();
        {
            EngineScope enter(deleteEngine);

            deleteEngine->getData().reset();
            logger.error("Fail to load " + filePath + "!\n");
            logger.error("In Plugin: " + ENGINE_OWN_DATA()->pluginName);
            PrintException(e);
            ExitEngineScope exit;
        }
        deleteEngine->destroy();
    }
    catch (const std::exception& e)
    {
        logger.error("Fail to load " + filePath + "!");
        logger.error(e.what());
    }
    catch (...)
    {
        logger.error("Fail to load " + filePath + "!");
    }
    return false;
}

//卸载插件
string LxlUnloadPlugin(const std::string& name)
{
    if (name == LXL_DEBUG_ENGINE_NAME)
        return LXL_DEBUG_ENGINE_NAME;

    string unloadedPath = "";
    for (int i = 0; i < currentModuleEngines.size(); ++i)
    {
        ScriptEngine* engine = currentModuleEngines[i];
        if (ENGINE_GET_DATA(engine)->pluginName == name)
        {
            unloadedPath = ENGINE_GET_DATA(engine)->pluginPath;

            LxlCallEventsOnHotUnload(engine);
            RemoveFromGlobalPluginsList(name);
            LxlRemoveAllEventListeners(engine);
            LxlRemoveCmdRegister(engine);
            LxlRemoveAllExportedFuncs(engine);
            engine->getData().reset();
            currentModuleEngines.erase(currentModuleEngines.begin() + i);

            for (auto now = globalShareData->engines.begin(); now != globalShareData->engines.end(); ++now)
                if (now->pluginName == name)
                    globalShareData->engines.erase(now);

            //delay request to avoid crash
            Schedule::nextTick([engine]() {
                engine->destroy();
            });

            logger.info(name + " unloaded.");
            break;
        }
    }
    return unloadedPath;
}

//重载插件
bool LxlReloadPlugin(const std::string& name)
{
    if (name == LXL_DEBUG_ENGINE_NAME)
        return true;

    string unloadedPath = LxlUnloadPlugin(name);
    if (unloadedPath.empty())
        return false;
    return LxlLoadPlugin(unloadedPath,true);
}

//重载全部插件
bool LxlReloadAllPlugins()
{
    auto pluginsList = LxlListLocalAllPlugins();
    for (auto& name : pluginsList)
        LxlReloadPlugin(name);
    return true;
}

//获取当前语言的所有插件
vector<string> LxlListLocalAllPlugins()
{
    vector<string> list;

    for (auto& engine : currentModuleEngines)
    {
        string name = ENGINE_GET_DATA(engine)->pluginName;
        if (name != LXL_DEBUG_ENGINE_NAME)
            list.push_back(name);
    }
    return list;
}

//获取整个LXL所有的插件
vector<string> LxlListGlocalAllPlugins()
{
    return globalShareData->pluginsList;
}