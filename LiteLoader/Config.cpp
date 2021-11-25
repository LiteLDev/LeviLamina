#include "Config.h"
#include <Utils/FileHelper.h>
#include <Nlohmann/json.hpp>
#include <LoggerAPI.h>
#include <fstream>
#include <filesystem>
using namespace std;

namespace LL
{
    LLConfig globalConfig;

    void inline to_json(nlohmann::json& j, const LLConfig& conf)
    {
        j = nlohmann::json{
            {"DebugMode", conf.debugMode},
            {"LogLevel", conf.logLevel},
            {"Language", conf.language},
            {"Modules",{
                "AutoUpgrade", { "enabled", conf.enableAutoUpdate },
                "CrashLogger", {
                    "enabled", conf.enableCrashLogger,
                    "path", conf.crashLoggerPath
                },
                "FixDisconnectBug", { "enabled", conf.enableFixDisconnectBug },
                "FixListenPort", { "enabled", conf.enableFixListenPort }
            }}
        };
    }

    void inline from_json(const nlohmann::json& j, LLConfig& conf)
    {
        if (j.find("DebugMode") != j.end())
            j.at("DebugMode").get_to(conf.debugMode);
        if (j.find("LogLevel") != j.end())
            j.at("LogLevel").get_to(conf.logLevel);
        if (j.find("Language") != j.end())
            j.at("Language").get_to(conf.language);

        if (j.find("Modules") != j.end())
        {
            if (j.find("AutoUpgrade") != j.end())
                j.at("Modules").at("AutoUpgrade").at("enabled").get_to(conf.enableAutoUpdate);
            if (j.find("CrashLogger") != j.end())
            {
                j.at("Modules").at("CrashLogger").at("enabled").get_to(conf.enableCrashLogger);
                j.at("Modules").at("CrashLogger").at("path").get_to(conf.crashLoggerPath);
            }
            if (j.find("FixDisconnectBug") != j.end())
                j.at("Modules").at("FixDisconnectBug").at("enabled").get_to(conf.enableFixDisconnectBug);
            if (j.find("FixListenPort") != j.end())
                j.at("Modules").at("FixListenPort").at("enabled").get_to(conf.enableFixListenPort);
        }
    }
}


bool LoadLLConfig() {
    try {
        auto content = ReadAllFile(LITELOADER_CONFIG_FILE);
        if (!content)
        {
            Logger::Warn("LL Config File <{}> not found. Creating configuration file...", LITELOADER_CONFIG_FILE);
            filesystem::create_directories(filesystem::path(LITELOADER_CONFIG_FILE).remove_filename().u8string());
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