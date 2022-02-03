#include <API/APIHelp.h>
#include <Engine/GlobalShareData.h>
#include <Engine/EngineOwnData.h>
#include <Engine/LoaderHelper.h>
#include <Tools/IniHelper.h>
#include <list>
#include <string>
#include <vector>
#include <fstream>
#include <filesystem>
#include <exception>
#include <filesystem>
#include <memory>
#include <Configs.h>

extern ::Logger logger;

//基础库 & 依赖库
std::vector<std::string> depends;

//调试引擎
ScriptEngine *debugEngine;
bool globalDebug = false;

//前置声明
extern std::vector<ScriptEngine*> currentModuleEngines;
extern void BindAPIs(ScriptEngine *engine);

//预加载依赖库
void LoadDepends()
{
    std::filesystem::directory_iterator deps(LXL_DEPENDS_DIR);
    for (auto& i : deps) {
        if (i.is_regular_file() && i.path().filename() == string("BaseLib")+ LXL_PLUGINS_SUFFIX)
        {
            try
            {
                depends.emplace_back(ReadFileFrom(i.path().string()));
                logger.info("Dependence " + i.path().filename().string() + " Loaded.");
            }
            catch (std::exception e)
            {
                logger.warn("Fail to load dependence " + i.path().filename().string() + ".");
                logger.warn(e.what());
            }
            catch (...)
            {
                logger.warn("Fail to load dependence " + i.path().filename().string() + ".");
            }
        }
    }
}

//加载调试引擎
void LoadDebugEngine()
{
    //启动引擎
    debugEngine = NewEngine();
    currentModuleEngines.push_back(debugEngine);
    globalShareData->engines.push_back({ LXL_DEBUG_ENGINE_NAME, LLSE_MODULE_TYPE, debugEngine });
    EngineScope enter(debugEngine);

    //setData
    ENGINE_OWN_DATA()->pluginName = LXL_DEBUG_ENGINE_NAME;

    //绑定API
    try {
        BindAPIs(debugEngine);
    }
    catch (const Exception& e)
    {
        logger.error("Fail in binding Debug Engine!\n");
        throw;
    }

    //加载libs依赖库
    try
    {
        for (auto& i : depends) {
            debugEngine->eval(i);
        }
    }
    catch (const Exception& e)
    {
        logger.error("Fail in Loading Dependence Lib!\n");
        throw;
    }
}

//主加载
void LoadMain()
{
    logger.info("Loading plugins...");
    int count = 0;
    std::filesystem::directory_iterator files(LXL_PLUGINS_LOAD_DIR);
    for (auto& i : files) {
        if (i.is_regular_file() && i.path().extension() == LXL_PLUGINS_SUFFIX)
        {
            if (LxlLoadPlugin(i.path().string()))
                ++count;
        }
    }
    logger.info(std::to_string(count) + " " + LLSE_MODULE_TYPE + " plugins loaded in all.");
}