#include <filesystem>
#include <fstream>
#include <Nlohmann/json.hpp>
#include <Utils/FileHelper.h>
#include <Main/Config.h>
#include <Main/LiteLoader.h>
#include <LoggerAPI.h>

using namespace std;

namespace LL {

LIAPI LLConfig globalConfig;
LIAPI LL::CommandLineOption commandLineOption;

void inline to_json(nlohmann::json& j, const LLConfig& conf) {
    // clang-format off
    j = nlohmann::json{
        {"DebugMode", conf.debugMode},
        {"ColorLog", conf.colorLog},
        {"Version", conf.version},
        {"LogLevel", conf.logLevel},
        {"Language", conf.language},
        {"ScriptEngine", {
            {"enabled", conf.enableScriptEngine},
            {"alwaysLaunch", conf.alwaysLaunchScriptEngine}
        }},
        {"Modules", {
            {"CrashLogger", {
                {"enabled", conf.enableCrashLogger},
                {"path", conf.crashLoggerPath}
            }},
            {"SimpleServerLogger", {
                {"enabled", conf.enableSimpleServerLogger}
            }},
            {"FixDisconnectBug", {
                {"enabled", conf.enableFixDisconnectBug}
            }},
            {"UnlockCmd", {
                {"enabled", conf.enableUnlockCmd}
            }},
            {"AddonsHelper", {
                {"enabled", conf.enableAddonsHelper},
                {"autoInstallPath", conf.addonsInstallPath}
            }},
            {"FixListenPort", {
                {"enabled", conf.enableFixListenPort}
            }},
            {"AntiGive", {
                {"enabled", conf.enableAntiGive},
                {"command", conf.antiGiveCommand}
            }},
            {"ErrorStackTraceback", {
                {"enabled", conf.enableErrorStackTraceback},
                {"cacheSymbol", conf.cacheErrorStackTracebackSymbol}
            }},
            {"UnoccupyPort19132", {
                {"enabled", conf.enableUnoccupyPort19132}
            }},
            {"CheckRunningBDS", {
                {"enabled", conf.enableCheckRunningBDS}
            }},
            {"WelcomeText", {
                {"enabled", conf.enableWelcomeText}
            }},
            {"FixMcBug", {
                {"enabled", conf.enableFixMcBug}
            }},
            {"OutputFilter", {
                {"enabled", conf.enableOutputFilter},
                {"onlyFilterConsoleOutput", conf.onlyFilterConsoleOutput},
                {"filterRegex", conf.outputFilterRegex}
            }},
            {"EconomyCore", {
                {"enabled", conf.enableEconomyCore}
            }},
            {"ForceUtf8Input", {
                {"enabled", conf.enableForceUtf8Input}
            }},
            {"TpdimCommand", {
                {"enabled", conf.enableTpdimCommand}
            }},
            {"FixBDSCrash", {
                {"enabled", conf.enableFixBDSCrash}
            }},
            {"ParticleAPI", {
                {"enabled", conf.enableParticleAPI}
            }},
             {"PermissionAPI", {
                {"enabled", conf.enablePermissionAPI}
            }},
        }}
    };
    // clang-format on
}

void inline from_json(const nlohmann::json& j, LLConfig& conf) {
    conf.debugMode = j.value("DebugMode", false);
    if (LL::commandLineOption.noColorOption)
        conf.colorLog = false;
    else
        conf.colorLog = j.value("ColorLog", true);
    conf.version = j.value("Version", 1);
    conf.logLevel = j.value("LogLevel", 4);
    conf.language = j.value("Language", "system");

    if (j.find("ScriptEngine") != j.end()) {
        const nlohmann::json& scriptEngine = j.at("ScriptEngine");
        conf.enableScriptEngine = scriptEngine.value("enabled", true);

        if (scriptEngine.find("alwaysLaunch") != scriptEngine.end())
            conf.alwaysLaunchScriptEngine = scriptEngine.value("alwaysLaunch", false);
    }

    if (j.find("Modules") != j.end()) {
        const nlohmann::json& modules = j.at("Modules");

        if (modules.find("CrashLogger") != modules.end()) {
            const nlohmann::json& setting = modules.at("CrashLogger");
            conf.enableCrashLogger = setting.value("enabled", true);
            conf.crashLoggerPath = setting.value("path", "plugins\\LiteLoader\\CrashLogger_Daemon.exe");
        }
        if (modules.find("SimpleServerLogger") != modules.end()) {
            const nlohmann::json& setting = modules.at("SimpleServerLogger");
            conf.enableSimpleServerLogger = setting.value("enabled", true);
        }
        if (modules.find("FixDisconnectBug") != modules.end()) {
            const nlohmann::json& setting = modules.at("FixDisconnectBug");
            conf.enableFixDisconnectBug = setting.value("enabled", true);
        }
        if (modules.find("FixListenPort") != modules.end()) {
            const nlohmann::json& setting = modules.at("FixListenPort");
            conf.enableFixListenPort = setting.value("enabled", false);
        }
        if (modules.find("UnlockCmd") != modules.end()) {
            const nlohmann::json& setting = modules.at("UnlockCmd");
            conf.enableUnlockCmd = setting.value("enabled", true);
        }
        if (modules.find("AddonsHelper") != modules.end()) {
            const nlohmann::json& setting = modules.at("AddonsHelper");
            conf.enableAddonsHelper = setting.value("enabled", true);
            conf.addonsInstallPath = setting.value("autoInstallPath", "plugins/AddonsHelper");
        }
        if (modules.find("AntiGive") != modules.end()) {
            const nlohmann::json& setting = modules.at("AntiGive");
            conf.enableAntiGive = setting.value("enabled", true);
            conf.antiGiveCommand = setting.value("command", "kick {player}");
        }
        if (modules.find("UnoccupyPort19132") != modules.end()) {
            const nlohmann::json& setting = modules.at("UnoccupyPort19132");
            conf.enableUnoccupyPort19132 = setting.value("enabled", true);
        }
        if (modules.find("CheckRunningBDS") != modules.end()) {
            const nlohmann::json& setting = modules.at("CheckRunningBDS");
            conf.enableCheckRunningBDS = setting.value("enabled", true);
        }
        if (modules.find("WelcomeText") != modules.end()) {
            const nlohmann::json& setting = modules.at("WelcomeText");
            conf.enableWelcomeText = setting.value("enabled", true);
        }
        if (modules.find("FixMcBug") != modules.end()) {
            const nlohmann::json& setting = modules.at("FixMcBug");
            conf.enableFixMcBug = setting.value("enabled", true);
        }
        if (modules.find("FixBroadcastBug") != modules.end()) {
            const nlohmann::json& setting = modules.at("FixBroadcastBug");
            conf.enableFixBroadcastBug = setting.value("enabled", true);
        }
        if (modules.find("DisableAutoCompactionLog") != modules.end()) {
            const nlohmann::json& setting = modules.at("DisableAutoCompactionLog");
            conf.disableAutoCompactionLog = setting.value("enabled", true);
        }
        if (modules.find("ErrorStackTraceback") != modules.end()) {
            const nlohmann::json& setting = modules.at("ErrorStackTraceback");
            conf.enableErrorStackTraceback = setting.value("enabled", true);
            conf.cacheErrorStackTracebackSymbol = setting.value("cacheSymbol", false);
        }
        if (modules.find("OutputFilter") != modules.end()) {
            const nlohmann::json& setting = modules.at("OutputFilter");
            conf.enableOutputFilter = setting.value("enabled", false);
            conf.onlyFilterConsoleOutput = setting.value("onlyFilterConsoleOutput", true);
            conf.outputFilterRegex = setting.value("filterRegex", std::vector<std::string>());
        }
        if (modules.find("EconomyCore") != modules.end()) {
            const nlohmann::json& setting = modules.at("EconomyCore");
            conf.enableEconomyCore = setting.value("enabled", true);
        }
        if (modules.find("TpdimCommand") != modules.end()) {
            const nlohmann::json& setting = modules.at("TpdimCommand");
            conf.enableTpdimCommand = setting.value("enabled", true);
        }
        if (modules.find("ForceUtf8Input") != modules.end()) {
            const nlohmann::json& setting = modules.at("ForceUtf8Input");
            conf.enableForceUtf8Input = setting.value("enabled", true);
        }
        if (modules.find("FixBDSCrash") != modules.end()) {
            const nlohmann::json& setting = modules.at("FixBDSCrash");
            conf.enableFixBDSCrash = setting.value("enabled", false);
        }
        if (modules.find("ParticleAPI") != modules.end()) {
            const nlohmann::json& setting = modules.at("ParticleAPI");
            conf.enableParticleAPI = setting.value("enabled", false);
        }
        if (modules.find("PermissionAPI") != modules.end()) {
            const nlohmann::json& setting = modules.at("PermissionAPI");
            conf.enablePermissionAPI = setting.value("enabled", false);
        }
    }
}
} // namespace LL

