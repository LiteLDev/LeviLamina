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

    // symbol:
    // ?getAllScoreboardIds@IdentityDictionary@@QEBA?AV?$vector@UScoreboardId@@V?$allocator@UScoreboardId@@@std@@@std@@XZ
    MCAPI std::vector<struct ScoreboardId> getAllScoreboardIds() const;

    // symbol:
    // ?getScoreboardId@IdentityDictionary@@QEBAAEBUScoreboardId@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI struct ScoreboardId const& getScoreboardId(std::string const& fakePlayerName) const;

    // symbol: ?getScoreboardId@IdentityDictionary@@QEBAAEBUScoreboardId@@AEBUActorUniqueID@@@Z
    MCAPI struct ScoreboardId const& getScoreboardId(struct ActorUniqueID const& euid) const;

    // symbol: ?getScoreboardId@IdentityDictionary@@QEBAAEBUScoreboardId@@AEBUPlayerScoreboardId@@@Z
    MCAPI struct ScoreboardId const& getScoreboardId(struct PlayerScoreboardId const& playerId) const;

    // symbol:
    // ?registerIdentity@IdentityDictionary@@QEAAAEBUScoreboardId@@AEBU2@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI struct ScoreboardId const&
    registerIdentity(struct ScoreboardId const& scoreboardId, std::string const& fakePlayerName);

    // symbol: ?registerIdentity@IdentityDictionary@@QEAAAEBUScoreboardId@@AEBU2@AEBUActorUniqueID@@@Z
    MCAPI struct ScoreboardId const&
    registerIdentity(struct ScoreboardId const& scoreboardId, struct ActorUniqueID const& euid);

    // symbol: ?registerIdentity@IdentityDictionary@@QEAAAEBUScoreboardId@@AEBU2@AEBUPlayerScoreboardId@@@Z
    MCAPI struct ScoreboardId const&
    registerIdentity(struct ScoreboardId const& scoreboardId, struct PlayerScoreboardId const& playerId);

    // symbol:
    // ?shouldConvertFakePlayer@IdentityDictionary@@QEAA_NAEBUPlayerScoreboardId@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI bool shouldConvertFakePlayer(struct PlayerScoreboardId const& playerId, std::string const& displayName);

    // symbol: ??1IdentityDictionary@@QEAA@XZ
    MCAPI ~IdentityDictionary();

    // NOLINTEND
};
