#include "main/BuiltinCommands.h"
#include "api/APIHelp.h"
#include <llapi/utils/StringHelper.h>
#include <string>
#include <llapi/LoggerAPI.h>
#ifdef LLSE_BACKEND_PYTHON
#include "PythonHelper.h"
#endif
using namespace std;

extern Logger logger;
extern bool isInConsoleDebugMode;
extern ScriptEngine* debugEngine;

#define OUTPUT_DEBUG_SIGN() std::cout << "> " << std::flush

bool ProcessDebugEngine(const std::string& cmd)
{
#ifdef LLSE_BACKEND_PYTHON
    // process python debug seperately
    return PythonHelper::processPythonDebugEngine(cmd);
#endif

    if (cmd == LLSE_DEBUG_CMD)
    {
        if (isInConsoleDebugMode)
        {
            //EndDebug
            logger.info("Debug mode ended");
            isInConsoleDebugMode = false;
        }
        else
        {
            //StartDebug
            logger.info("Debug mode begins");
            isInConsoleDebugMode = true;
            OUTPUT_DEBUG_SIGN();
        }
        return false;
    }
    if (isInConsoleDebugMode)
    {
        EngineScope enter(debugEngine);
        try
        {
            if (cmd == "stop")
            {
                return true;
            }
            else
            {
                auto result = debugEngine->eval(cmd);
                PrintValue(std::cout, result);
                cout << endl;
                OUTPUT_DEBUG_SIGN();
            }
        }
        catch (Exception& e)
        {
            PrintException(e);
            OUTPUT_DEBUG_SIGN();
        }
        return false;
    }
    return true;
}

#define FIX_OLD_COMMAND(OLDCMD,NEWCMD)\
    if (StartsWith(cmd, OLDCMD)) \
    { \
        logger.warn("* Please use command " #NEWCMD " instead."); \
        cmd.replace(0, 3, "ll"); \
    }

bool ProcessOldHotManageCommand(std::string& cmd)
{
    FIX_OLD_COMMAND("lxl list", "ll list");
    FIX_OLD_COMMAND("lxl load", "ll load");
    FIX_OLD_COMMAND("lxl unload", "ll unload");
    FIX_OLD_COMMAND("lxl reload", "ll reload");
    FIX_OLD_COMMAND("lxl version", "ll version");
    FIX_OLD_COMMAND("lxl update", "ll upgrade");

    return true;
}