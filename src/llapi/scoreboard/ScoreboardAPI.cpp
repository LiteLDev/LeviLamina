#include "llapi/mc/DisplayObjective.hpp"
#include "llapi/mc/Objective.hpp"
#include "llapi/mc/ObjectiveCriteria.hpp"
#include "llapi/mc/Player.hpp"
#include "llapi/mc/Scoreboard.hpp"
#include "llapi/mc/ScoreboardId.hpp"
#include "llapi/mc/ScoreboardIdentityRef.hpp"
#include "llapi/mc/setScorePacket.hpp"
#include "llapi/mc/Level.hpp"
#include "llapi/mc/PlayerScoreboardId.hpp"
#include "llapi/PlayerInfoAPI.h"
#include "llapi/mc/ServerScoreboard.hpp"

#include "llapi/memory/MemoryUtils.h"

using ll::memory::dAccess;

LIAPI const ScoreboardId& Scoreboard::nextScoreboardId() { return ++*(ScoreboardId*)((char*)this + 1072); }

bool Scoreboard::createScoreboardId(PlayerScoreboardId const& pid) {
    ScoreboardId newsid                                                      = nextScoreboardId();
    ScoreboardId* (Scoreboard::*rv)(ScoreboardId, PlayerScoreboardId const&) = nullptr;
    *((void**)&rv) = LL_RESOLVE_SYMBOL("??$_createScoreboardId@UPlayerScoreboardId@@@Scoreboard@@IEAAAEBUScoreboardId@@U1@"
                           "AEBUPlayerScoreboardId@@@Z");
    return (this->*rv)(newsid, pid)->isValid();
}

LIAPI bool Scoreboard::createScoreboardId(mce::UUID const& uuid) {

    auto cTag = Player::getPlayerNbt(uuid);
    if (cTag != nullptr && !cTag->isEmpty() && cTag->contains("UniqueID")) {
        ActorUniqueID      aId(cTag->getInt64("UniqueID"));
        PlayerScoreboardId myPid(aId);
        // check
        auto& maySid = this->getScoreboardId(myPid);
        if (!maySid.isValid()) {
            return this->createScoreboardId(myPid);
        }
        return true;
    }
    return false;
}

LIAPI ScoreboardId Scoreboard::getScoreboardId(mce::UUID const& uuid) const {
    auto cTag = Player::getPlayerNbt(uuid);
    if (cTag != nullptr && !cTag->isEmpty() && cTag->contains("UniqueID")) {
        ActorUniqueID      aId(cTag->getInt64("UniqueID"));
        PlayerScoreboardId myPid(aId);
        return this->getScoreboardId(myPid);
    }
    return ScoreboardId::INVALID;
}

LIAPI ScoreboardId Scoreboard::getOrCreateScoreboardId(mce::UUID const& uuid) {
    ScoreboardId sId = Global<Scoreboard>->getScoreboardId(uuid);
    if (!sId.isValid()) {
        Global<Scoreboard>->createScoreboardId(uuid);
        sId = Global<Scoreboard>->getScoreboardId(uuid);
    }
    return sId;
}

LIAPI bool Scoreboard::forceModifyPlayerScore(
    mce::UUID const&       uuid,
    std::string const&     objname,
    int                    val,
    PlayerScoreSetFunction pf
) {
    auto sId = Global<Scoreboard>->getOrCreateScoreboardId(uuid);
    if (sId.isValid()) {
        Objective* obj = Global<Scoreboard>->getObjective(objname);
        if (!obj)
            obj = Scoreboard::newObjective(objname, objname);
        if (obj) {
            bool ret;
            Global<Scoreboard>->modifyPlayerScore(ret, sId, *obj, val, pf);
            return ret;
        }
    }
    return false;
}

LIAPI bool
Scoreboard::forceModifyPlayerScore(xuid_t const& xuid, std::string const& objname, int val, PlayerScoreSetFunction pf) {
    auto uuid = PlayerInfo::getUUIDByXuid(xuid);
    if (!uuid.empty()) {
        return Global<Scoreboard>->forceModifyPlayerScore(mce::UUID::fromString(uuid), objname, val, pf);
    }
    return false;
}

