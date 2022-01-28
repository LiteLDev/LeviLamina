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
void RemoteLoadCallback(ModuleMessage& msg)
{
    istringstream sin(msg.getData());

    bool isHotLoad;
    int backId;
    string filePath;

    sin >> backId >> isHotLoad >> filePath;
    bool res = LxlLoadPlugin(filePath, isHotLoad);

    ModuleMessage msgBack(backId, ModuleMessage::MessageType::RemoteRequireReturn, string(res ? "1" : "0"));
    msg.sendBack(msgBack);
}

void RemoteLoadReturnCallback(ModuleMessage& msg)
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
        //Remote Load
        logger.debug("Remote Load begin");

        ostringstream sout;
        int backId = ModuleMessage::getNextMessageId();
        sout << backId << "\n" << isHotLoad << "\n" << filePath;

        ModuleMessage msg(ModuleMessage::MessageType::RemoteRequire, sout.str());

        //========================= Fix =========================
        if (suffix == ".lua")
        {
            if (!ModuleMessage::sendTo(msg, LXL_LANG_LUA))
            {
                logger.error("Fail to send remote load request!");
                return false;
            }
        }
        else if (suffix == ".js")
        {
            if (!ModuleMessage::sendTo(msg, LXL_LANG_JS))
            {
                logger.error("Fail to send remote load request!");
                return false;
            }
        }
        else
        {
            logger.error("Unknown type of Script file!");
            return false;
        }

        if (!ModuleMessage::waitForMessage(backId, LXL_MAXWAIT_REMOTE_LOAD))
        {
            logger.error("Remote Load Timeout!");
            return false;
        }

        return true;
    }

    //多线程锁
    // ======================= Rewrite here =======================
    //lock_guard<mutex> lock(globalShareData->hotManageLock);

    //判重
    string pluginName = std::filesystem::path(filePath).filename().u8string();
    for (auto plugin : globalShareData->pluginsList)
    {
        if (pluginName == plugin)
            return true;
    }

    try
    {
        std::string scripts = ReadFileFrom(filePath);

        //启动引擎
        ScriptEngine* engine = NewEngine();
        lxlModules.push_back(engine);
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
        ScriptEngine* deleteEngine = lxlModules.back();
        lxlModules.pop_back();

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

    //多线程锁
    // ======================= Rewrite here =======================
    //lock_guard<mutex> lock(globalShareData->hotManageLock);

    string unloadedPath = "";
    for (int i = 0; i < lxlModules.size(); ++i)
    {
        ScriptEngine* engine = lxlModules[i];
        if (ENGINE_GET_DATA(engine)->pluginName == name)
        {
            unloadedPath = ENGINE_GET_DATA(engine)->pluginPath;

            LxlCallEventsOnHotUnload(engine);
            RemoveFromGlobalPluginsList(name);
            LxlRemoveAllEventListeners(engine);
            LxlRemoveCmdRegister(engine);
            LxlRemoveAllExportedFuncs(engine);
            engine->getData().reset();
            lxlModules.erase(lxlModules.begin() + i);

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

    for (auto& engine : lxlModules)
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