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

    void inline to_json(nlohmann::json &j, const LLConfig &conf) {
        j = nlohmann::json{
                {"DebugMode", conf.debugMode},
                {"ColorLog",  conf.colorLog},
                {"LogLevel",  conf.logLevel},
                {"Language",  conf.language},
                {"Modules",   {
                                      {"AutoUpgrade", {{"enabled", conf.enableAutoUpdate}}},
                                      {"CrashLogger", {{"enabled", conf.enableCrashLogger}, {"path", conf.crashLoggerPath}}},
                                      {"SimpleServerLogger", {{"enabled", conf.enableSimpleServerLogger}}},
                                      {"FixDisconnectBug", {{"enabled", conf.enableFixDisconnectBug}}},
                                      {"UnlockCmd", {{"enabled", conf.enableUnlockCmd}}},
                                      {"FixListenPort", {{"enabled", conf.enableFixListenPort}}},
                                      {"AntiGive", {{"enabled", conf.enableAntiGive}}}
                              }}};
    }

    void inline from_json(const nlohmann::json &j, LLConfig &conf) {
        conf.debugMode = j.value("DebugMode", false);
        if (LL::commandLineOption.noColorOption)
            conf.colorLog = false;
        else
            conf.colorLog = j.value("ColorLog", true);
        conf.logLevel = j.value("LogLevel", 4);
        conf.language = j.value("Language", "en");

        if (j.find("Modules") != j.end()) {
            const nlohmann::json &modules = j.at("Modules");

            if (modules.find("AutoUpgrade") != modules.end()) {
                const nlohmann::json &update = modules.at("AutoUpgrade");
                conf.enableAutoUpdate = update.value("enabled", true);
            }
            if (modules.find("CrashLogger") != modules.end()) {
                const nlohmann::json &cl = modules.at("CrashLogger");
                conf.enableCrashLogger = cl.value("enabled", true);
                conf.crashLoggerPath = cl.value("path", "plugins\\LiteLoader\\CrashLogger_Daemon.exe");
            }
            if (modules.find("SimpleServerLogger") != modules.end()) {
                const nlohmann::json &cl = modules.at("SimpleServerLogger");
                conf.enableSimpleServerLogger = cl.value("enabled", true);
            }
            if (modules.find("FixDisconnectBug") != modules.end()) {
                const nlohmann::json &dis = modules.at("FixDisconnectBug");
                conf.enableFixDisconnectBug = dis.value("enabled", true);
            }
            if (modules.find("FixListenPort") != modules.end()) {
                const nlohmann::json &listen = modules.at("FixListenPort");
                conf.enableFixListenPort = listen.value("enabled", false);
            }
            if (modules.find("UnlockCmd") != modules.end()) {
                const nlohmann::json &listen = modules.at("UnlockCmd");
                conf.enableUnlockCmd = listen.value("enabled", false);
            }
            if (modules.find("AntiGive") != modules.end()) {
                const nlohmann::json &listen = modules.at("AntiGive");
                conf.enableAntiGive = listen.value("enabled", true);
            }
        }
    }
} // namespace LL


bool LL::LoadLLConfig() {
    try {
        auto content = ReadAllFile(LITELOADER_CONFIG_FILE);
        if (!content) {
            logger.warn("LL Config File <{}> not found. Creating configuration file...", LITELOADER_CONFIG_FILE);
            filesystem::create_directories(filesystem::path(LITELOADER_CONFIG_FILE).remove_filename().u8string());
            std::ofstream of(LITELOADER_CONFIG_FILE);
            if (of) {
                of << nlohmann::json(LL::globalConfig).dump(4);
            } else {
                logger.error("Configuration File Creation failed!");
            }
        } else {
            auto out = nlohmann::json::parse(*content, nullptr, true, true);
            LL::globalConfig = out;
            std::ofstream of(LITELOADER_CONFIG_FILE);
            if (of) {
                of << nlohmann::json(LL::globalConfig).dump(4);
            } else {
                logger.error("Configuration File Creation failed!");
            }
        }
    }
    catch (const nlohmann::json::exception &e) {
        logger.error("Fail to parse config file <{}> !", LITELOADER_CONFIG_FILE);
        logger.error("{}", e.what());
        return false;
    }
    catch (...) {
        logger.error("Fail to load config file <{}> !", LITELOADER_CONFIG_FILE);
        return false;
    }
    return true;
}