LIAPI std::optional<int> Scoreboard::queryPlayerScore(mce::UUID const& uuid, std::string const& objname) {
    auto obj = Global<Scoreboard>->getObjective(objname);
    auto sId = Global<Scoreboard>->getScoreboardId(uuid);
    if (!obj || !sId.isValid() || !obj->hasScore(sId))
        return std::nullopt;
    return obj->getPlayerScore(sId).getCount();
}

LIAPI std::optional<int> Scoreboard::queryPlayerScore(xuid_t const& xuid, std::string const& objname) {
    auto obj  = Global<Scoreboard>->getObjective(objname);
    auto uuid = PlayerInfo::getUUIDByXuid(xuid);
    if (uuid.empty())
        return std::nullopt;
    const auto& sId = Global<Scoreboard>->getScoreboardId(uuid);
    if (!obj || !sId.isValid() || !obj->hasScore(sId))
        return std::nullopt;
    return obj->getPlayerScore(sId).getCount();
}

LIAPI bool Scoreboard::forceRemovePlayerScoreFromObjective(mce::UUID const& uuid, std::string const& objname) {

    return removeFromObjective(objname, Global<Scoreboard>->getScoreboardId(uuid));
}

LIAPI bool Scoreboard::forceRemovePlayerScoreFromObjective(xuid_t const& xuid, std::string const& objname) {
    auto uuid = PlayerInfo::getUUIDByXuid(xuid);
    if (uuid.empty())
        return false;
    return removeFromObjective(objname, Global<Scoreboard>->getScoreboardId(uuid));
}

LIAPI Objective* Scoreboard::newObjective(const std::string& objname, const std::string& displayName) {
    std::string criteria = "dummy";
    return Global<Scoreboard>->addObjective(objname, displayName, *Global<Scoreboard>->getCriteria(criteria));
}

/*
LIAPI bool Scoreboard::setDisplayObjective(const std::string& objname, const std::string& slot, int sort) {
    if (checkSlotName(slot)) {
        auto obj = Global<Scoreboard>->getObjective(objname);
        if (!obj)
            return false;
        ((ServerScoreboard*)Global<Scoreboard>)->setDisplayObjective(slot,*obj,(ObjectiveSortOrder)sort);
        return true;
    }
    return false;
}

LIAPI Objective* Scoreboard::clearDisplayObjective(const std::string& slot) {
    if (checkSlotName(slot))
        return Global<Scoreboard>->clearDisplayObjective(slot);
    return nullptr;
}

LIAPI Objective* Scoreboard::getDisplayObjective(const std::string& slot) {
    if (checkSlotName(slot)) {
        auto disp = Global<Scoreboard>->getDisplayObjective(slot);
        if (disp)
            return const_cast<Objective*>(&disp->getObjective());
    }
    return nullptr;
}*/
LIAPI struct ScoreboardId& Scoreboard::getOrCreateScoreboardId(std::string const& id) {
    auto& identity = const_cast<ScoreboardId&>(Global<Scoreboard>->getScoreboardId(id));
    if (!identity.isValid()) {
        ((ServerScoreboard*)Global<Scoreboard>)->createScoreboardId(id);
    }
    return identity;
}

LIAPI std::optional<int> Scoreboard::addScore(const std::string& objname, const std::string& id, int score) {
    auto obj = Global<Scoreboard>->getObjective(objname);
    if (!obj)
        return std::nullopt;

    auto& identity = getOrCreateScoreboardId(id);

    bool temp = true;
    return Global<Scoreboard>->modifyPlayerScore(temp, identity, *obj, score, PlayerScoreSetFunction::Add);
}

