#include "ll/core/tweak/Statistics.h"


#include "ll/api/chrono/GameChrono.h"
#include "ll/api/i18n/I18n.h"
#include "ll/api/io/FileUtils.h"
#include "ll/api/memory/Hook.h"
#include "ll/api/schedule/Scheduler.h"
#include "ll/api/schedule/Task.h"
#include "ll/api/service/Bedrock.h"
#include "ll/api/service/ServerInfo.h"
#include "ll/api/utils/ErrorUtils.h"
#include "ll/api/utils/RandomUtils.h"
#include "ll/api/utils/StringUtils.h"
#include "ll/api/utils/WinUtils.h"
#include "ll/core/LeviLamina.h"

#include "mc/deps/core/mce/UUID.h"
#include "mc/server/common/PropertiesSettings.h"
#include "mc/world/actor/player/Player.h"
#include "mc/world/level/Level.h"

#include "httplib.h"
#include "magic_enum.hpp"
#include "nlohmann/json.hpp"
#include "nlohmann/json_fwd.hpp"

#include <chrono>
#include <condition_variable>
#include <exception>
#include <filesystem>
#include <ios>
#include <memory>
#include <minwindef.h>
#include <mutex>
#include <random>
#include <sstream>
#include <string>
#include <string_view>
#include <sysinfoapi.h>
#include <unordered_map>
#include <variant>


