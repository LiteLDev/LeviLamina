#include <ScoreboardAPI.h>
#include "MCApi/Objective.hpp"
#include "MCApi/ObjectiveCriteria.hpp"
#include "MCApi/DisplayObjective.hpp"
#include "MCApi/ScoreboardId.hpp"
#include "MCApi/ServerScoreboard.hpp"
#include "MCApi/ScoreboardIdentityRef.hpp"
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

LIAPI Objective* ScoreboardObj::newObjective(const std::string& objname, const std::string& displayName) {
    std::string criteria = "dummy";
    return ((Scoreboard*)globalScoreBoard)->addObjective(objname, displayName, *globalScoreBoard->getCriteria(criteria));
}

LIAPI bool ScoreboardObj::setDisplayObjective(const std::string& objname, const std::string& slot, int sort) {
    if (checkSlotName(slot)) {
        auto obj = ((Scoreboard*)globalScoreBoard)->getObjective(objname);
        if (!obj)
            return false;

         ((Scoreboard*)globalScoreBoard)->setDisplayObjective(slot, *obj, (ObjectiveSortOrder)sort);
        return true;
    }
    return false;
}

LIAPI Objective* ScoreboardObj::clearDisplayObjective(const std::string& slot) {
    if (checkSlotName(slot))
        return ((Scoreboard*)globalScoreBoard)->clearDisplayObjective(slot);
    return nullptr;
}

LIAPI Objective* ScoreboardObj::getDisplayObjective(const std::string& slot) {
    if (checkSlotName(slot)) {
        auto disp = ((Scoreboard*)globalScoreBoard)->getDisplayObjective(slot);
        if (disp)
            return const_cast<Objective*>(&disp->getObjective());
    }
    return nullptr;
}

LIAPI std::optional<int> ScoreboardObj::addScore(const std::string& objname, const std::string& id, int score) {
    auto obj = ((Scoreboard*)globalScoreBoard)->getObjective(objname);
    if (!obj)
        return std::nullopt;

    auto identity = ((Scoreboard*)globalScoreBoard)->getScoreboardId(id);
    if (!scoreboardIdIsValid(&identity)) {
        ((Scoreboard*)globalScoreBoard)->createScoreboardId(id);
    }
    int a1 = 0;
    auto ref = ((Scoreboard*)globalScoreBoard)->getScoreboardIdentityRef(identity);
    bool res = ref->modifyScoreInObjective(a1, *obj, score, PlayerScoreSetFunction::ADD);
    if (res)
        return a1;
    else
        return std::nullopt;
}

LIAPI std::optional<int> ScoreboardObj::setScore(const std::string& objname, const std::string& id, int score) {
    auto obj = ((Scoreboard*)globalScoreBoard)->getObjective(objname);
    if (!obj)
        return std::nullopt;

    auto identity = ((Scoreboard*)globalScoreBoard)->getScoreboardId(id);
    if (!scoreboardIdIsValid(&identity)) {
        ((Scoreboard*)globalScoreBoard)->createScoreboardId(id);
    }

    int a1 = 0;
    auto ref = ((Scoreboard*)globalScoreBoard)->getScoreboardIdentityRef(identity);
    bool res = ref->modifyScoreInObjective(a1, *obj, score, PlayerScoreSetFunction::SET);
    if (res)
        return a1;
    else
        return std::nullopt;
}

LIAPI std::optional<int> ScoreboardObj::reduceScore(const std::string& objname, const std::string& id, int score) {
    auto obj = ((Scoreboard*)globalScoreBoard)->getObjective(objname);
    if (!obj)
        return std::nullopt;

    auto identity = ((Scoreboard*)globalScoreBoard)->getScoreboardId(id);
    if (!scoreboardIdIsValid(&identity)) {
        ((Scoreboard*)globalScoreBoard)->createScoreboardId(id);
    }

    int a1 = 0;
    auto ref = ((Scoreboard*)globalScoreBoard)->getScoreboardIdentityRef(identity);
    bool res = ref->modifyScoreInObjective(a1, *obj, score, PlayerScoreSetFunction::REMOVE);
    if (res)
        return a1;
    else
        return std::nullopt;
}

