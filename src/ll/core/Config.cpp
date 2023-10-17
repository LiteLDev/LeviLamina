#include "ll/core/Config.h"

#include <filesystem>
#include <fstream>

#include "Nlohmann/json.hpp"

#include "ll/api/LoggerAPI.h"
#include "ll/api/utils/FileHelper.h"

#include "ll/core/LeviLamina.h"


namespace ll {

LLConfig              globalConfig;
LLRuntimeConfig       globalRuntimeConfig;
ll::CommandLineOption commandLineOption;

void inline to_json(nlohmann::json& j, LLConfig const& conf) {
    j = nlohmann::json{
        {"DebugMode",              conf.debugMode                                                                         },
        {"ColorLog",               conf.colorLog                                                                          },
        {"Version",                conf.version                                                                           },
        {"LogLevel",               conf.logLevel                                                                          },
        {"Language",               conf.language                                                                          },
        {"ScriptEngine",           {{"enabled", conf.enableScriptEngine}, {"alwaysLaunch", conf.alwaysLaunchScriptEngine}}},
        {"Modules",
         {
             {"CrashLogger", {{"enabled", conf.enableCrashLogger}, {"path", conf.crashLoggerPath}}},
             {"SimpleServerLogger", {{"enabled", conf.enableSimpleServerLogger}}},
             {"UnlockCmd", {{"enabled", conf.enableUnlockCmd}}},
             {"AddonsHelper", {{"enabled", conf.enableAddonsHelper}, {"autoInstallPath", conf.addonsInstallPath}}},
             {"FixListenPort", {{"enabled", conf.enableFixListenPort}}},
             {"ErrorStackTraceback",
              {{"enabled", conf.enableErrorStackTraceback}, {"cacheSymbol", conf.cacheErrorStackTracebackSymbol}}},
             {"UnoccupyPort19132", {{"enabled", conf.enableUnoccupyPort19132}}},
             {"CheckRunningBDS", {{"enabled", conf.enableCheckRunningBDS}}},
             {"WelcomeText", {{"enabled", conf.enableWelcomeText}}},
             {"FixMcBug", {{"enabled", conf.enableFixMcBug}}},
             {"OutputFilter",
              {{"enabled", conf.enableOutputFilter},
               {"onlyFilterConsoleOutput", conf.onlyFilterConsoleOutput},
               {"filterRegex", conf.outputFilterRegex}}},
             {"EconomyCore", {{"enabled", conf.enableEconomyCore}}},
             {"ForceUtf8Input", {{"enabled", conf.enableForceUtf8Input}}},
             {"TpdimCommand", {{"enabled", conf.enableTpdimCommand}}},
             {"FixBDSCrash", {{"enabled", conf.enableFixBDSCrash}}},
             {"ParticleAPI", {{"enabled", conf.enableParticleAPI}}},
             {"FixAbility", {{"enabled", conf.enableFixAbility}}},
             {"FixBroadcastBug", {{"enabled", conf.enableFixBroadcastBug}}},
             {"DisableAutoCompactionLog", {{"enabled", conf.disableAutoCompactionLog}}},
         }                                                                                                                },
        {"ResourcePackEncryption", conf.resourcePackEncryptionMap                                                         },
    };
}

void inline from_json(nlohmann::json const& j, LLConfig& conf) {
    conf.debugMode = j.value("DebugMode", false);
    if (ll::commandLineOption.noColorOption) conf.colorLog = false;
    else conf.colorLog = j.value("ColorLog", true);
    conf.version                   = j.value("Version", 1);
    conf.logLevel                  = j.value("LogLevel", 4);
    conf.language                  = j.value("Language", "system");
    conf.resourcePackEncryptionMap = j.value(
        "ResourcePackEncryption",
        std::map<std::string, std::string>{
            {"UUID", "KEY"}
    }
    );

    auto& tempMap = conf.resourcePackEncryptionMap;
    for (auto const& x : tempMap) {
        std::string tempUuid = x.first;
        transform(tempUuid.begin(), tempUuid.end(), tempUuid.begin(), ::toupper);
        tempMap.erase(x.first);
        tempMap.insert({tempUuid, x.second});
    }

    if (j.find("ScriptEngine") != j.end()) {
        nlohmann::json const& scriptEngine = j.at("ScriptEngine");
        conf.enableScriptEngine            = scriptEngine.value("enabled", true);

        if (scriptEngine.find("alwaysLaunch") != scriptEngine.end())
            conf.alwaysLaunchScriptEngine = scriptEngine.value("alwaysLaunch", false);
    }

    if (j.find("Modules") != j.end()) {
        nlohmann::json const& modules = j.at("Modules");

        if (modules.find("CrashLogger") != modules.end()) {
            nlohmann::json const& setting = modules.at("CrashLogger");
            conf.enableCrashLogger        = setting.value("enabled", true);
            conf.crashLoggerPath          = setting.value("path", "plugins\\LeviLamina\\CrashLogger.exe");
        }
        if (modules.find("SimpleServerLogger") != modules.end()) {
            nlohmann::json const& setting = modules.at("SimpleServerLogger");
            conf.enableSimpleServerLogger = setting.value("enabled", true);
        }
        if (modules.find("FixListenPort") != modules.end()) {
            nlohmann::json const& setting = modules.at("FixListenPort");
            conf.enableFixListenPort      = setting.value("enabled", false);
        }
        if (modules.find("UnlockCmd") != modules.end()) {
            nlohmann::json const& setting = modules.at("UnlockCmd");
            conf.enableUnlockCmd          = setting.value("enabled", true);
        }
        if (modules.find("AddonsHelper") != modules.end()) {
            nlohmann::json const& setting = modules.at("AddonsHelper");
            conf.enableAddonsHelper       = setting.value("enabled", true);
            conf.addonsInstallPath        = setting.value("autoInstallPath", "plugins/AddonsHelper");
        }
        if (modules.find("UnoccupyPort19132") != modules.end()) {
            nlohmann::json const& setting = modules.at("UnoccupyPort19132");
            conf.enableUnoccupyPort19132  = setting.value("enabled", true);
        }
        if (modules.find("CheckRunningBDS") != modules.end()) {
            nlohmann::json const& setting = modules.at("CheckRunningBDS");
            conf.enableCheckRunningBDS    = setting.value("enabled", true);
        }
        if (modules.find("WelcomeText") != modules.end()) {
            nlohmann::json const& setting = modules.at("WelcomeText");
            conf.enableWelcomeText        = setting.value("enabled", true);
        }
        if (modules.find("FixMcBug") != modules.end()) {
            nlohmann::json const& setting = modules.at("FixMcBug");
            conf.enableFixMcBug           = setting.value("enabled", true);
        }
        if (modules.find("FixBroadcastBug") != modules.end()) {
            nlohmann::json const& setting = modules.at("FixBroadcastBug");
            conf.enableFixBroadcastBug    = setting.value("enabled", true);
        }
        if (modules.find("DisableAutoCompactionLog") != modules.end()) {
            nlohmann::json const& setting = modules.at("DisableAutoCompactionLog");
            conf.disableAutoCompactionLog = setting.value("enabled", true);
        }
        if (modules.find("ErrorStackTraceback") != modules.end()) {
            nlohmann::json const& setting       = modules.at("ErrorStackTraceback");
            conf.enableErrorStackTraceback      = setting.value("enabled", true);
            conf.cacheErrorStackTracebackSymbol = setting.value("cacheSymbol", false);
        }
        if (modules.find("OutputFilter") != modules.end()) {
            nlohmann::json const& setting = modules.at("OutputFilter");
            conf.enableOutputFilter       = setting.value("enabled", false);
            conf.onlyFilterConsoleOutput  = setting.value("onlyFilterConsoleOutput", true);
            conf.outputFilterRegex        = setting.value("filterRegex", std::vector<std::string>());
        }
        if (modules.find("EconomyCore") != modules.end()) {
            nlohmann::json const& setting = modules.at("EconomyCore");
            conf.enableEconomyCore        = setting.value("enabled", true);
        }
        if (modules.find("TpdimCommand") != modules.end()) {
            nlohmann::json const& setting = modules.at("TpdimCommand");
            conf.enableTpdimCommand       = setting.value("enabled", true);
        }
        if (modules.find("ForceUtf8Input") != modules.end()) {
            nlohmann::json const& setting = modules.at("ForceUtf8Input");
            conf.enableForceUtf8Input     = setting.value("enabled", true);
        }
        if (modules.find("FixBDSCrash") != modules.end()) {
            nlohmann::json const& setting = modules.at("FixBDSCrash");
            conf.enableFixBDSCrash        = setting.value("enabled", false);
        }
        if (modules.find("ParticleAPI") != modules.end()) {
            nlohmann::json const& setting = modules.at("ParticleAPI");
            conf.enableParticleAPI        = setting.value("enabled", false);
        }
        if (modules.find("FixAbility") != modules.end()) {
            nlohmann::json const& setting = modules.at("FixAbility");
            conf.enableFixAbility         = setting.value("enabled", true);
        }
    }
}
} // namespace ll