LIAPI std::optional<int> Scoreboard::setScore(const std::string& objname, const std::string& id, int score) {
    auto obj = Global<Scoreboard>->getObjective(objname);
    if (!obj)
        return std::nullopt;

    auto& identity = getOrCreateScoreboardId(id);
    bool  temp     = true;
    return Global<Scoreboard>->modifyPlayerScore(temp, identity, *obj, score, PlayerScoreSetFunction::Set);
}

LIAPI std::optional<int> Scoreboard::reduceScore(const std::string& objname, const std::string& id, int score) {
    auto obj = Global<Scoreboard>->getObjective(objname);
    if (!obj)
        return std::nullopt;

    auto& identity = getOrCreateScoreboardId(id);

    bool temp = true;
    return Global<Scoreboard>->modifyPlayerScore(temp, identity, *obj, score, PlayerScoreSetFunction::Remove);
}

LIAPI bool Scoreboard::removeFromObjective(const std::string& objname, const std::string& id) {
    auto& identity = const_cast<ScoreboardId&>(Global<Scoreboard>->getScoreboardId(id));
    if (!identity.isValid()) {
        return true;
    }
    auto obj = Global<Scoreboard>->getObjective(objname);
    if (!obj) {
        return true;
    }
    return Global<Scoreboard>->getScoreboardIdentityRef(identity)->removeFromObjective(*Global<Scoreboard>, *obj);
}

LIAPI bool Scoreboard::removeFromObjective(const std::string& objname, Player* player) {
    auto& identity = const_cast<ScoreboardId&>(Global<Scoreboard>->getScoreboardId(*player));
    if (!identity.isValid())
        return true;
    Objective* obj = Global<Scoreboard>->getObjective(objname);
    if (!obj)
        return true;
    vector<ScorePacketInfo> info;
    ScorePacketInfo         i(
        (ScoreboardId*)&identity,
        objname,
        Global<Scoreboard>->getScoreboardIdentityRef(identity)->getIdentityType(),
        obj->getPlayerScore(identity).getCount(),
        obj->getName()
    );
    info.emplace_back(i);
    for (auto sp : Level::getAllPlayers()) {
        sp->sendSetScorePacket(1, info);
    }
    auto out = Global<Scoreboard>->getScoreboardIdentityRef(identity)->removeFromObjective(*Global<Scoreboard>, *obj);
    return out;
}

LIAPI bool Scoreboard::removeFromObjective(const std::string& objname, ScoreboardId const& identity) {
    if (!identity.isValid())
        return true;
    Objective* obj = Global<Scoreboard>->getObjective(objname);
    if (!obj)
        return true;
    vector<ScorePacketInfo> info;
    ScorePacketInfo         i(
        (ScoreboardId*)&identity,
        objname,
        Global<Scoreboard>->getScoreboardIdentityRef(identity)->getIdentityType(),
        obj->getPlayerScore(identity).getCount(),
        obj->getName()
    );
    info.emplace_back(i);
    for (auto sp : Level::getAllPlayers()) {
        sp->sendSetScorePacket(1, info);
    }
    auto out = Global<Scoreboard>->getScoreboardIdentityRef(identity)->removeFromObjective(*Global<Scoreboard>, *obj);
    return out;
}

LIAPI int Scoreboard::getScore(const std::string& objname, const std::string& id) {
    auto& identity =
        const_cast<ScoreboardId&>(Global<Scoreboard>->getOrCreateScoreboardId(id) // If not exists, create a new one
        );
    if (!identity.isValid()) {
        throw std::runtime_error("Bad ScoreboardId");
    }

    auto obj = Global<Scoreboard>->getObjective(objname);
    if (!obj) {
        throw std::invalid_argument("Objective " + objname + " not found");
    }

    auto scores = Global<Scoreboard>->getIdScores(identity);
#ifdef DEBUG
    struct voids {
        void** filler[100];
    };

    auto& vs = *(voids*&)scores; // -> sizeof(ScoreInfo) == 16
#endif                           // DEBUG
    for (auto& it : scores) {
        if (it.getObjective() == obj) {
            return it.getCount();
        }
    }
    throw std::runtime_error("Cannot get score");
}