LIAPI bool ScoreboardObj::removeFromObjective(const std::string& objname, const std::string& id) {
    auto identity = ((Scoreboard*)globalScoreBoard)->getScoreboardId(id);
    if (!scoreboardIdIsValid(&identity))
        return true;

    auto obj = ((Scoreboard*)globalScoreBoard)->getObjective(objname);
    if (!obj)
        return true;

    return ((Scoreboard*)globalScoreBoard)->getScoreboardIdentityRef(identity)->removeFromObjective(*globalScoreBoard, *obj);
}

LIAPI bool ScoreboardObj::removeFromObjective(const std::string& objname, Player* player) {
    auto identity = globalScoreBoard->getScoreboardId(*player);
    if (!scoreboardIdIsValid(&identity))
        return true;

    auto obj = ((Scoreboard*)globalScoreBoard)->getObjective(objname);
    if (!obj)
        return true;

    return ((Scoreboard*)globalScoreBoard)->getScoreboardIdentityRef(identity)->removeFromObjective(*globalScoreBoard, *obj);
}

LIAPI int ScoreboardObj::getScore(const std::string& objname, const std::string& id) {
    auto identity = globalScoreBoard->getScoreboardId(id);
    if (!scoreboardIdIsValid(&identity))
        return 0;

    auto obj = ((Scoreboard*)globalScoreBoard)->getObjective(objname);
    if (!obj)
        return 0;

    auto scores = ((Scoreboard*)globalScoreBoard)->getIdScores(identity);
    for (auto& it : scores)
        if (it.getObjective() == obj)
            return it.getCount();
    return 0;
}

LIAPI int ScoreboardObj::getScore(Player* player, const std::string& key) {
    Objective* obj = ((Scoreboard*)globalScoreBoard)->getObjective(key);
    if (!obj)
        return 0;

    auto id = ((Scoreboard*)globalScoreBoard)->getScoreboardId(*player);
    if (!scoreboardIdIsValid(&id))
        return 0;

    auto score = obj->getPlayerScore(id);
    return score.getCount();
}

LIAPI bool ScoreboardObj::setScore(Player* player, const std::string& key, int value) {
    Objective* obj = ((Scoreboard*)globalScoreBoard)->getObjective(key);
    if (!obj)
        return false;

    auto id = ((Scoreboard*)globalScoreBoard)->getScoreboardId(*player);
    if (!scoreboardIdIsValid(&id)) {
        ((Scoreboard*)globalScoreBoard)->createScoreboardId(*player);
    }
    bool a2 = true;
    ((Scoreboard*)globalScoreBoard)->modifyPlayerScore(a2, id, *obj, value, (PlayerScoreSetFunction)0); //Set
    return true;
}

LIAPI bool ScoreboardObj::addScore(Player* player, const std::string& key, int value) {
    Objective* obj = ((Scoreboard*)globalScoreBoard)->getObjective(key);
    if (!obj)
        return false;

    auto id = ((Scoreboard*)globalScoreBoard)->getScoreboardId(*player);
    if (!scoreboardIdIsValid(&id)) {
        ((Scoreboard*)globalScoreBoard)->createScoreboardId(*player);
    }
    bool a2 = true;
    ((Scoreboard*)globalScoreBoard)->modifyPlayerScore(a2, id, *obj, value, (PlayerScoreSetFunction)1); //Add
    return true;
}

LIAPI bool ScoreboardObj::reduceScore(Player* player, const std::string& key, int value) {
    Objective* obj = ((Scoreboard*)globalScoreBoard)->getObjective(key);
    if (!obj)
        return false;

    bool a1 = true;
    bool& pa = a1;
    auto id = ((Scoreboard*)globalScoreBoard)->getScoreboardId(*player);
    if (!scoreboardIdIsValid(&id)) {
        ((Scoreboard*)globalScoreBoard)->createScoreboardId(*player);
    }
    bool a2 = true;
    ((Scoreboard*)globalScoreBoard)->modifyPlayerScore(a2, id, *obj, value, (PlayerScoreSetFunction)2); //Reduce
    return true;
}

LIAPI bool ScoreboardObj::deleteScore(Player* player, const std::string& objname) {
    return removeFromObjective(objname, player);
}

LIAPI bool ScoreboardObj::scoreboardIdIsValid(ScoreboardId* id) {
    return SymCall("?isValid@ScoreboardId@@QEBA_NXZ", bool, ScoreboardId*)(id);
}