#pragma once

#include <cstdint>
#include <string>

#include "../Actor/ActorUniqueID.h"
#include "IdentityDefinition.h"
#include "PlayerScoreboardId.h"
#include "ScoreboardId.h"

struct ScorePacketInfo {
    ScoreboardId             sid;
    std::string              obj_name;
    uint32_t                 score;
    IdentityDefinition::Type type;
    PlayerScoreboardId       pid;
    ActorUniqueID            aid;
    std::string              fake_name;

    inline ScorePacketInfo(ScoreboardId const& sid)
        : sid(sid) {
    }
};

static_assert(offsetof(ScorePacketInfo, fake_name) == 72);