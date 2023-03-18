#include "main/BuiltinCommands.h"
#include "api/APIHelp.h"
#include <llapi/utils/StringHelper.h>
#include <string>
#include <llapi/LoggerAPI.h>
using namespace std;

extern Logger logger;
extern bool isInConsoleDebugMode;
extern ScriptEngine* debugEngine;

#define OUTPUT_DEBUG_SIGN() std::cout << ">>> " << std::flush

// process python debug seperately
#ifdef LLSE_BACKEND_PYTHON

#define OUTPUT_DEBUG_NEED_MORE_CODE_SIGN() std::cout << "... " << std::flush
std::string codeBlockBuffer = "";
bool isInsideCodeBlock = false;

bool ProcessPythonDebugEngine(const std::string &cmd)
{
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
            codeBlockBuffer.clear();
            isInsideCodeBlock = false;
            isInConsoleDebugMode = true;
            OUTPUT_DEBUG_SIGN();
        }
        return false;
    }
    if (isInConsoleDebugMode)
    {
        EngineScope enter(debugEngine);
        if (cmd == "stop")
        {
            return true;
        }
        else
        {
            try {
                Local<Value> result;
                if(isInsideCodeBlock)
                {
                    // is in code block mode
                    if(cmd.empty())
                    {
                        // exit code block
                        isInsideCodeBlock = false;
                        result = debugEngine->eval(codeBlockBuffer);
                        codeBlockBuffer = "";
                    }
                    else
                    {
                        // add a new line to buffer
                        codeBlockBuffer += cmd + "\n";
                        OUTPUT_DEBUG_NEED_MORE_CODE_SIGN();
                        return false;
                    }
                }
                else
                {
                    // not in code block mode
                    if(EndsWith(cmd, ":"))
                    {
                        // begin code block mode
                        isInsideCodeBlock = true;
                        codeBlockBuffer = cmd + "\n";
                        OUTPUT_DEBUG_NEED_MORE_CODE_SIGN();
                        return false;
                    }
                    else
                    {
                        result = debugEngine->eval(cmd);
                    }
                }

                if(result.isNull())
                {
                    // No result output
                    OUTPUT_DEBUG_SIGN();
                }
                else
                {
                    PrintValue(std::cout, result);
                    cout << endl;
                    OUTPUT_DEBUG_SIGN();
                }
            } catch(const Exception &e) {
                isInsideCodeBlock = false;
                codeBlockBuffer.clear();
                PrintException(e);
                OUTPUT_DEBUG_SIGN();
            }
        }
        return false;
    }
    return true;
}
#endif


bool ProcessDebugEngine(const std::string& cmd)
{
#ifdef LLSE_BACKEND_PYTHON
    return ProcessPythonDebugEngine(cmd);
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