#pragma once
#include "Global.h"
#include "MCApi/Scoreboard.hpp"
class Objective;

struct ScoreInfo {
    char filler[20];
    Objective* getObjective() {
        return dAccess<Objective*>(this, 0);
    }
    int getCount() {
        return dAccess<int>(this, 12);
    }
};

struct PlayerScore {};
struct ScoreboardObj : public Scoreboard {
    LIAPI Objective* newObjective(const std::string& objname, const std::string& displayName);
    LIAPI bool setDisplayObjective(const std::string& objname, const std::string& slot, int sort);
    LIAPI Objective* clearDisplayObjective(const std::string& slot);
    LIAPI Objective* getDisplayObjective(const std::string& slot);
    LIAPI bool removeFromObjective(const std::string& objname, const std::string& id);
    LIAPI bool removeFromObjective(const std::string& objname, Player* player);

    LIAPI int getScore(const std::string& objname, const std::string& id);
    LIAPI std::optional<int> setScore(const std::string& objname, const std::string& id, int score);
    LIAPI std::optional<int> addScore(const std::string& objname, const std::string& id, int score);
    LIAPI std::optional<int>reduceScore(const std::string& objname, const std::string& id, int score);

    LIAPI int getScore(Player* player, const std::string& key);
    LIAPI bool setScore(Player* player, const std::string& key, int value);
    LIAPI bool addScore(Player* player, const std::string& key, int value);
    LIAPI bool reduceScore(Player* player, const std::string& key, int value);
    LIAPI bool deleteScore(Player* player, const std::string& objname);

    LIAPI bool scoreboardIdIsValid(ScoreboardId* id);
};
ScoreboardObj* globalScoreBoard = nullptr;
THook(ScoreboardObj*, "??0ServerScoreboard@@QEAA@VCommandSoftEnumRegistry@@PEAVLevelStorage@@@Z",
      void* _this, void* a2, void* a3) {
    globalScoreBoard = (ScoreboardObj*)original(_this, a2, a3);
    return globalScoreBoard;
}