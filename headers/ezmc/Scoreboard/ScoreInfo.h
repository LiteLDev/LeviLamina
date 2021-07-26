#pragma once
#include "../Scoreboard/Objective.h"
#include "../Scoreboard/ScoreboardId.h"
#include <loader/Loader.h>
struct ScoreInfo {
    Objective* mObjective;
    bool       mValid;
    int*       mValue;
    auto       getcount() {
        return *(int*)((unsigned long long)(this) + 12);
    }
};