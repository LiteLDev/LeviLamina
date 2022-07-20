#include <Utils/NetworkHelper.h>
#include <third-party/Nlohmann/json.hpp>
#include <Utils/WinHelper.h>
#include <Utils/DbgHelper.h>
#include <EventAPI.h>
#include <ScheduleAPI.h>
#include <MC/PropertiesSettings.hpp>
#include <LiteLoader/Header/ServerAPI.h>
#include "Main/LiteLoader.h"
#include <Utils/StringHelper.h>
#include <MC/ServerNetworkHandler.hpp>
#include <MC/Level.hpp>
#include <MC/ServerPlayer.hpp>

#define BSTATJSON(key, val)                       \
    if (json.find(key) != json.end()) {           \
        const nlohmann::json& out = json.at(key); \
        out.get_to(val);                          \
    }

namespace regkey {

wstring randStr(const int len) {
    wstring str;
    for (int i = 0; i < len; i++) {
        str += (wchar_t)(rand() % 26 + 'a');
    }
    return str;
}

bool create(string UUID) {
    HKEY hRoot = HKEY_CURRENT_USER;
    HKEY hKey;
    DWORD dwDisposition = REG_OPENED_EXISTING_KEY;
    LONG lRet = ::RegCreateKeyEx(hRoot, L"SOFTWARE\\LiteLoaderBDS", 0, NULL,
                                 REG_OPTION_NON_VOLATILE, KEY_ALL_ACCESS, NULL, &hKey, &dwDisposition);
    if (lRet != ERROR_SUCCESS)
        return false;
    auto uuid = str2wstr(UUID).c_str();
    lRet = ::RegSetValueEx(hKey, randStr(8).c_str(), 0, REG_SZ, (BYTE*)uuid, sizeof(wchar_t) * (DWORD)(wcslen(uuid) + 1));
    if (lRet == ERROR_SUCCESS) {
    }
    ::RegCloseKey(hKey);
    return true;
}

unordered_set<string> getAllValue() {
    unordered_set<string> result;
    HKEY hRoot = HKEY_CURRENT_USER;
    HKEY hKey;
    DWORD dwDisposition = REG_OPENED_EXISTING_KEY;
    LONG lRet = ::RegCreateKeyEx(hRoot, L"SOFTWARE\\LiteLoaderBDS", 0, NULL,
                                 REG_OPTION_NON_VOLATILE, KEY_ALL_ACCESS, NULL, &hKey, &dwDisposition);
    if (lRet != ERROR_SUCCESS)
        return result;
    DWORD dwIndex = 0;
    DWORD dwValueNameSize = MAX_PATH;
    DWORD dwValueSize = MAX_PATH;
    wchar_t* lpValueName = new wchar_t[dwValueNameSize];
    wchar_t* lpValue = new wchar_t[dwValueSize];
    while (::RegEnumValue(hKey, dwIndex, lpValueName, &dwValueNameSize, NULL, NULL, (LPBYTE)lpValue, &dwValueSize) == ERROR_SUCCESS) {
        result.insert(wstr2str(lpValue));
        dwValueNameSize = MAX_PATH;
        dwValueSize = MAX_PATH;
        dwIndex++;
    }
    delete[] lpValueName;
    delete[] lpValue;
    ::RegCloseKey(hKey);
    return result;
}
} // namespace regkey