inline bool SaveConfig(nlohmann::json& config) {
    std::ofstream of(LITELOADER_CONFIG_FILE);
    if (of) {
        of << config.dump(4);
        return true;
    } else {
        logger.error(tr("ll.config.save.fail"));
        return false;
    }
}

/* deprecated

void ChooseLanguage() { 
    std::unordered_map<std::string, std::string> languageList = {{"en", "English"}, {"zh_CN", "简体中文"}, {"zh_TW", "繁体中文"}, {"ja", "日本語"}, {"ru", "Русский"}, {"id", "Indonesian"}, {"th", "ไทย"}, {"it", "Italiano"}, {"vi", "tiếng việt"}};
    logger.info("Please select your language first");
    std::unordered_map<unsigned short, std::string> languages;
    unsigned short languageCode = 0;
    logger.info("0. Default(System)");
    for (std::filesystem::directory_entry i : std::filesystem::directory_iterator("plugins/LiteLoader/LangPack")) {
        languageCode++;
        std::string langFile = i.path().filename().string();
        std::string lang = langFile.replace(langFile.find(".json"), 5,"");
        languages[languageCode] = lang;
        logger.info("{}. {}", languageCode, languageList[lang]);
    }
    unsigned short selected = 0;
    std::cout << "(Number)> ";
    std::cin >> selected;
    std::cin.ignore();
    if (!languages[selected].empty()) {
        LL::globalConfig.language = languages[selected];
    }
}
*/

