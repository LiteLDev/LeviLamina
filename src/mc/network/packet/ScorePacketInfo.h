#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/ActorRuntimeID.h"
#include "mc/world/scores/IdentityDefinition.h"
#include "mc/world/scores/ScoreboardId.h"


struct ScorePacketInfo {
public:
    ScoreboardId             mScoreboardId;   // this+0x0
    std::string              mObjectiveName;  // this+0x10
    int                      mScoreValue;     // this+0x30
    IdentityDefinition::Type mIdentityType;   // this+0x34
    PlayerScoreboardId       mPlayerId;       // this+0x38
    ActorUniqueID            mEntityId;       // this+0x40
    std::string              mFakePlayerName; // this+0x48

    // NOLINTEND
};