namespace bstatsettings {

namespace uuid {
static std::random_device rd;
static std::mt19937 gen(rd());
static std::uniform_int_distribution<> dis(0, 15);
static std::uniform_int_distribution<> dis2(8, 11);

std::string generateUuidV4() {
    std::stringstream ss;
    int i;
    ss << std::hex;
    for (i = 0; i < 8; i++) {
        ss << dis(gen);
    }
    ss << "-";
    for (i = 0; i < 4; i++) {
        ss << dis(gen);
    }
    ss << "-4";
    for (i = 0; i < 3; i++) {
        ss << dis(gen);
    }
    ss << "-";
    ss << dis2(gen);
    for (i = 0; i < 3; i++) {
        ss << dis(gen);
    }
    ss << "-";
    for (i = 0; i < 12; i++) {
        ss << dis(gen);
    };
    return ss.str();
}
} // namespace uuid

bool enable = true;
std::string serverUuid = uuid::generateUuidV4();

nlohmann::json globaljson() {
    nlohmann::json json;
    json["enabled"] = enable;
    json["serverUuid"] = serverUuid;
    return json;
}

void initjson(nlohmann::json json) {
    BSTATJSON("enabled", enable);
    BSTATJSON("serverUuid", serverUuid);
}

void writeDefaultConfig(const std::string& fileName) {
    std::ofstream file(fileName);
    if (!file.is_open()) {
        logger.error("Can't open file {}", fileName);
        return;
    }
    auto json = globaljson();
    regkey::create(serverUuid);
    file << "//bStats collects some data for plugin authors like how many servers are using their plugins.\n";
    file << "//To honor their work, you should not disable it.\n";
    file << "//This has nearly no effect on the server performance!Check out https://bStats.org/ to learn more\n";
    file << json.dump(4);
    file.close();
}

void writeConfig(const std::string& fileName) {
    std::ofstream file(fileName);
    if (!file.is_open()) {
        logger.error("Can't open file {}", fileName);
        return;
    }
    auto json = globaljson();
    file << "//bStats collects some data for plugin authors like how many servers are using their plugins.\n";
    file << "//To honor their work, you should not disable it.\n";
    file << "//This has nearly no effect on the server performance!Check out https://bStats.org/ to learn more\n";
    file << json.dump(4);
    file.close();
}

void loadConfigFromJson(const std::string& fileName) {
    std::ifstream file(fileName);
    if (!file.is_open()) {
        logger.error("Can't open file {}", fileName);
        return;
    }
    auto json = nlohmann::json::parse(file, nullptr, true, true);
    //file >> json;
    //file.close();
    initjson(json);
    writeConfig(fileName);
}

void reloadJson(const std::string& fileName) {
    std::ofstream file(fileName);
    if (file) {
        file << "//bStats collects some data for plugin authors like how many servers are using their plugins.\n";
        file << "//To honor their work, you should not disable it.\n";
        file << "//This has nearly no effect on the server performance!Check out https://bStats.org/ to learn more\n";
        file << globaljson().dump(4);
    } else {
        logger.error("Configuration File Creation failed!");
    }
    file.close();
}
} // namespace bstatsettings

