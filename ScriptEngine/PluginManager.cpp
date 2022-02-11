#include <API/APIHelp.h>
#include "PluginManager.h"
#include <Global.hpp>
#include <Configs.h>
#include <filesystem>
#include <Engine/GlobalShareData.h>
#include <Engine/LocalShareData.h>
#include <Engine/MessageSystem.h>
#include <Engine/LoaderHelper.h>
#include <Engine/RemoteCall.h>
#include <Engine/TimeTaskSystem.h>
#include <LiteLoader/Main/PluginManager.h>
#include <Loader.h>
#include <ScheduleAPI.h>
#include <API/EventAPI.h>
#include <API/CommandAPI.h>
#include <Utils/Hash.h>
#define H(x) do_hash(x)
using namespace std;

extern void BindAPIs(ScriptEngine* engine);

//Helper
string RemoveRealAllExtension(string fileName)
{
    int pos = fileName.find(".");
    if (pos == string::npos)
        return fileName;
    else
        return fileName.substr(0, pos);
}

//加载插件
bool PluginManager::loadPlugin(const std::string& filePath, bool isHotLoad, bool mustBeCurrentModule)
{
    if (filePath == LLSE_DEBUG_ENGINE_NAME)
        return true;

    string suffix = filesystem::path(filePath).extension().u8string();

    if (suffix != LLSE_PLUGINS_EXTENSION)
    {
        if (mustBeCurrentModule)
            return false;

        string moduleToBroadcast;
        switch (H(suffix.c_str()))
        {
        case H(".lua"):
            moduleToBroadcast = LLSE_BACKEND_LUA;
            break;
        case H(".js"):
            moduleToBroadcast = LLSE_BACKEND_JS;
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
        if (!result)
        {
            logger.error("Fail to send remote load request!");
            return false;
        }

        if (!result.waitForAllResults(LLSE_MAXWAIT_REMOTE_LOAD))
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
        {
            logger.error("This plugin has been loaded by LiteLoader. You cannot load it twice.");
            return false;
        }
    }

    if (!filesystem::exists(filePath))
    {
        logger.error("Plugin no found! Check the path you input again.");
        return false;
    }

    try
    {
        auto scripts = ReadAllFile(filePath);
        if (!scripts)
            throw("Fail to open plugin file!");

        //启动引擎
        ScriptEngine* engine = NewEngine();
        currentModuleEngines.push_back(engine);
        globalShareData->engines.push_back({ LLSE_MODULE_TYPE, pluginName, engine });
        EngineScope enter(engine);

        //setData
        ENGINE_OWN_DATA()->pluginName = pluginName;
        ENGINE_OWN_DATA()->pluginFilePath = filePath;
        ENGINE_OWN_DATA()->logger.title = RemoveRealAllExtension(pluginName);

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
            engine->eval(*scripts);
        }
        catch (const Exception& e)
        {
            logger.error("Fail in Loading Script Plugin!\n");
            throw;
        }
        pluginName = ENGINE_OWN_DATA()->pluginName;
        ExitEngineScope exit;

        //后处理
        if (!PluginManager::getPlugin(pluginName))
            PluginManager::registerPlugin(filePath, pluginName, pluginName, LL::Version(1, 0, 0), {});
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
bool PluginManager::unloadPlugin(const std::string& name)
{
    if (name == LLSE_DEBUG_ENGINE_NAME)
        return true;

    string unloadedPath = "";
    for (int i = 0; i < currentModuleEngines.size(); ++i)
    {
        ScriptEngine* engine = currentModuleEngines[i];
        if (ENGINE_GET_DATA(engine)->pluginName == name)
        {
            unloadedPath = ENGINE_GET_DATA(engine)->pluginFilePath;

            LxlCallEventsOnHotUnload(engine);
            LxlRemoveTimeTaskData(engine);
            RemoveFromGlobalPluginsList(name);
            LxlRemoveAllEventListeners(engine);
            LxlRemoveCmdRegister(engine);
            LxlRemoveAllExportedFuncs(engine);
            engine->getData().reset();
            currentModuleEngines.erase(currentModuleEngines.begin() + i);       //????? change to std::remove_if
            
            auto& engines = globalShareData->engines;
            engines.erase(remove_if(engines.begin(), engines.end(), 
                [&name](ScriptEngineData& engineData) { return engineData.pluginName == name; })
            , engines.end());

            PluginManager::unRegisterPlugin(name);
            //delay request to avoid crash
            Schedule::nextTick([engine]() {
                engine->destroy();
            });

            logger.info(name + " unloaded.");
            return true;
        }
    }
    return false;
}

//重载插件
bool PluginManager::reloadPlugin(const std::string& name)
{
    if (name == LLSE_DEBUG_ENGINE_NAME)
        return true;

    auto plugin = PluginManager::getPlugin(name);
    if (!plugin)
        return false;

    string filePath = plugin->filePath;
    if (!PluginManager::unloadPlugin(name))
        return false;
    return PluginManager::loadPlugin(filePath, true, true);
}

//重载全部插件
bool PluginManager::reloadAllPlugins()
{
    auto pluginsList = PluginManager::getLocalPlugins();
    for (auto& name : pluginsList)
        reloadPlugin(name);
    return true;
}

LL::Plugin* PluginManager::getPlugin(std::string name)
{
    return LL::PluginManager::getPlugin(name,true);
}

//获取当前语言的所有插件
vector<string> PluginManager::getLocalPlugins()
{
    vector<string> list;

    for (auto& engine : currentModuleEngines)
    {
        string name = ENGINE_GET_DATA(engine)->pluginName;
        if (name != LLSE_DEBUG_ENGINE_NAME)
            list.push_back(name);
    }
    return list;
}

//获取整个LXL所有的插件
vector<string> PluginManager::getAllPlugins()
{
    return globalShareData->pluginsList;
}

bool PluginManager::registerPlugin(std::string filePath, std::string name, std::string introduction,
    LL::Version version, std::map<std::string, std::string> others)
{
    others["PluginType"] = "Script Plugin";
    others["PluginFilePath"] = filePath;
    return LL::PluginManager::registerPlugin(NULL, name, introduction, version, others);
}

bool PluginManager::unRegisterPlugin(std::string name)
{
    return LL::PluginManager::unRegisterPlugin(name);
}