namespace ll {
namespace statitics {
DWORD getCpuCoreCount() {
    SYSTEM_INFO systemInfo;
    GetSystemInfo(&systemInfo);
    return systemInfo.dwNumberOfProcessors;
}

nlohmann::json addSimplePie(const std::string& key, const std::variant<std::string, int>& value) {
    nlohmann::json json;
    json["chartId"] = key;
    nlohmann::json json2;
    if (std::holds_alternative<std::string>(value)) {
        json2["value"] = std::get<std::string>(value);
    } else if (std::holds_alternative<int>(value)) {
        json2["value"] = std::get<int>(value);
    }
    json["data"] = json2;
    return json;
}

nlohmann::json addAdvancedPie(const std::string& key, const std::unordered_map<std::string_view, int>& value) {
    nlohmann::json json;
    json["chartId"] = key;
    nlohmann::json json2;
    nlohmann::json valuesBuilder;
    for (auto [string, integer] : value) {
        valuesBuilder[string] = integer;
    }
    json2["values"] = valuesBuilder;
    json["data"]    = json2;
    return json;
}

nlohmann::json getCustomCharts() {
    nlohmann::json                            pluginsJson;
    std::unordered_map<std::string_view, int> platforms;
    if (ll::service::getLevel().has_value()) {
        ll::service::getLevel()->forEachPlayer([&platforms](Player& player) {
            std::string_view platformName = magic_enum::enum_name(player.getPlatform());
            if (platforms.find(platformName) == platforms.end()) {
                platforms.emplace(platformName, 1);
            } else {
                platforms[platformName] += 1;
            }
            return true;
        });
    }
    pluginsJson.emplace_back(addAdvancedPie("player_platform", platforms));

    return pluginsJson;
}

ll::schedule::ServerTimeAsyncScheduler serverScheduler;
ll::schedule::GameTickScheduler        gameScheduler;
std::mutex                             submitMutex;
std::condition_variable                conditionVar;
bool                                   onlineModeEnabled;
std::string                            serverUuid;
using ll::i18n_literals::operator""_tr;

void submitData() {
    nlohmann::json json;
    json["service"]["id"]  = 21138;
    json["serverUUID"]     = serverUuid;
    json["osName"]         = ll::win_utils::isWine() ? "Linux" : "Windows";
    json["osArch"]         = "amd64";
    json["coreCount"]      = getCpuCoreCount();
    json["serverSoftware"] = "LeviLamina";
    std::unique_lock<std::mutex> lock(submitMutex);
    gameScheduler.add<ll::schedule::DelayTask>(ll::chrono::ticks(1), [&json]() {
        std::unique_lock<std::mutex> lock(submitMutex);
        json["service"]["pluginVersion"] = ll::getLoaderVersion().to_string();
        json["minecraftVersion"]         = ll::string_utils::splitByPattern(ll::getBdsVersion().to_string(), "-")[0];
        json["onlineMode"]               = onlineModeEnabled ? 1 : 0;
        json["service"]["customCharts"]  = getCustomCharts();
        json["playerAmount"] =
            ll::service::getLevel().has_value() ? ll::service::getLevel()->getActivePlayerCount() : 0;
        lock.unlock();
        conditionVar.notify_one();
    });
    conditionVar.wait(lock);
    httplib::Headers headers = {
        {"Accept-Encoding", "gzip"                            },
        {"Accept",          "application/json"                },
        {"Connection",      "close"                           },
        {"Content-Length",  std::to_string(json.dump().size())},
        {"User-Agent",      "Metrics-Service/1"               }
    };
    httplib::Client client("https://bstats.org");
    // ll::logger.debug("Submit: {}", json.dump());
    try {
        auto result = client.Post("/api/v2/data/bukkit", headers, json.dump(), "application/json");
        // ll::logger.debug("Body: {} Status: {}", result->body, result->status);
    } catch (const std::exception& e) {
        // ll::error_utils::printCurrentException(ll::logger);
    }
}

void initStatitics() {
    namespace fs = std::filesystem;
    if (!fs::exists(plugin::getPluginsRoot() / u8"LeviLamina/data")) {
        fs::create_directory(plugin::getPluginsRoot() / u8"LeviLamina/data");
    }
    if (!fs::exists(plugin::getPluginsRoot() / u8"LeviLamina/data/statiticsUuid")) {
        std::string uuid = mce::UUID::random().asString();
        ll::file_utils::writeFile(plugin::getPluginsRoot() / u8"LeviLamina/data/statiticsUuid", uuid);
    } else {
        auto uuidFile = ll::file_utils::readFile(plugin::getPluginsRoot() / u8"LeviLamina/data/statiticsUuid");
        if (uuidFile.has_value()) {
            serverUuid = uuidFile.value();
        } else {
            std::string uuid = mce::UUID::random().asString();
            ll::file_utils::writeFile(plugin::getPluginsRoot() / u8"LeviLamina/data/statiticsUuid", uuid);
        }
    }
    auto initialDelay = (unsigned long long)(1000 * 60 * (3 + ll::random_utils::rand(0.0, 1.0) * 3));
    auto secondDelay  = (unsigned long long)(1000 * 60 * (ll::random_utils::rand(0.0, 1.0) * 30));
    // ll::logger.debug("initialDelay: {}, secondDelay: {}", initialDelay, secondDelay);
    serverScheduler.add<ll::schedule::DelayTask>(std::chrono::milliseconds(initialDelay), [secondDelay]() {
        statitics::submitData();
        serverScheduler.add<ll::schedule::DelayTask>(std::chrono::milliseconds(secondDelay), []() {
            statitics::submitData();
            serverScheduler.add<ll::schedule::RepeatTask>(std::chrono::seconds(60 * 30), []() {
                statitics::submitData();
            });
        });
    });
    ll::logger.info("Statistics has been enabled, you can disasble statistics in configuration file"_tr());
}

LL_INSTANCE_HOOK(
    PropertiesSettingsConstructor,
    HookPriority::High,
    "??0PropertiesSettings@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z",
    PropertiesSettings*,
    std::string const& path
) {
    PropertiesSettings* settings = origin(path);
    onlineModeEnabled            = settings->useOnlineAuthentication();
    return settings;
}
} // namespace statitics

void Statitics::call(bool enable) {
    if (enable) {
        statitics::PropertiesSettingsConstructor::hook();
        statitics::initStatitics();
    } else {
        statitics::PropertiesSettingsConstructor::unhook();
    }
};

Statitics::Statitics()  = default;
Statitics::~Statitics() = default;
} // namespace ll
