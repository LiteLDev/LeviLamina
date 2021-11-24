#include <MC/Objective.hpp>
#include <MC/ObjectiveCriteria.hpp>
#include <MC/DisplayObjective.hpp>
#include <MC/ScoreboardId.hpp>
#include <MC/ServerScoreboard.hpp>
#include <MC/ScoreboardIdentityRef.hpp>
#include <MC/Scoreboard.hpp>
#include <MC/Player.hpp>

#define H do_hash
LIAPI bool checkSlotName(const std::string& slot) {
    switch (H(slot.c_str())) {
        case H("list"): break;
        case H("sidebar"): break;
        case H("belowname"): break;
        default:
            return false;
    }
    return true;
}

LIAPI Objective* Scoreboard::newObjective(const std::string& objname, const std::string& displayName) {
    std::string criteria = "dummy";
    return Global<Scoreboard>->addObjective(objname, displayName, *Global<Scoreboard>->getCriteria(criteria));
}

LIAPI bool Scoreboard::setDisplayObjective(const std::string& objname, const std::string& slot, int sort) {
    if (checkSlotName(slot)) {
        auto obj = Global<Scoreboard>->getObjective(objname);
        if (!obj)
            return false;

        Global<Scoreboard>->setDisplayObjective(slot, *obj, sort);
        return true;
    }
    return false;
}
/*
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

LIAPI std::optional<int> Scoreboard::addScore(const std::string& objname, const std::string& id, int score) {
    auto obj = Global<Scoreboard>->getObjective(objname);
    if (!obj)
        return std::nullopt;

    auto identity = Global<Scoreboard>->getScoreboardId(id);
    if (!scoreboardIdIsValid(&identity)) {
        Global<Scoreboard>->createScoreboardId(id);
    }
    int a1 = 0;
    auto ref = Global<Scoreboard>->getScoreboardIdentityRef(identity);
    bool res = ref->modifyScoreInObjective(a1, *obj, score, PlayerScoreSetFunction::ADD);
    if (res)
        return a1;
    else
        return std::nullopt;
}

LIAPI std::optional<int> Scoreboard::setScore(const std::string& objname, const std::string& id, int score) {
    auto obj = Global<Scoreboard>->getObjective(objname);
    if (!obj)
        return std::nullopt;

    auto identity = Global<Scoreboard>->getScoreboardId(id);
    if (!scoreboardIdIsValid(&identity)) {
        Global<Scoreboard>->createScoreboardId(id);
    }

    int a1 = 0;
    auto ref = Global<Scoreboard>->getScoreboardIdentityRef(identity);
    bool res = ref->modifyScoreInObjective(a1, *obj, score, PlayerScoreSetFunction::SET);
    if (res)
        return a1;
    else
        return std::nullopt;
}

LIAPI std::optional<int> Scoreboard::reduceScore(const std::string& objname, const std::string& id, int score) {
    auto obj = Global<Scoreboard>->getObjective(objname);
    if (!obj)
        return std::nullopt;

    auto identity = Global<Scoreboard>->getScoreboardId(id);
    if (!scoreboardIdIsValid(&identity)) {
        Global<Scoreboard>->createScoreboardId(id);
    }

    int a1 = 0;
    auto ref = Global<Scoreboard>->getScoreboardIdentityRef(identity);
    bool res = ref->modifyScoreInObjective(a1, *obj, score, PlayerScoreSetFunction::REMOVE);
    if (res)
        return a1;
    else
        return std::nullopt;
}

LIAPI bool Scoreboard::removeFromObjective(const std::string& objname, const std::string& id) {
    auto identity = Global<Scoreboard>->getScoreboardId(id);
    if (!scoreboardIdIsValid(&identity))
        return true;

    auto obj = Global<Scoreboard>->getObjective(objname);
    if (!obj)
        return true;

    return Global<Scoreboard>->getScoreboardIdentityRef(identity)->removeFromObjective(*Global<Scoreboard>, *obj);
}

LIAPI bool Scoreboard::removeFromObjective(const std::string& objname, Player* player) {
    auto identity = Global<Scoreboard>->getScoreboardId(*player);
    if (!scoreboardIdIsValid(&identity))
        return true;

    auto obj = Global<Scoreboard>->getObjective(objname);
    if (!obj)
        return true;

    return Global<Scoreboard>->getScoreboardIdentityRef(identity)->removeFromObjective(*Global<Scoreboard>, *obj);
}

LIAPI int Scoreboard::getScore(const std::string& objname, const std::string& id) {
    auto identity = Global<Scoreboard>->getScoreboardId(id);
    if (!scoreboardIdIsValid(&identity))
        return 0;

    auto obj = Global<Scoreboard>->getObjective(objname);
    if (!obj)
        return 0;

    auto scores = Global<Scoreboard>->getIdScores(identity);
    for (auto& it : scores)
        if (it.getObjective() == obj)
            return it.getCount();
    return 0;
}

LIAPI int Scoreboard::getScore(Player* player, const std::string& key) {
    Objective* obj = Global<Scoreboard>->getObjective(key);
    if (!obj)
        return 0;

    auto id = Global<Scoreboard>->getScoreboardId(*player);
    if (!scoreboardIdIsValid(&id))
        return 0;

    auto score = obj->getPlayerScore(id);
    return score.getCount();
}

LIAPI bool Scoreboard::setScore(Player* player, const std::string& key, int value) {
    Objective* obj = Global<Scoreboard>->getObjective(key);
    if (!obj)
        return false;

    auto id = Global<Scoreboard>->getScoreboardId(*player);
    if (!scoreboardIdIsValid(&id)) {
        Global<Scoreboard>->createScoreboardId(*player);
    }
    bool a2 = true;
    Global<Scoreboard>->modifyPlayerScore(a2, id, *obj, value, (PlayerScoreSetFunction)0); //Set
    return true;
}

LIAPI bool Scoreboard::addScore(Player* player, const std::string& key, int value) {
    Objective* obj = Global<Scoreboard>->getObjective(key);
    if (!obj)
        return false;

    auto id = Global<Scoreboard>->getScoreboardId(*player);
    if (!scoreboardIdIsValid(&id)) {
        Global<Scoreboard>->createScoreboardId(*player);
    }
    bool a2 = true;
    Global<Scoreboard>->modifyPlayerScore(a2, id, *obj, value, (PlayerScoreSetFunction)1); //Add
    return true;
}

LIAPI bool Scoreboard::reduceScore(Player* player, const std::string& key, int value) {
    Objective* obj = Global<Scoreboard>->getObjective(key);
    if (!obj)
        return false;

    bool a1 = true;
    bool& pa = a1;
    auto id = Global<Scoreboard>->getScoreboardId(*player);
    if (!scoreboardIdIsValid(&id)) {
        Global<Scoreboard>->createScoreboardId(*player);
    }
    bool a2 = true;
    Global<Scoreboard>->modifyPlayerScore(a2, id, *obj, value, (PlayerScoreSetFunction)2); //Reduce
    return true;
}

LIAPI bool Scoreboard::deleteScore(Player* player, const std::string& objname) {
    return removeFromObjective(objname, player);
}

LIAPI bool Scoreboard::scoreboardIdIsValid(ScoreboardId* id) {
    return SymCall("?isValid@ScoreboardId@@QEBA_NXZ", bool, ScoreboardId*)(id);
}