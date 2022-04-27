#pragma once
#include <MC/Scoreboard.hpp>
#include "../../Main/.NETGlobal.hpp"
#include "../../Main/ClassTemplate.h"

#include "../../Header/MC/ScoreboardId.hpp"

namespace MC
{
ref class Objective;
ref class ScoreboardId;
ref class Player;
} // namespace MC

namespace MC
{
public
ref class ScoreInfo : ClassTemplate<ScoreInfo, ::ScoreInfo>
{
public:
    __ctor_all(ScoreInfo, ::ScoreInfo);

public:
    property array<char> ^ Filler {
        array<char> ^ get();
        void set(array<char> ^);
    };
    property MC::Objective ^ Objective {
        MC::Objective ^ get();
    };
    property int Count
    {
        int get();
    }
};

public
ref class Scoreboard : ClassTemplate<Scoreboard, ::Scoreboard>
{
public:
    __ctor(Scoreboard, ::Scoreboard);

public:
    ScoreboardId ^ CreateScoreboardId(String ^ a0);
    ScoreboardId ^ CreateScoreboardId(Player ^ player);

    static Objective ^ NewObjective(String ^ objname, String ^ displayName);
    static bool RemoveFromObjective(String ^ objname, String ^ displayName);
    static bool RemoveFromObjective(String ^ objname, Player ^ player);

    static ScoreboardId ^ GetOrCreateScoreboardId(String ^ id);

    static int GetScore(String ^ objname, String ^ id);
    static int SetScore(String ^ objname, String ^ id, int score);
    static int AddScore(String ^ objname, String ^ id, int score);
    static int ReduceScore(String ^ objname, String ^ id, int score);

    static int GetScore(Player ^ player, String ^ key);
    static bool SetScore(Player ^ player, String ^ key, int value);
    static bool AddScore(Player ^ player, String ^ key, int value);
    static bool ReduceScore(Player ^ player, String ^ id, int score);
    static bool DeleteScore(Player ^ player, String ^ objname);

    static bool ScoreboardIdValid(ScoreboardId ^ id);
};

} // namespace MC
