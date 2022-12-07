#include "liteloader/LiteLoader.h"
#include "llapi/EventAPI.h"
#include "llapi/Global.h"
#include "llapi/ScheduleAPI.h"
#include "llapi/ServerAPI.h"
#include "llapi/utils/WinHelper.h"
#include "llapi/utils/StringHelper.h"
#include "llapi/utils/NetworkHelper.h"
#include "llapi/mc/Level.hpp"
#include "llapi/mc/PropertiesSettings.hpp"
#include "llapi/mc/ServerNetworkHandler.hpp"
#include "llapi/mc/ServerPlayer.hpp"
#include <Nlohmann/json.hpp>

#define BSTATS_JSON(key, val)                     \
    if (json.find(key) != json.end()) {           \
        const nlohmann::json& out = json.at(key); \
        out.get_to(val);                          \
    }

using namespace std;

namespace regEdit {

bool create(const string& UUID) {
    HKEY hRoot = HKEY_CURRENT_USER;
    HKEY hKey;
    DWORD dwDisposition = REG_OPENED_EXISTING_KEY;
    LONG lRet = ::RegCreateKeyEx(hRoot, L"SOFTWARE\\LiteLoaderBDS", 0, nullptr,
                                 REG_OPTION_NON_VOLATILE, KEY_ALL_ACCESS, nullptr, &hKey, &dwDisposition);
    if (lRet != ERROR_SUCCESS)
        return false;
    auto uuid = str2wstr(UUID);
    lRet = ::RegSetValueEx(hKey, uuid.c_str(), 0, REG_SZ, nullptr, 0);
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
    LONG lRet = ::RegCreateKeyEx(hRoot, L"SOFTWARE\\LiteLoaderBDS", 0, nullptr,
                                 REG_OPTION_NON_VOLATILE, KEY_ALL_ACCESS, nullptr, &hKey, &dwDisposition);
    if (lRet != ERROR_SUCCESS)
        return result;

    // enum value from registry
    DWORD dwIndex = 0;
    DWORD dwValueNameSize = MAX_PATH;
    DWORD dwValueSize = MAX_PATH;
    auto* lpValueName = new wchar_t[dwValueNameSize];
    auto* lpValue = new wchar_t[dwValueSize];
    while (::RegEnumValue(hKey, dwIndex, lpValueName, &dwValueNameSize, nullptr, nullptr, (LPBYTE)lpValue, &dwValueSize) == ERROR_SUCCESS) {
        result.insert(wstr2str(lpValueName));
        dwValueNameSize = MAX_PATH;
        dwValueSize = MAX_PATH;
        dwIndex++;
    }
    delete[] lpValueName;
    delete[] lpValue;
    ::RegCloseKey(hKey);
    return result;
}
} // namespace regEdit


namespace bstatsSettings {

namespace uuid {

std::string generateUuidV4() {
    static std::random_device rd;
    static std::mt19937 gen(rd());
    static std::uniform_int_distribution<> dis(0, 15);
    static std::uniform_int_distribution<> dis2(8, 11);

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
    }
    return ss.str();
}
} // namespace uuid

bool enable = true;
std::string serverUuid = uuid::generateUuidV4(); // NOLINT(cert-err58-cpp)

nlohmann::json globalJson() {
    nlohmann::json json;
    json["enabled"] = enable;
    json["serverUuid"] = serverUuid;
    return json;
}

void initJson(nlohmann::json json) {
    BSTATS_JSON("enabled", enable)
    BSTATS_JSON("serverUuid", serverUuid)
}

void writeDefaultConfig(const std::string& fileName) {
    std::ofstream file(fileName);
    if (!file.is_open()) {
        ll::logger.error("Can't open file {}", fileName);
        return;
    }
    auto json = globalJson();
    regEdit::create(serverUuid);
    file << "//bStats collects some data for plugin authors like how many servers are using their plugins.\n";
    file << "//To honor their work, you should not disable it.\n";
    file << "//This has nearly no effect on the server performance!Check out https://bStats.org/ to learn more\n";
    file << json.dump(4);
    file.close();
}

void writeConfig(const std::string& fileName) {
    std::ofstream file(fileName);
    if (!file.is_open()) {
        ll::logger.error("Can't open file {}", fileName);
        return;
    }
    auto json = globalJson();
    file << "//bStats collects some data for plugin authors like how many servers are using their plugins.\n";
    file << "//To honor their work, you should not disable it.\n";
    file << "//This has nearly no effect on the server performance!Check out https://bStats.org/ to learn more\n";
    file << json.dump(4);
    file.close();
}

void loadConfigFromJson(const std::string& fileName) {
    std::ifstream file(fileName);
    if (!file.is_open()) {
        ll::logger.error("Can't open file {}", fileName);
        return;
    }
    auto json = nlohmann::json::parse(file, nullptr, true, true);
    // file >> json;
    // file.close();
    initJson(json);
    writeConfig(fileName);
}