inline bool SaveConfig(nlohmann::json& config) {
    std::ofstream of(LL_CONFIG_FILE);
    if (of) {
        of << config.dump(4);
        return true;
    } else {
        ll::logger.error("ll.config.save.fail"_tr);
        return false;
    }
}

bool ll::LoadLLConfig() {
    try {
        auto content = ReadAllFile(LL_CONFIG_FILE);

        if (!content || content.value().empty()) {
            ll::logger.warn(tr("ll.config.creating", LL_CONFIG_FILE));
            // if (IsWineEnvironment()) {
            //     ChooseLanguage();
            // }
            std::filesystem::create_directories(std::filesystem::path(LL_CONFIG_FILE).remove_filename());
            ll::SaveLLConfig();
        } else {
            try {
                auto out         = nlohmann::json::parse(*content, nullptr, false, true);
                ll::globalConfig = out;
                auto config      = nlohmann::json(ll::globalConfig);
                if (out != config) {
                    ll::logger.warn(tr("ll.config.warning.configOutdated", LL_CONFIG_FILE));
                    ll::logger.warn("ll.config.updating"_tr);
                    ll::globalConfig.language = "system";
                    config                    = nlohmann::json(ll::globalConfig);
                    return SaveConfig(config);
                }
                return true;
            } catch (nlohmann::json::exception const& e) {
                ll::logger.error("Fail to parse config file <{}> !", LL_CONFIG_FILE);
                ll::logger.error("{}", e.what());
                ll::logger.error("Using default config file...");
                return ll::SaveLLConfig();
            }
        }
    } catch (nlohmann::json::exception const& e) {
        ll::logger.error("Fail to parse config file <{}> !", LL_CONFIG_FILE);
        ll::logger.error("{}", e.what());
        return false;
    } catch (...) {
        ll::logger.error("Fail to load config file <{}> !", LL_CONFIG_FILE);
        return false;
    }
    return true;
}

bool ll::SaveLLConfig() {
    auto config = nlohmann::json(ll::globalConfig);
    return SaveConfig(config);
}
