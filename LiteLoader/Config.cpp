#include "Config.h"
#include <Utils/FileHelper.h>
#include <Nlohmann/json.hpp>
#include <LoggerAPI.h>
#include <fstream>

namespace LL
{
    LLConfig globalConfig;
}


bool LoadLLConfig() {
    try {
        auto content = ReadAllFile(LITELOADER_CONFIG_FILE);
        if (!content)
        {
            Logger::Warn("LL Config File <{}> not found. Creating configuration file...", LITELOADER_CONFIG_FILE);
            std::ofstream of(LITELOADER_CONFIG_FILE);
            if (of)
            {
                of << nlohmann::json(LL::globalConfig).dump(4);
            }
            else
            {
                Logger::Error("Configuration File Creation failed!");
            }
        }
        else
            LL::globalConfig = nlohmann::json::parse(*content, nullptr, true, true);
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