namespace bstats {

static bool isOnlineAuth;
static int playerAmount;
static unordered_map<string, int> playerPlatList;

int getCpuCoreCount() {
    SYSTEM_INFO sysinfo;
    GetSystemInfo(&sysinfo);
    return sysinfo.dwNumberOfProcessors;
}

string getOsArch() {
    SYSTEM_INFO sysinfo;
    GetSystemInfo(&sysinfo);
    return sysinfo.wProcessorArchitecture == PROCESSOR_ARCHITECTURE_AMD64 ? "x64" : "x86";
}


string getOsName() {
    return IsWineEnvironment() ? "Linux" : "Windows";
}


nlohmann::json addSimplePie(string key, string val) {
    nlohmann::json json;
    json["chartId"] = key;
    nlohmann::json json2;
    json2["value"] = val;
    json["data"] = json2;
    return json;
}

nlohmann::json addAdvancedPie(string key, unordered_map<string, int> val) {
    nlohmann::json json;
    json["chartId"] = key;
    nlohmann::json json2;
    nlohmann::json valuesBuilder;
    for (auto [String, Integer] : val) {
        valuesBuilder[String] = Integer;
    }
    json2["values"] = valuesBuilder;
    json["data"] = json2;
    return json;
}

nlohmann::json getCustomCharts() {
    nlohmann::json pluginsjson;

    pluginsjson.emplace_back(addSimplePie("liteloaderbds_version", LL::getLoaderVersion().toString(false)));
    pluginsjson.emplace_back(addSimplePie("bds_version", LL::getBdsVersion().substr(1)));
    pluginsjson.emplace_back(addSimplePie("xbox_auth", isOnlineAuth ? "Required" : "Not required"));
    pluginsjson.emplace_back(addAdvancedPie("player_platform", playerPlatList));

    return pluginsjson;
}

nlohmann::json getPluginData() {
    nlohmann::json json;
    json["pluginName"] = "LiteLoaderBDS";
    json["customCharts"] = getCustomCharts();
    return json;
}


string createJson() {
    nlohmann::json json;
    // service
    json["service"]["id"] = 15847;
    json["service"]["customCharts"] = getCustomCharts();
    json["serverUUID"] = bstatsettings::serverUuid;
    json["playerAmount"] = playerAmount;
    json["osName"] = getOsName();
    json["osArch"] = getOsArch();
    json["osVersion"] = getOsArch();
    json["coreCount"] = getCpuCoreCount();
    return json.dump();
}


void submitTask() {
    playerAmount = Global<ServerNetworkHandler>->_getActiveAndInProgressPlayerCount(mce::UUID::EMPTY);
    playerPlatList.clear();
    for (auto sp : Level::getAllPlayers()) {
        auto OS = sp->getDeviceName();
        if (playerPlatList.find(OS) == playerPlatList.end()) {
            playerPlatList.emplace(OS, 1);
        } else {
            playerPlatList.emplace(OS, playerPlatList[OS] + 1);
        }
    }

    std::thread a([] {
        auto json = createJson();
        httplib::Headers headers = {
            {"Accept-Encoding", "gzip"},
            {"Accept", "application/json"},
            {"Connection", "close"},
            {"Content-Length", std::to_string(json.size())},
            {"Content-Type", "application/json"},
            {"User-Agent", "Metrics-Service/1"}};
        HttpPost(
            "https://bstats.org/api/v2/data/bukkit", headers, json, "", [](int a1, string a2) {}, 10);
    });

    a.detach();
}

void createJsonConfig() {
    if (!std::filesystem::exists("plugins/bStats"))
        std::filesystem::create_directories("plugins/bStats");
    if (std::filesystem::exists("plugins/bStats/config.json")) {
        try {
            bstatsettings::loadConfigFromJson("plugins/bStats/config.json");
        } catch (std::exception& e) {
            logger.error("Config File isInvalid, Err {}", e.what());
        } catch (...) {
            logger.error("Config File isInvalid");
        }
    } else {
        logger.info("Config with default values created");
        bstatsettings::writeDefaultConfig("plugins/bStats/config.json");
    }
}

void configInit() {
    createJsonConfig();
    auto serveruuidlist = regkey::getAllValue();
    if (!serveruuidlist.count(bstatsettings::serverUuid)) {
        auto newUUID = bstatsettings::uuid::generateUuidV4();
        regkey::create(newUUID);
        bstatsettings::serverUuid = newUUID;
        bstatsettings::reloadJson("plugins/bStats/config.json");
    }
}

float randomFloat() {
    return rand() % (999 + 1) / (float)(999 + 1);
}

void registerBStat() {
    configInit();
    if (bstatsettings::enable) {
        Event::ServerStartedEvent::subscribe([](const Event::ServerStartedEvent& ev) {
            srand((unsigned int)time(NULL));
            isOnlineAuth = Global<PropertiesSettings>->useOnlineAuthentication();
            long initialDelay = (long)((1000 * 60 * (3 + randomFloat() * 3)) / 50);
            long secondDelay = (long)((1000 * 60 * (randomFloat() * 30)) / 50);
            Schedule::repeat(submitTask, initialDelay);
            Schedule::delayRepeat(submitTask, static_cast<unsigned long long>(initialDelay) + secondDelay, (1000 * 60 * 30) / 50);
            return true;
        });
    }
}

} // namespace bsata