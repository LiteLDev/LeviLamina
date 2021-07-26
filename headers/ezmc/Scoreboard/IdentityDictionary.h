#pragma once

#include <string>
#include <unordered_map>

#include "../Actor/ActorUniqueID.h"
#include "../dll.h"
#include "PlayerScoreboardId.h"
#include "ScoreboardId.h"

class IdentityDictionary {
public:
    std::unordered_map<PlayerScoreboardId, ScoreboardId> pmap;
    std::unordered_map<ActorUniqueID, ScoreboardId>      amap;
    std::unordered_map<std::string, ScoreboardId>        fmap;
    std::unordered_map<ScoreboardId, IdentityDefinition> dmap;
};