LIAPI bool Scoreboard::getScore(const std::string& objname, const std::string& id, int& score) {
    try {
        score = getScore(objname, id);
        return true;
    } catch (...) {
    }
    return false;
}

// For compatibility
LIAPI int Scoreboard::getScore(Player* player, const std::string& objname) { return getScore(objname, player); }

LIAPI int Scoreboard::getScore(const std::string& objname, Player* player) {
    Objective* obj = Global<Scoreboard>->getObjective(objname);
    if (!obj) {
        throw std::invalid_argument("Objective " + objname + " not found");
    }

    auto& identity = const_cast<ScoreboardId&>(Global<Scoreboard>->getScoreboardId(*player));
    if (!identity.isValid()) {
        ((ServerScoreboard*)Global<Scoreboard>)->createScoreboardId(*player);
    }

    auto score = obj->getPlayerScore(identity);
    return score.getCount();
}

LIAPI bool Scoreboard::getScore(const std::string& objname, Player* player, int& score) {
    try {
        score = getScore(objname, player);
        return true;
    } catch (...) {
    }
    return false;
}

// For compatibility
LIAPI bool Scoreboard::setScore(Player* player, const std::string& objname, int value) {
    return setScore(objname, player, value);
}

LIAPI bool Scoreboard::setScore(const std::string& objname, Player* player, int value) {
    Objective* obj = Global<Scoreboard>->getObjective(objname);
    if (!obj) {
        return false;
    }

    auto& identity = const_cast<ScoreboardId&>(Global<Scoreboard>->getScoreboardId(*player));
    if (!identity.isValid()) {
        ((ServerScoreboard*)Global<Scoreboard>)->createScoreboardId(*player);
    }
    bool temp   = true;
    int  result = Global<Scoreboard>->modifyPlayerScore(temp, identity, *obj, value, PlayerScoreSetFunction::Set);
    if (result != value) {
        return false;
    }
    return true;
}

// For compatibility
LIAPI bool Scoreboard::addScore(Player* player, const std::string& objname, int value) {
    return addScore(objname, player, value);
}

LIAPI bool Scoreboard::addScore(const std::string& objname, Player* player, int value) {
    Objective* obj = Global<Scoreboard>->getObjective(objname);
    if (!obj) {
        return false;
    }

    auto& identity = const_cast<ScoreboardId&>(Global<Scoreboard>->getScoreboardId(*player));
    if (!identity.isValid()) {
        ((ServerScoreboard*)Global<Scoreboard>)->createScoreboardId(*player);
        return false;
    }
    bool temp = true;
    Global<Scoreboard>->modifyPlayerScore(temp, identity, *obj, value, PlayerScoreSetFunction::Add);
    return true;
}

// For compatibility
LIAPI bool Scoreboard::reduceScore(Player* player, const std::string& objname, int value) {
    return reduceScore(objname, player, value);
}

LIAPI bool Scoreboard::reduceScore(const std::string& objname, Player* player, int value) {
    Objective* obj = Global<Scoreboard>->getObjective(objname);
    if (!obj) {
        return false;
    }

    bool  a1       = true;
    bool& pa       = a1;
    auto& identity = const_cast<ScoreboardId&>(Global<Scoreboard>->getScoreboardId(*player));
    if (!identity.isValid()) {
        ((ServerScoreboard*)Global<Scoreboard>)->createScoreboardId(*player);
    }
    bool temp = true;
    Global<Scoreboard>->modifyPlayerScore(temp, identity, *obj, value, PlayerScoreSetFunction::Remove); // Reduce
    return true;
}

// For compatibility
LIAPI bool Scoreboard::deleteScore(Player* player, const std::string& objname) { return deleteScore(objname, player); }

LIAPI bool Scoreboard::deleteScore(const std::string& objname, Player* player) {
    return removeFromObjective(objname, player);
}

LIAPI bool Scoreboard::scoreboardIdIsValid(ScoreboardId* id) { return id->isValid(); }
