#include "Config.h"
#include <Utils/FileHelper.h>
#include <Nlohmann/json.hpp>
#include <LoggerAPI.h>
#include <fstream>

//Settings
bool DebugMode;
int LogLevel;
bool EnableCrashLogger;
std::string CrashLoggerProcessPath;
bool EnableFixDisconnectBug;
bool EnableFixListenPort;


bool LoadLLConfig() {
    try {
        auto content = ReadAllFile(LITELOADER_CONFIG_FILE);
        if (!content)
        {
            Logger::Warn("LL Config File <{}> not found. Creating configuration file...", LITELOADER_CONFIG_FILE);
            std::ofstream of(LITELOADER_CONFIG_FILE);
            if (of)
            {
                of << LITELOADER_CONFIG_DEFAULT;
            }
            else
            {
                Logger::Error("Configuration File Creation failed!");
            }
            *content = LITELOADER_CONFIG_DEFAULT;
        }

        nlohmann::json conf = nlohmann::json::parse(*content, nullptr, true, true);

        //Read Conf
        DebugMode = conf["DebugMode"].get<bool>();
        LogLevel = conf["LogLevel"].get<int>();
        EnableCrashLogger = conf["Modules"]["CrashLogger"]["enabled"].get<bool>();
        CrashLoggerProcessPath = conf["Modules"]["CrashLogger"]["path"].get<std::string>();
        EnableFixDisconnectBug = conf["Modules"]["FixDisconnectBug"]["enabled"].get<bool>();
        EnableFixListenPort = conf["Modules"]["FixListenPort"]["enabled"].get<bool>();
    }
    catch (const nlohmann::json::exception& e)
    {
        Logger::Error("Fail to parse config file <{}> !", LITELOADER_CONFIG_FILE);
        Logger::Error("{}", e.what());
        return false;
    }
    catch (...)
    {
        Logger::Error("Fail to load config file <{}> !", LITELOADER_CONFIG_FILE);
        return false;
    }
    return true;
}