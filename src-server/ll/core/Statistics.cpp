#include "ll/core/Statistics.h"


#include "ll/api/Versions.h"
#include "ll/api/base/Containers.h"
#include "ll/api/chrono/GameChrono.h"
#include "ll/api/event/EventBus.h"
#include "ll/api/event/server/ServerStartedEvent.h"
#include "ll/api/i18n/I18n.h"
#include "ll/api/io/FileUtils.h"
#include "ll/api/memory/Hook.h"
#include "ll/api/mod/ModManagerRegistry.h"
#include "ll/api/schedule/Scheduler.h"
#include "ll/api/schedule/Task.h"
#include "ll/api/service/Bedrock.h"
#include "ll/api/service/ServerInfo.h"
#include "ll/api/utils/ErrorUtils.h"
#include "ll/api/utils/RandomUtils.h"
#include "ll/api/utils/StringUtils.h"
#include "ll/api/utils/SystemUtils.h"
#include "ll/core/LeviLamina.h"


#include "mc/common/BuildInfo.h"
#include "mc/common/Common.h"
#include "mc/deps/core/mce/UUID.h"
#include "mc/server/common/PropertiesSettings.h"
#include "mc/world/actor/player/Player.h"
#include "mc/world/level/Level.h"

#include "cpr/cpr.h"
#include "magic_enum.hpp"
#include "nlohmann/json.hpp"
#include "nlohmann/json_fwd.hpp"

namespace ll {

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

static nlohmann::json addAdvancedPie(std::string_view key, SmallDenseMap<std::string_view, int> const& value) {
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

static nlohmann::json addSingleLineChart(std::string_view key, const int value) {
    nlohmann::json json;
    json["chartId"] = key;
    nlohmann::json json2;
    json2["value"] = value;
    json["data"]   = json2;
    return json;
}

static nlohmann::json getCustomCharts() {
    nlohmann::json res;
    res.emplace_back(addSimplePie("levilamina_version", ll::getLoaderVersion().to_string()));
    res.emplace_back(addSimplePie("minecraft_version", Common::getBuildInfo().mBuildId));
    res.emplace_back(addSingleLineChart(
        "players",
        ll::service::getLevel().transform([](auto& level) { return level.getActivePlayerCount(); }).value_or(0)
    ));
    res.emplace_back(addSimplePie(
        "online_mode",
        ll::service::getPropertiesSettings().value().useOnlineAuthentication() ? "true" : "false"
    ));
    SmallDenseMap<std::string_view, int> platforms;
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
    res.emplace_back(addAdvancedPie("player_platform", platforms));

    return res;
}

struct Statistics::Impl {
    ll::schedule::SystemTimeScheduler scheduler;
    nlohmann::json                    json;

    void submitData() {
        ll::thread::TickSyncTaskPool::getDefault()
            ->addTask([this]() {
                nlohmann::json pluginInfo;
                pluginInfo["pluginName"]   = getSelfModIns()->getName();
                pluginInfo["customCharts"] = getCustomCharts();
                json["plugins"].emplace_back(pluginInfo);
            })
            .wait();
        try {
            auto body = json.dump();
            cpr::Post(
                cpr::Url{
                    "https://bstats.org/submitData/server-implementation"
            },
                cpr::Body{body},
                cpr::Header{
                    {"Accept", "application/json"},
                    {"Content-Type", "application/json"},
                    {"User-Agent", "Metrics-Service/1"}
                }
            );
        } catch (...) {}
    }

    Impl() {
        namespace fs = std::filesystem;

        auto& dataDir = getSelfModIns()->getDataDir();

        if (!fs::exists(dataDir)) {
            fs::create_directory(dataDir);
        }
        auto uuidPath = dataDir / u8"statisticsUuid";
        if (!fs::exists(uuidPath)) {
            std::string uuid   = mce::UUID::random().asString();
            json["serverUUID"] = uuid;
            ll::file_utils::writeFile(uuidPath, uuid);
        } else {
            auto uuidFile = ll::file_utils::readFile(uuidPath);
            if (uuidFile.has_value()) {
                json["serverUUID"] = uuidFile.value();
            } else {
                std::string uuid = mce::UUID::random().asString();
                ll::file_utils::writeFile(uuidPath, uuid);
            }
        }
        json["osName"]    = ll::sys_utils::isWine() ? "Linux(wine)" : "Windows";
        json["osArch"]    = "amd64";
        json["osVersion"] = "";
        json["coreCount"] = std::thread::hardware_concurrency();

        scheduler.add<ll::schedule::DelayTask>(1.0min * ll::random_utils::rand(3.0, 6.0), [this]() {
            submitData();
            scheduler.add<ll::schedule::DelayTask>(1.0min * ll::random_utils::rand(1.0, 30.0), [this]() {
                submitData();
                scheduler.add<ll::schedule::RepeatTask>(30min, [this]() { submitData(); });
            });
        });
        ll::getLogger().info("Statistics has been enabled, you can disable statistics in configuration file"_tr());
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
