#include <filesystem>
#include <fstream>
#include <Nlohmann/json.hpp>
#include <Utils/FileHelper.h>
#include <Main/Config.h>
#include <Main/LiteLoader.h>
#include <LoggerAPI.h>

using namespace std;

namespace LL {
    LLConfig globalConfig;
    LL::CommandLineOption commandLineOption;

    void inline to_json(nlohmann::json& j, const LLConfig& conf)
    {
        j = nlohmann::json{
                {"DebugMode", conf.debugMode},
                {"ColorLog",  conf.colorLog},
                {"LogLevel",  conf.logLevel},
                {"Language",  conf.language},
                {"ScriptEngine", {
                    {"enabled", conf.enableScriptEngine},
                    {"alwaysLaunch", conf.alwaysLaunchScriptEngine}
                }},
                {"Modules", {
                    {"AutoUpgrade", {{"enabled", conf.enableAutoUpdate}} },
                    {"CrashLogger", {
                        {"enabled", conf.enableCrashLogger},
                        {"path", conf.crashLoggerPath}
                    }},
                    {"SimpleServerLogger", {{"enabled", conf.enableSimpleServerLogger}}},
                    {"FixDisconnectBug", {{"enabled", conf.enableFixDisconnectBug}}},
                    {"UnlockCmd", {{"enabled", conf.enableUnlockCmd}}},
                    {"AddonsHelper", {
                        {"enabled", conf.enableAddonsHelper},
                        {"autoInstallPath", conf.addonsInstallPath}
                    }},
                    {"FixListenPort", {{"enabled", conf.enableFixListenPort}}},
                    {"AntiGive", {{"enabled", conf.enableAntiGive}}},
                    {"ErrorStackTraceback", {{"enabled", conf.enableErrorStackTraceback}}},
                    {"UnoccupyPort19132", {{"enabled", conf.enableUnoccupyPort19132}}},
                    {"CheckRunningBDS", {{"enabled", conf.enableCheckRunningBDS}}},
                    {"WelcomeText", {{"enabled", conf.enableWelcomeText}}}, 
                }
            }
        };
    }

    void inline from_json(const nlohmann::json& j, LLConfig& conf)
    {
        nlohmann::json::iterator val;
        conf.debugMode = j.value("DebugMode", false);
        if (LL::commandLineOption.noColorOption)
            conf.colorLog = false;
        else
            conf.colorLog = j.value("ColorLog", true);
        conf.logLevel = j.value("LogLevel", 4);
        conf.language = j.value("Language", "en");

        if ((val = j.find("ScriptEngine")) != j.end())
        {
            const nlohmann::json& scriptEngine = *val;
            conf.enableScriptEngine = scriptEngine.value("enabled", true);

            if ((val = scriptEngine.find("alwaysLaunch")) != scriptEngine.end())
            {
                const nlohmann::json& setting = *val;
                conf.alwaysLaunchScriptEngine = setting.value("alwaysLaunch", false);
            }
        }

        if ((val = j.find("Modules")) != j.end()) {
            const nlohmann::json& modules = *val;

            if ((val = modules.find("AutoUpgrade")) != modules.end())
            {
                const nlohmann::json& setting = *val;
                conf.enableAutoUpdate = setting.value("enabled", true);
            }
            if ((val = modules.find("CrashLogger")) != modules.end())
            {
                const nlohmann::json& setting = *val;
                conf.enableCrashLogger = setting.value("enabled", true);
                conf.crashLoggerPath = setting.value("path", "plugins\\LiteLoader\\CrashLogger_Daemon.exe");
            }
            if ((val = modules.find("SimpleServerLogger")) != modules.end())
            {
                const nlohmann::json& setting = *val;
                conf.enableSimpleServerLogger = setting.value("enabled", true);
            }
            if ((val = modules.find("FixDisconnectBug")) != modules.end())
            {
                const nlohmann::json& setting = *val;
                conf.enableFixDisconnectBug = setting.value("enabled", true);
            }
            if ((val = modules.find("FixListenPort")) != modules.end())
            {
                const nlohmann::json& setting = *val;
                conf.enableFixListenPort = setting.value("enabled", false);
            }
            if ((val = modules.find("UnlockCmd")) != modules.end())
            {
                const nlohmann::json& setting = *val;
                conf.enableUnlockCmd = setting.value("enabled", true);
            }
            if ((val = modules.find("AddonsHelper")) != modules.end())
            {
                const nlohmann::json& setting = *val;
                conf.enableAddonsHelper = setting.value("enabled", true);
                conf.addonsInstallPath = setting.value("autoInstallPath", "plugins/AddonsHelper");
            }
            if ((val = modules.find("AntiGive")) != modules.end())
            {
                const nlohmann::json& setting = *val;
                conf.enableAntiGive = setting.value("enabled", true);
            }
            if ((val = modules.find("UnoccupyPort19132")) != modules.end())
            {
                const nlohmann::json& setting = *val;
                conf.enableUnoccupyPort19132 = setting.value("enabled", true);
            }
            if ((val = modules.find("CheckRunningBDS")) != modules.end())
            {
                const nlohmann::json& setting = *val;
                conf.enableCheckRunningBDS = setting.value("enabled", true);
            }
            if ((val = modules.find("ErrorStackTraceback")) != modules.end()) {
                const nlohmann::json& setting = *val;
                conf.enableErrorStackTraceback = setting.value("enabled", true);
            }
            if ((val = modules.find("WelcomeText")) != modules.end()) {
                const nlohmann::json& setting = *val;
                conf.enableWelcomeText = setting.value("enabled", true);
            }
            if (modules.find("WelcomeText") != modules.end()) {
                const nlohmann::json& listen = modules.at("WelcomeText");
                conf.enableWelcomeText = listen.value("enabled", true);
            }
        }
    }
    } // namespace LL


bool LL::LoadLLConfig()
{
    try
    {
        auto content = ReadAllFile(LITELOADER_CONFIG_FILE);
        if (!content)
        {
            logger.warn("LL Config File <{}> not found. Creating configuration file...", LITELOADER_CONFIG_FILE);
            filesystem::create_directories(filesystem::path(LITELOADER_CONFIG_FILE).remove_filename().u8string());
            std::ofstream of(LITELOADER_CONFIG_FILE);
            if (of)
            {
                of << nlohmann::json(LL::globalConfig).dump(4);
            }
            else
            {
                logger.error("Configuration File Creation failed!");
            }
        }
        else
        {
            auto out = nlohmann::json::parse(*content, nullptr, true, true);
            LL::globalConfig = out;
            std::ofstream of(LITELOADER_CONFIG_FILE);
            if (of)
            {
                of << nlohmann::json(LL::globalConfig).dump(4);
            }
            else
            {
                logger.error("Configuration File Creation failed!");
            }
        }
    }
    catch (const nlohmann::json::exception& e)
    {
        logger.error("Fail to parse config file <{}> !", LITELOADER_CONFIG_FILE);
        logger.error("{}", e.what());
        return false;
    }
    catch (...)
    {
        logger.error("Fail to load config file <{}> !", LITELOADER_CONFIG_FILE);
        return false;
    }
    return true;
}