#pragma once

#include <functional>
#include <string>
#include <unordered_map>

#include "ObjectiveCriteria.h"
#include "ScoreboardId.h"

class Objective {
public:
    std::unordered_map<ScoreboardId, int> smap;
    std::string                           name, name2;
    ObjectiveCriteria*                    Criteria;
    MCAPI struct ScoreInfo                getPlayerScore(struct ScoreboardId const&) const;
};