bool LL::LoadLLConfig() {
    try {
        auto content = ReadAllFile(LITELOADER_CONFIG_FILE);

        if (!content || content.value().empty()) {
            logger.warn(tr("ll.config.creating", LITELOADER_CONFIG_FILE));
            // if (IsWineEnvironment()) {
            //     ChooseLanguage();
            // }
            filesystem::create_directories(filesystem::path(LITELOADER_CONFIG_FILE).remove_filename().u8string());
            LL::SaveLLConfig();
        } else {
            try {
                auto out = nlohmann::json::parse(*content, nullptr, false, true);
                LL::globalConfig = out;
                auto config = nlohmann::json(LL::globalConfig);
                if (out != config) {
                    logger.warn(tr("ll.config.warning.configOutdated", LITELOADER_CONFIG_FILE));
                    logger.warn(tr("ll.config.updating"));
                    LL::globalConfig.language = "system";
                    config = nlohmann::json(LL::globalConfig);
                    return SaveConfig(config);
                }
                return true;
            } catch (const nlohmann::json::exception& e) {
                logger.error("Fail to parse config file <{}> !", LITELOADER_CONFIG_FILE);
                logger.error("{}", e.what());
                logger.error("Using default config file...");
                return LL::SaveLLConfig();
            }
        }
    } catch (const nlohmann::json::exception& e) {
        logger.error("Fail to parse config file <{}> !", LITELOADER_CONFIG_FILE);
        logger.error("{}", e.what());
        return false;
    } catch (...) {
        logger.error("Fail to load config file <{}> !", LITELOADER_CONFIG_FILE);
        return false;
    }
    return true;
}

bool LL::SaveLLConfig() {
    auto config = nlohmann::json(LL::globalConfig);
    return SaveConfig(config);
}
