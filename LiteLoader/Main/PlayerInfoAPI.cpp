#include <EventAPI.h>
#include <LoggerAPI.h>
#include <MC/ServerPlayer.hpp>
#include <Main/LiteLoader.h>
#include <PlayerInfoAPI.h>
#include <exception>
#include <SQLiteCpp/SQLiteCpp.h>

#define PlayerDatabasePath "plugins/LiteLoader/PlayerDB.db"
std::unique_ptr<SQLite::Database> db;


namespace PlayerInfo {
    std::string getVal(std::string name, unsigned short type) { //type: 0=XUID 1=UUID
        if (name == "")
            return "";
        try {
            std::string val;
            if (type == 0) { //XUID
                SQLite::Statement get{*db, "select XUID from player where NAME=?"};
                get.bindNoCopy(1, name);
                while (get.executeStep()) {
                    val = get.getColumn(0).getText();
                }
                get.reset();
                get.clearBindings();
            } else { //UUID
                SQLite::Statement get{*db, "select UUID from player where NAME=?"};
                get.bindNoCopy(1, name);
                while (get.executeStep()) {
                    val = get.getColumn(0).getText();
                }
                get.reset();
                get.clearBindings();
            }

            return val;
        } catch (std::exception const &e) {
            logger.error("DB Error: {}", e.what());
            return "";
        }
    }

    bool insert(std::string name, std::string xuid, std::string uuid) {
        if (name == "" || xuid == "" || uuid == "") {
            return false;
        }
        if (getVal(name, 0) == "") {
            try {
                SQLite::Statement st{*db, "insert into player values (?,?,?)"};
                st.bindNoCopy(1, name);
                st.bindNoCopy(2, xuid);
                st.bindNoCopy(3, uuid);
                st.exec();
                st.reset();
                st.clearBindings();
            }
            catch (std::exception const &e) {
                logger.error("DB Error: {}", e.what());
                return false;
            }
        } else {
            try {
                db->exec("begin");
                SQLite::Statement st{*db, "update player set XUID=? where NAME=?"};
                st.bindNoCopy(2, name);
                st.bindNoCopy(1, xuid);
                st.exec();
                st.reset();
                st.clearBindings();
                SQLite::Statement stUUID{*db, "update player set UUID=? where NAME=?"};
                stUUID.bindNoCopy(2, name);
                stUUID.bindNoCopy(1, uuid);
                stUUID.exec();
                stUUID.reset();
                stUUID.clearBindings();
                db->exec("commit");
            } catch (std::exception const &e) {
                logger.error("DB Error: {}", e.what());
                return false;
            }
        }
        return true;
    }

    std::string getXuid(std::string name) {
        return getVal(name, 0);
    }

    std::string getUUID(std::string name) {
        return getVal(name, 1);
    }

    std::string getName(unsigned short type, std::string val) {
        if (val == "")
            return "";
        try {
            std::string out;
            if (type == 0) {
                SQLite::Statement get{*db, "select NAME from player where XUID=?"};
                get.bindNoCopy(1, val);
                while (get.executeStep()) {
                    out = get.getColumn(0).getText();
                }
                get.reset();
                get.clearBindings();
            } else {
                SQLite::Statement get{*db, "select NAME from player where UUID=?"};
                get.bindNoCopy(1, val);
                while (get.executeStep()) {
                    out = get.getColumn(0).getText();
                }
                get.reset();
                get.clearBindings();
            }
            return out;
        } catch (std::exception const &e) {
            logger.error("DB Error: {}", e.what());
            return "";
        }
    }

    std::string fromXuid(std::string xuid) {
        return getName(0, xuid);
    }

    std::string fromUUID(std::string uuid) {
        return getName(1, uuid);
    }

    void forEachInfo(std::function<bool(std::string_view name, std::string_view xuid, std::string_view uuid)> callback)
    {
        SQLite::Statement get{*db, "select NAME, XUID, UUID from player"};
        while (get.executeStep())
        {
            auto name = get.getColumn(0).getText();
            auto xuid = get.getColumn(1).getText();
            auto uuid = get.getColumn(2).getText();
            if (!callback(name, xuid, uuid))
                break;
        }
        get.reset();
        get.clearBindings();
    }

    } // namespace PlayerDB

bool InitPlayerDatabase() {
    using namespace PlayerInfo;
    try {
        db = std::make_unique<SQLite::Database>(PlayerDatabasePath, SQLite::OPEN_CREATE | SQLite::OPEN_READWRITE);

        db->exec("CREATE TABLE IF NOT EXISTS player ( \
			NAME TEXT PRIMARY KEY \
            NOT NULL, \
			XUID TEXT \
            NOT NULL, \
            UUID TEXT \
            NOT NULL \
		) \
			WITHOUT ROWID; ");

        Event::PlayerJoinEvent::subscribe([](const Event::PlayerJoinEvent &e) {
            if (!e.mPlayer->isSimulatedPlayer())
                insert(e.mPlayer->getRealName(), e.mPlayer->getXuid(), e.mPlayer->getUuid());
            return true;
        });
    } catch (std::exception const &e) {
        logger.error("Read PlayerDB Error: {}", e.what());
        return false;
    }
    return true;
}