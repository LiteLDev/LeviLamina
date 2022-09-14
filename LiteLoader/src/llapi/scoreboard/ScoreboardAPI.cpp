#include <llapi/mc/DisplayObjective.hpp>
#include <llapi/mc/Objective.hpp>
#include <llapi/mc/ObjectiveCriteria.hpp>
#include <llapi/mc/Player.hpp>
#include <llapi/mc/Scoreboard.hpp>
#include <llapi/mc/ScoreboardId.hpp>
#include <llapi/mc/ScoreboardIdentityRef.hpp>
#include <llapi/mc/ServerScoreboard.hpp>
#include <llapi/mc/setScorePacket.hpp>
#include <llapi/mc/Level.hpp>
#include <llapi/mc/IdentityDefinition.hpp>

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
    if (!scoreboardIdIsValid(&identity)) {
        identity = const_cast<ScoreboardId&>(Global<Scoreboard>->createScoreboardId(id));
    }
    return identity;
};
LIAPI std::optional<int> Scoreboard::addScore(const std::string& objname, const std::string& id, int score) {
    auto obj = Global<Scoreboard>->getObjective(objname);
    if (!obj)
        return std::nullopt;

    auto& identity = getOrCreateScoreboardId(id);

    int a1 = 0;
    auto ref = Global<Scoreboard>->getScoreboardIdentityRef(identity);
    bool res = ref->modifyScoreInObjective(a1, *obj, score, PlayerScoreSetFunction::Add);
    if (res) {
        Global<Scoreboard>->onScoreChanged(identity, *obj);
        return a1;
    }
    return std::nullopt;
}

LIAPI std::optional<int> Scoreboard::setScore(const std::string& objname, const std::string& id, int score) {
    auto obj = Global<Scoreboard>->getObjective(objname);
    if (!obj)
        return std::nullopt;

    auto& identity = getOrCreateScoreboardId(id);

    int a1 = 0;
    auto ref = Global<Scoreboard>->getScoreboardIdentityRef(identity);
    bool res = ref->modifyScoreInObjective(a1, *obj, score, PlayerScoreSetFunction::Set);
    if (res) {
        Global<Scoreboard>->onScoreChanged(identity, *obj);
        return a1;
    }
    return std::nullopt;
}

LIAPI std::optional<int> Scoreboard::reduceScore(const std::string& objname, const std::string& id, int score) {
    auto obj = Global<Scoreboard>->getObjective(objname);
    if (!obj)
        return std::nullopt;

    auto& identity = getOrCreateScoreboardId(id);

    int a1 = 0;
    auto ref = Global<Scoreboard>->getScoreboardIdentityRef(identity);
    bool res = ref->modifyScoreInObjective(a1, *obj, score, PlayerScoreSetFunction::Remove);
    if (res) {
        Global<Scoreboard>->onScoreChanged(identity, *obj);
        return a1;
    }
    return std::nullopt;
}

LIAPI bool Scoreboard::removeFromObjective(const std::string& objname, const std::string& id) {
    auto& identity = const_cast<ScoreboardId&>(Global<Scoreboard>->getScoreboardId(id));
    if (!scoreboardIdIsValid(&identity))
        return true;

    auto obj = Global<Scoreboard>->getObjective(objname);
    if (!obj)
        return true;

    return Global<Scoreboard>->getScoreboardIdentityRef(identity)->removeFromObjective(*Global<Scoreboard>, *obj);
}

LIAPI bool Scoreboard::removeFromObjective(const std::string& objname, Player* player) {
    auto& identity = const_cast<ScoreboardId&>(Global<Scoreboard>->getScoreboardId(*player));
    if (!scoreboardIdIsValid(&identity))
        return true;
    Objective* obj = Global<Scoreboard>->getObjective(objname);
    if (!obj)
        return true;
    vector<ScorePacketInfo> info;
    ScorePacketInfo i((ScoreboardId*)&identity, objname, Global<Scoreboard>->getScoreboardIdentityRef(identity)->getIdentityType(), obj->getPlayerScore(identity).getCount(), obj->getName());
    info.emplace_back(i);
    for (auto sp : Level::getAllPlayers()) {
        sp->sendSetScorePacket(1, info);
    }
    auto out = Global<Scoreboard>->getScoreboardIdentityRef(identity)->removeFromObjective(*Global<Scoreboard>, *obj);
    return out;
}

LIAPI int Scoreboard::getScore(const std::string& objname, const std::string& id) {
    auto& identity = const_cast<ScoreboardId&>(
        Global<Scoreboard>->getOrCreateScoreboardId(id) // If not exists, create a new one
    );
    if (!scoreboardIdIsValid(&identity)) {
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
    } catch (...) {}
    return false;
}

// For compatibility
LIAPI int Scoreboard::getScore(Player* player, const std::string& objname) {
    return getScore(objname, player);
}

LIAPI int Scoreboard::getScore(const std::string& objname, Player* player) {
    Objective* obj = Global<Scoreboard>->getObjective(objname);
    if (!obj) {
        throw std::invalid_argument("Objective " + objname + " not found");
    }

    auto& identity = const_cast<ScoreboardId&>(Global<Scoreboard>->getScoreboardId(*player));
    if (!scoreboardIdIsValid(&identity)) {
        throw std::runtime_error("Bad ScoreboardId");
    }

    auto score = obj->getPlayerScore(identity);
    return score.getCount();
}

LIAPI bool Scoreboard::getScore(const std::string& objname, Player* player, int& score) {
    try {
        score = getScore(objname, player);
        return true;
    } catch (...) {}
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
    if (!scoreboardIdIsValid(&identity)) {
        Global<Scoreboard>->createScoreboardId(*player);
    }
    bool a2 = true;
    Global<Scoreboard>->modifyPlayerScore(a2, identity, *obj, value, (PlayerScoreSetFunction)0); // Set
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
    if (!scoreboardIdIsValid(&identity)) {
        Global<Scoreboard>->createScoreboardId(*player);
    }
    bool a2 = true;
    Global<Scoreboard>->modifyPlayerScore(a2, identity, *obj, value, (PlayerScoreSetFunction)1); // Add
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

    bool a1 = true;
    bool& pa = a1;
    auto& identity = const_cast<ScoreboardId&>(Global<Scoreboard>->getScoreboardId(*player));
    if (!scoreboardIdIsValid(&identity)) {
        Global<Scoreboard>->createScoreboardId(*player);
    }
    bool a2 = true;
    Global<Scoreboard>->modifyPlayerScore(a2, identity, *obj, value, (PlayerScoreSetFunction)2); // Reduce
    return true;
}

// For compatibility
LIAPI bool Scoreboard::deleteScore(Player* player, const std::string& objname) {
    return deleteScore(objname, player);
}

LIAPI bool Scoreboard::deleteScore(const std::string& objname, Player* player) {
    return removeFromObjective(objname, player);
}

LIAPI bool Scoreboard::scoreboardIdIsValid(ScoreboardId* id) {
    return id->isValid();
}