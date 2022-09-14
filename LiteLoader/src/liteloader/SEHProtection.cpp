#include <llapi/HookAPI.h>
#include <llapi/LoggerAPI.h>
#include <llapi/utils/SehTranslator.h>
#include <llapi/Utils/DbgHelper.h>
#include <llapi/utils/StringHelper.h>
#include <sstream>
#include <string>
#include <set>
using namespace std;
extern Logger logger;

// Have problems, need to be fixed.

/*
bool seSetForServerLevelTick = false;
bool seSetForMinecraftUpdate = false;

THook2("SEHPROTECT",void, "?tick@ServerLevel@@UEAAXXZ",
    void* _this)
{
    if (!seSetForServerLevelTick)
    {
        _set_se_translator(seh_exception::TranslateSEHtoCE);
        seSetForServerLevelTick = true;
    }

    try
    {
        original(_this);
    }
    catch (const seh_exception& e)
    {
        logger.error("Uncaught SEH Exception Detected in ServerLevel::tick!");
        logger.error("Exception: {}",wstr2str(ANSI2Unicode(TextEncoding::toUTF8(e.what()))));
        logger.error("Error Code: {}", e.code());
        PrintCurrentStackTraceback(e.info());
    }
    catch (...)
    {
        logger.error("Uncaught Exception Detected in Level::tick!");
        PrintCurrentStackTraceback();
    }
    return;
}

THook(__int64, "?update@Minecraft@@QEAA_NXZ",
    void* _this)
{
    if (!seSetForMinecraftUpdate)
    {
        _set_se_translator(seh_exception::TranslateSEHtoCE);
        seSetForMinecraftUpdate = true;
    }

    try
    {
        original(_this);
    }
    catch (const seh_exception& e)
    {
        logger.error("Uncaught SEH Exception Detected in Minecraft::update!");
        logger.error("Exception: {}", wstr2str(ANSI2Unicode(TextEncoding::toUTF8(e.what()))));
        logger.error("Error Code: {}", e.code());
        PrintCurrentStackTraceback(e.info());
    }
    catch (...)
    {
        logger.error("Uncaught Exception Detected in Minecraft::update!");
        PrintCurrentStackTraceback();
    }
    return 0;
}*/