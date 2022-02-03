#include "PluginHotManage.h"
#include <API/APIHelp.h>
#include <Tools/Utils.h>
#include <Utils/StringHelper.h>
#include "LoaderHelper.h"
#include "MessageSystem.h"
#include "GlobalShareData.h"
#include <Engine/OperationCount.h>
#include <Utils/StringHelper.h>
#include <Utils/Hash.h>
#include <Configs.h>
#include <Version.h>
#include <string>
#include <thread>
using namespace std;
#define H do_hash

bool ProcessHotManageCmd(const std::string& cmd)
{
    if (cmd.find("lxl ") != 0)
        return true;

    auto cmdList = SplitCmdLine(cmd);
    if (cmdList.size() <= 1)
    {
        logger.error("Command not found! Check your input again.");
        return false;
    }

    switch (H(cmdList[1].c_str()))
    {
    case H("version"):
        logger.info("LiteLoader-ScriptEngine-{} v{}", LXL_SCRIPT_LANG_TYPE, LLSE_VERSION.toString());
        break;

    case H("list"):
    {
        logger.info("=== LiteLoader-ScriptEngine-{} Plugins ===", LXL_SCRIPT_LANG_TYPE);
        auto list = LxlListLocalAllPlugins();
        for (auto& name : list)
            logger.info("{}", name);
        break;
    }
    
    case H("load"):
    {
        if (cmdList.size() == 3)
        {
            LxlLoadPlugin(cmdList[2], true);
        }
        else
            logger.error("Bad Command! Check your input again.");
        break;
    }

    case H("unload"):
    {
        if (cmdList.size() == 3)
        {
            LxlUnloadPlugin(cmdList[2]);
        }
        else
            logger.error("Bad Command! Check your input again.");
        break;
    }

    case H("reload"):
    {
        if (cmdList.size() == 3)
        {
            //Reload specific plugin
            LxlReloadPlugin(cmdList[2]);
        }
        else
        {
            //Reload All
            LxlReloadAllPlugins();
            logger.info("All plugins reloaded.", LXL_SCRIPT_LANG_TYPE);
        }
        break;
    }

    default:
        logger.error("Command not found! Check your input again.");
        break;
    }
    return false;
}