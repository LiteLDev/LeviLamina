#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/ActorRuntimeID.h"
#include "mc/world/scores/IdentityDefinition.h"
#include "mc/world/scores/ScoreboardId.h"


struct ScorePacketInfo {

public:
    ScoreboardId             mScoreboardId;
    std::string              mObjectiveName;
    int                      mScoreValue;
    IdentityDefinition::Type mIdentityType;
    PlayerScoreboardId       mPlayerId;
    ActorUniqueID            mEntityId;
    std::string              mFakePlayerName;
    // prevent constructor by default
    ScorePacketInfo& operator=(ScorePacketInfo const&) = delete;
    ScorePacketInfo(ScorePacketInfo const&)            = delete;
    ScorePacketInfo()                                  = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0ScorePacketInfo\@\@QEAA\@$$QEAU0\@\@Z
     */
    MCAPI ScorePacketInfo(struct ScorePacketInfo&&);
    /**
     * @symbol ??1ScorePacketInfo\@\@QEAA\@XZ
     */
    MCAPI ~ScorePacketInfo();
    // NOLINTEND
};
