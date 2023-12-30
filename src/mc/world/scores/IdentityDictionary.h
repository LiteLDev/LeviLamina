#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/scores/IdentityDefinition.h"

class IdentityDictionary {
public:
    std::unordered_map<PlayerScoreboardId, ScoreboardId> mPlayers;
    std::unordered_map<ActorUniqueID, ScoreboardId>      mEntities;
    std::unordered_map<std::string, ScoreboardId>        mFakes;
    std::unordered_map<ScoreboardId, IdentityDefinition> mIdentityDefs;

public:
    // NOLINTBEGIN
    // symbol: ??0IdentityDictionary@@QEAA@XZ
    MCAPI IdentityDictionary();

    // symbol: ?clearIdentity@IdentityDictionary@@QEAA_NAEBUScoreboardId@@@Z
    MCAPI bool clearIdentity(struct ScoreboardId const& scoreboardId);

    // symbol: ?convertFakeToReal@IdentityDictionary@@QEAAAEBUScoreboardId@@AEBU2@AEBUPlayerScoreboardId@@@Z
    MCAPI struct ScoreboardId const&
    convertFakeToReal(struct ScoreboardId const& scoreboardId, struct PlayerScoreboardId const& playerId);

    // symbol: ??1IdentityDictionary@@QEAA@XZ
    MCAPI ~IdentityDictionary();

    // NOLINTEND
};