void reloadJson(const std::string& fileName) {
    std::ofstream file(fileName);
    if (file) {
        file << "//bStats collects some data for plugin authors like how many servers are using their plugins.\n";
        file << "//To honor their work, you should not disable it.\n";
        file << "//This has nearly no effect on the server performance!Check out https://bStats.org/ to learn more\n";
        file << globalJson().dump(4);
    } else {
        ll::logger.error("Configuration File Creation failed!");
    }
    file.close();
}
} // namespace bstatsSettings

namespace bstats {

static bool isOnlineAuth;
static int playerAmount;
static unordered_map<string, int> playerPlatList; // NOLINT(cert-err58-cpp)

DWORD getCpuCoreCount() {
    SYSTEM_INFO systemInfo;
    GetSystemInfo(&systemInfo);
    return systemInfo.dwNumberOfProcessors;
}

string getOsArch() {
    SYSTEM_INFO systemInfo;
    GetSystemInfo(&systemInfo);
    return systemInfo.wProcessorArchitecture == PROCESSOR_ARCHITECTURE_AMD64 ? "x64" : "x86";
}


string getOsName() {
    return IsWineEnvironment() ? "Linux" : "Windows";
}


nlohmann::json addSimplePie(const string& key, const string& val) {
    nlohmann::json json;
    json["chartId"] = key;
    nlohmann::json json2;
    json2["value"] = val;
    json["data"] = json2;
    return json;
}

nlohmann::json addAdvancedPie(const string& key, const unordered_map<string, int>& val) {
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
    nlohmann::json pluginsJson;
    pluginsJson.emplace_back(addSimplePie("liteloaderbds_version", ll::getLoaderVersion().toString(false)));
    pluginsJson.emplace_back(addSimplePie("bds_version", ll::getBdsVersion().substr(1)));//bad
    pluginsJson.emplace_back(addSimplePie("xbox_auth", isOnlineAuth ? "Required" : "Not required"));
    pluginsJson.emplace_back(addAdvancedPie("player_platform", playerPlatList));

    return pluginsJson;
}

string createJson() {
    nlohmann::json json;
    // service
    json["service"]["id"] = 15847;
    json["service"]["customCharts"] = getCustomCharts();
    json["serverUUID"] = bstatsSettings::serverUuid;
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
            playerPlatList[OS] = playerPlatList[OS] + 1;
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
            "https://bstats.org/api/v2/data/bukkit", headers, json, "", [](int a1, const string& a2) {}, 10);
    });

    a.detach();
}

void createJsonConfig() {
    if (!std::filesystem::exists("plugins/bStats"))
        std::filesystem::create_directories("plugins/bStats");
    if (std::filesystem::exists("plugins/bStats/config.json")) {
        try {
            bstatsSettings::loadConfigFromJson("plugins/bStats/config.json");
        } catch (std::exception& e) {
            ll::logger.error("Config File isInvalid, Err {}", e.what());
        } catch (...) {
            ll::logger.error("Config File isInvalid");
        }
    } else {
        ll::logger.info("Config with default values created");
        bstatsSettings::writeDefaultConfig("plugins/bStats/config.json");
    }
}

void configInit() {
    createJsonConfig();
    auto serverUuidList = regEdit::getAllValue();
    if (!serverUuidList.count(bstatsSettings::serverUuid)) {
        auto newUUID = bstatsSettings::uuid::generateUuidV4();
        regEdit::create(newUUID);
        bstatsSettings::serverUuid = newUUID;
        bstatsSettings::reloadJson("plugins/bStats/config.json");
    }
}

// generate random float between 0.0 and 1.0
float randomFloat() {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_real_distribution<float> dis(0.0, 1.0);
    return dis(gen);
}

const unsigned long long period = 1000 * 60 * 30;

void scheduleThread() {
    std::thread schedule([]() {
        auto initialDelay = (unsigned long long)(1000 * 60 * (3 + randomFloat() * 3));
        auto secondDelay = (unsigned long long)(1000 * 60 * (randomFloat() * 30));

        std::this_thread::sleep_for(std::chrono::milliseconds(initialDelay));
        Schedule::nextTick(submitTask);

        std::this_thread::sleep_for(std::chrono::milliseconds(secondDelay));
        while (!ll::isServerStopping()) {
            Schedule::nextTick(submitTask);
            std::this_thread::sleep_for(std::chrono::milliseconds(period));
        }

    });
    schedule.detach();
}

void registerBStats() {
    configInit();
    if (bstatsSettings::enable) {
        Event::ServerStartedEvent::subscribe([](const Event::ServerStartedEvent& ev) {
            isOnlineAuth = Global<PropertiesSettings>->useOnlineAuthentication();
            scheduleThread();
            return true;
        });
    }
}

} // namespace bstats