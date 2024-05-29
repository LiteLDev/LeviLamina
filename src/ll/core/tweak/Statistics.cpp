#include "ll/core/tweak/Statistics.h"


#include "ll/api/chrono/GameChrono.h"
#include "ll/api/event/EventBus.h"
#include "ll/api/event/server/ServerStartedEvent.h"
#include "ll/api/i18n/I18n.h"
#include "ll/api/io/FileUtils.h"
#include "ll/api/memory/Hook.h"
#include "ll/api/plugin/PluginManagerRegistry.h"
#include "ll/api/schedule/Scheduler.h"
#include "ll/api/schedule/Task.h"
#include "ll/api/service/Bedrock.h"
#include "ll/api/service/ServerInfo.h"
#include "ll/api/utils/ErrorUtils.h"
#include "ll/api/utils/RandomUtils.h"
#include "ll/api/utils/StringUtils.h"
#include "ll/api/utils/WinUtils.h"
#include "ll/core/LeviLamina.h"


#include "mc/common/BuildInfo.h"
#include "mc/common/Common.h"
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

static DWORD getCpuCoreCount() {
    SYSTEM_INFO systemInfo;
    GetSystemInfo(&systemInfo);
    return systemInfo.dwNumberOfProcessors;
}

static nlohmann::json addSimplePie(std::string_view key, std::variant<std::string, int> value) {
    nlohmann::json json;
    json["chartId"] = key;
    nlohmann::json json2;
    if (std::holds_alternative<std::string>(value)) {
        json2["value"] = std::get<std::string>(std::move(value));
    } else if (std::holds_alternative<int>(value)) {
        json2["value"] = std::get<int>(std::move(value));
    }
    json["data"] = json2;
    return json;
}

static nlohmann::json addAdvancedPie(std::string_view key, std::unordered_map<std::string_view, int> value) {
    nlohmann::json json;
    json["chartId"] = key;
    nlohmann::json json2;
    nlohmann::json valuesBuilder;
    for (auto [string, integer] : std::move(value)) {
        valuesBuilder[string] = integer;
    }
    json2["values"] = valuesBuilder;
    json["data"]    = json2;
    return json;
}

static nlohmann::json addSingleLineChart(std::string_view key, const int value) {
    nlohmann::json json;
    json["chartId"] = key;
    nlohmann::json json2;
    json2["value"] = value;
    json["data"]   = json2;
    return json;
}

static nlohmann::json getCustomCharts() {
    nlohmann::json pluginsJson;
    pluginsJson.emplace_back(addSimplePie("levilamina_version", ll::getLoaderVersion().to_string()));
    pluginsJson.emplace_back(addSimplePie("minecraft_version", Common::getBuildInfo().mBuildId));
    pluginsJson.emplace_back(addSingleLineChart(
        "players",
        ll::service::getLevel().transform([](auto& level) { return level.getActivePlayerCount(); }).value_or(0)
    ));
    pluginsJson.emplace_back(addSimplePie(
        "online_mode",
        ll::service::getPropertiesSettings().value().useOnlineAuthentication() ? "true" : "false"
    ));
    std::unordered_map<std::string_view, int> platforms;
    ll::service::getLevel().transform([&platforms](auto& level) {
        level.forEachPlayer([&platforms](Player& player) {
            std::string_view platformName = magic_enum::enum_name(player.getPlatform());
            if (platforms.find(platformName) == platforms.end()) {
                platforms.emplace(platformName, 1);
            } else {
                platforms[platformName] += 1;
            }
            return true;
        });
        return true;
    });
    pluginsJson.emplace_back(addAdvancedPie("player_platform", std::move(platforms)));

    return pluginsJson;
}

struct Statistics::Impl {
    ll::schedule::SystemTimeScheduler scheduler;
    ll::thread::TickSyncTaskPool      pool;

    httplib::Client client{"https://bstats.org"};

    nlohmann::json json;

    httplib::Headers header = {
        {"Accept-Encoding", "gzip"             },
        {"Accept",          "application/json" },
        {"Connection",      "close"            },
        {"Content-Length",  "0"                },
        {"User-Agent",      "Metrics-Service/1"}
    };

    void submitData() {
        pool.addTask([this]() {
                nlohmann::json pluginInfo;
                pluginInfo["pluginName"]   = "LeviLamina";
                pluginInfo["customCharts"] = getCustomCharts();
                json["plugins"].emplace_back(pluginInfo);
            }
        ).wait();
        try {
            auto body                             = json.dump();
            header.find("Content-Length")->second = std::to_string(body.size());
            client.Post("/submitData/server-implementation", header, body, "application/json");
        } catch (...) {}
    }

    Impl() {
        using namespace ll::i18n_literals;
        using namespace ll::chrono_literals;
        namespace fs = std::filesystem;

        if (!fs::exists(plugin::getPluginsRoot() / u8"LeviLamina/data")) {
            fs::create_directory(plugin::getPluginsRoot() / u8"LeviLamina/data");
        }
        if (!fs::exists(plugin::getPluginsRoot() / u8"LeviLamina/data/statisticsUuid")) {
            std::string uuid   = mce::UUID::random().asString();
            json["serverUUID"] = uuid;
            ll::file_utils::writeFile(plugin::getPluginsRoot() / u8"LeviLamina/data/statisticsUuid", uuid);
        } else {
            auto uuidFile = ll::file_utils::readFile(plugin::getPluginsRoot() / u8"LeviLamina/data/statisticsUuid");
            if (uuidFile.has_value()) {
                json["serverUUID"] = uuidFile.value();
            } else {
                std::string uuid = mce::UUID::random().asString();
                ll::file_utils::writeFile(plugin::getPluginsRoot() / u8"LeviLamina/data/statisticsUuid", uuid);
            }
        }
        json["osName"]    = ll::win_utils::isWine() ? "Linux" : "Windows";
        json["osArch"]    = "amd64";
        json["osVersion"] = "";
        json["coreCount"] = getCpuCoreCount();

        scheduler.add<ll::schedule::DelayTask>(1.0min * ll::random_utils::rand(3.0, 6.0), [this]() {
            submitData();
            scheduler.add<ll::schedule::DelayTask>(1.0min * ll::random_utils::rand(1.0, 30.0), [this]() {
                submitData();
                scheduler.add<ll::schedule::RepeatTask>(30min, [this]() { submitData(); });
            });
        });
        ll::logger.info("Statistics has been enabled, you can disable statistics in configuration file"_tr());
    }
};

void Statistics::call(bool enable) {
    if (enable && !impl) {
        impl = std::make_unique<Impl>();
    } else if (!enable) {
        impl.reset();
    }
};

Statistics::Statistics()  = default;
Statistics::~Statistics() = default;
} // namespace ll
