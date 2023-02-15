#include "llapi/EventAPI.h"
#include "llapi/mc/ServerPlayer.hpp"
#include "liteloader/LiteLoader.h"
#include "llapi/PlayerInfoAPI.h"
#include <exception>
#include "llapi/db/Session.h"

constexpr auto PLAYER_DATABASE_PATH    = "plugins/LiteLoader/PlayerDB.db";
constexpr auto SQL_CREATE_PLAYER_TABLE = R"(
CREATE TABLE IF NOT EXISTS player_new (
    XUID TEXT PRIMARY KEY NOT NULL,
    NAME TEXT NOT NULL,
    UUID TEXT NOT NULL
) WITHOUT ROWID; )";
constexpr auto SQL_UPDATE_PLAYER_TABLE = R"(
DELETE FROM player WHERE name IN (SELECT name FROM player GROUP BY xuid HAVING COUNT(*)>1);
INSERT INTO player_new (XUID, NAME, UUID)
    SELECT XUID, NAME, UUID from player;
DROP TABLE player;
)";

DB::SharedPointer<DB::Session> db;

namespace PlayerInfo {

std::vector<Info> data;

std::optional<Info> findByName(const std::string& name) {
    for (Info info : data) {
        if (info.name == name) {
            return info;
        }
    }
    return {};
}
std::optional<Info> findByXuid(const xuid_t& xuid) {
    for (Info info : data) {
        if (info.xuid == xuid) {
            return info;
        }
    }
    return {};
}
std::optional<Info> findByUUID(const std::string& uuid) {
    for (Info info : data) {
        if (info.uuid == uuid) {
            return info;
        }
    }
    return {};
}

std::vector<std::string> getAllPlayerNames() {
    std::vector<std::string> result;
    for (auto& info : data) {
        result.push_back(info.name);
    }
    return result;
}

std::vector<Info> getAllPlayerInfo() { return data; }

bool insert(std::string name, std::string xuid, std::string uuid) {
    if (name.empty() || xuid.empty() || uuid.empty()) {
        return false;
    }
    auto info = findByXuid(xuid);
    if (!info.has_value()) {
        try {
            data.push_back({name, xuid, uuid});
            db << "insert into player_new (NAME, XUID, UUID) values(?,?,?)", DB::use(DB::Row{name, xuid, uuid});
        } catch (const std::exception& e) {
            ll::logger.error("PlayerDB Error: {}", e.what());
            return false;
        }
    } else {
        try {
            for (auto& it : data) {
                if (it.xuid == info.value().xuid) {
                    if (it.name != name || it.uuid != uuid) {
                        it.name = name;
                        it.uuid = uuid;
                        db << "update player_new set NAME = ?, UUID = ? where XUID = ?",
                            DB::use(DB::Row{name, uuid, xuid});
                    }
                }
            }
        } catch (std::exception const& e) {
            ll::logger.error("PlayerDB Error: {}", e.what());
            return false;
        }
    }
    return true;
}

std::string getXuid(std::string name) {
    auto res = findByName(name);
    return res.has_value() ? res.value().xuid : "";
}

std::string getUUID(std::string name) {
    auto res = findByName(name);
    return res.has_value() ? res.value().uuid : "";
}

std::string getUUIDByXuid(xuid_t xuid) {
    auto res = findByXuid(xuid);
    return res.has_value() ? res.value().uuid : "";
}

std::string fromXuid(std::string xuid) {
    auto res = findByXuid(xuid);
    return res.has_value() ? res.value().name : "";
}

std::string fromUUID(std::string uuid) {
    auto res = findByXuid(uuid);
    return res.has_value() ? res.value().name : "";
}

void forEachInfo(std::function<bool(std::string_view name, std::string_view xuid, std::string_view uuid)> callback) {
    for (auto& info : data) {
        if (!callback(info.name, info.xuid, info.uuid)) {
            break;
        }
    }
}

} // namespace PlayerInfo

template <>
PlayerInfo::Info row_to(const DB::Row& row) {
    // ll::logger.debug("{} {} {}", row["NAME"].get<std::string>(), row["XUID"].get<std::string>(),
    // row["UUID"].get<std::string>());
    return {row["NAME"].get<std::string>(), row["XUID"].get<std::string>(), row["UUID"].get<std::string>()};
}

void UpdatePlayerDatabase() {
    auto    query = db->query(R"(SELECT count(*) FROM sqlite_master WHERE type="table" AND name = "player")");
    DB::Any res   = query.data()->front();
    if (res.is_number()) {
        if (res.get_number<unsigned short>() > 0) {
            ll::logger.warn("Converting old PlayerInfo to new one, please wait.");
            db->execute(SQL_UPDATE_PLAYER_TABLE);
        }
    }
}

bool InitPlayerDatabase() {
    using namespace PlayerInfo;
    try {
        db = DB::Session::create(DB::DBType::SQLite, std::string(PLAYER_DATABASE_PATH));

        db->execute(SQL_CREATE_PLAYER_TABLE);

        // Process old data
        UpdatePlayerDatabase();

        PlayerInfo::data = db->prepare("SELECT NAME, XUID, UUID FROM player_new")->execute()->fetchAll<Info>();

        // Event::ServerStartedEvent::subscribe([](const Event::ServerStartedEvent&) {
        //     if (Global<PropertiesSettings> && !Global<PropertiesSettings>->useOnlineAuthentication()) {
        //         ll::logger.warn("Online Authentication(online-mode in server.properties) is disabled!");
        //     }
        //     return true;
        // });
        Event::PlayerJoinEvent::subscribe([](const Event::PlayerJoinEvent& e) {
            if (!e.mPlayer->isSimulatedPlayer()) {
                insert(e.mPlayer->getRealName(), e.mPlayer->getXuid(), e.mPlayer->getUuid());
            }
            return true;
        });
    } catch (std::exception const& e) {
        ll::logger.error("Read PlayerDB Error: {}", e.what());
        return false;
    }
    return true;
}
