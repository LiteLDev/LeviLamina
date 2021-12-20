#include <Windows.h>
#include <string>
#include <iostream>
#include <LoggerAPI.h>
#include <Utils/StringHelper.h>
#include <seh_exception/seh_exception.hpp>
#include <ServerAPI.h>
#include <HookAPI.h>
#include <Config.h>
#include "Loader.h"
#include "AutoUpgrade.h"
#include "CrashLogger.h"
#include <Header/EventAPI.h>

using namespace std;

Logger logger("LiteLoader");

void FixPluginsLibDir() {  // add plugins folder to path
    auto *buffer = new WCHAR[8192];
    auto sz = GetEnvironmentVariableW(TEXT("PATH"), buffer, 8192);
    std::wstring PATH{buffer, sz};
    sz = GetCurrentDirectoryW(8192, buffer);
    std::wstring CWD{buffer, sz};
    SetEnvironmentVariableW(TEXT("PATH"), (CWD + L"\\plugins;" + PATH).c_str());
    delete[] buffer;
}

void FixUpCWD() {
    string buf;
    buf.assign(8192, '\0');
    GetModuleFileNameA(nullptr, buf.data(), 8192);
    buf = buf.substr(0, buf.find_last_of('\\'));
    SetCurrentDirectoryA(buf.c_str());
}

extern void RegisterCommands();
extern bool InitPlayerDatabase();
extern void RegisterSimpleServerLogger();

void CheckDevMode() {
    if (LL::globalConfig.debugMode) {
        logger.info("");
        logger.info("================= LiteLoader ================");
        logger.info(" ____             __  __           _      ");
        logger.info("|  _ \\  _____   _|  \\/  | ___   __| | ___ ");
        logger.info(R"(| | | |/ _ \ \ / / |\/| |/ _ \ / _` |/ _ \)");
        logger.info("| |_| |  __/\\ V /| |  | | (_) | (_| |  __/");
        logger.info(R"(|____/ \___| \_/ |_|  |_|\___/ \__,_|\___|)");
        logger.info("");
        logger.warn("You Are In DevelopMode!");
    }
}

//extern
extern void EndScheduleSystem();

void LLMain() {
    //Set global SEH-Exception handler
    _set_se_translator(seh_exception::TranslateSEHtoCE);

    //Prohibit pop-up windows to facilitate automatic restart
    SetErrorMode(SEM_FAILCRITICALERRORS | SEM_NOGPFAULTERRORBOX | SEM_NOALIGNMENTFAULTEXCEPT);

    //Disable Output-Sync
    std::ios::sync_with_stdio(false);

    //Create Plugin Directory
    std::error_code ec;
    std::filesystem::create_directories("plugins", ec);

    //Fix problems
    FixUpCWD();
    FixPluginsLibDir();

    //Init LL Logger
    Logger::setDefaultFile("logs/LiteLoader-latest.log", false);

    //Load Config
    LoadLLConfig();
    InitPlayerDatabase();
    
    //Rename Window
    HWND hwnd = GetConsoleWindow();
    std::wstring s = L"Bedrock Dedicated Server " + str2wstr(LL::getBdsVersion().substr(1));
    SetWindowText(hwnd, s.c_str());

    //DebugMode
    CheckDevMode();

    //Builtin CrashLogger
    InitCrashLogger(LL::globalConfig.enableCrashLogger);

    //Load plugins
    LoadMain();

    //Register built-in commands
    RegisterCommands();

    //Register simple server logger
    RegisterSimpleServerLogger();

    //Register Started
    Event::ServerStartedEvent::subscribe([](Event::ServerStartedEvent)
    { 
        logger.info("LiteLoader is distributed under the GPLv3 License");
        logger.info("\u611f\u8c22\u65cb\u5f8b\u4e91 rhymc.com \u5bf9\u672c\u9879\u76ee\u7684\u652f\u6301");
        if (LL::globalConfig.enableAutoUpdate)
            InitAutoUpdateCheck();
        return true;
    });

    //Register Cleanup
    Event::ServerStoppedEvent::subscribe([](Event::ServerStoppedEvent)
    {
        LL::globalConfig.isServerRunning = false;
        EndScheduleSystem();
        return true;
    });

}
// Call LLMain
#include <MC/CompoundTag.hpp>
void testRW(std::string const& binary, bool isLittle)
{
    logger.info("size: {}, isLittleEndian: {}", binary.size(), isLittle);
    auto tag = CompoundTag::fromBinaryNBT((void*)binary.c_str(), binary.size(), isLittle);
    auto newBinary = tag->toBinaryNBT(isLittle);
    if (binary == newBinary)
    {
        logger.info("bin->tag->bin 测试通过");
    }
    else
    {
        logger.error("bin->tag->bin 测试未通过");
    }
    auto snbt = tag->toSNBT();
    auto newTag = CompoundTag::fromSNBT(snbt);
    if (tag->equals(*newTag))
    {
        logger.info("tag->snbt->tag 测试通过");
    }
    else
    {
        logger.error("tag->snbt->tag 测试未通过");
        WriteAllFile(fmt::format("./test/error{}.nbt", isLittle ? "" : "_big"), newTag->toBinaryNBT(isLittle), true);
        return;
    }
    auto newSnbt = newTag->toSNBT();
    if (newSnbt == snbt)
    {
        //logger.info("snbt->tag->snbt 测试通过");
    }
    else
    {
        logger.error("snbt->tag->snbt 测试未通过");
        WriteAllFile(fmt::format("./test/error{}.nbt", isLittle ? "" : "_big"), newTag->toBinaryNBT(isLittle), true);
        return;
    }
}
void testNbt()
{
    auto filePath = "./test/test.nbt";
    auto binary = ReadAllFile(filePath, true);
    logger.info("Testing file:  {}", filePath);
    testRW(binary.value(), true);

    filePath = "./test/test_big.nbt";
    binary = ReadAllFile(filePath, true);
    logger.info("Testing file:  {}", filePath);
    testRW(binary.value(), false);

    filePath = "./test/test_longarray.nbt";
    binary = ReadAllFile(filePath, true);
    logger.info("Testing file:  {}", filePath);
    testRW(binary.value(), true);
}
void entry()
{
    Event::ServerStartedEvent::subscribe([](Event::ServerStartedEvent ev) -> bool {
        //genBlockType();
        testNbt();
        return true;
    });
}
THook(int, "main", int a, void* b) {
    LLMain();
    entry();
    return original(a, b);
}

