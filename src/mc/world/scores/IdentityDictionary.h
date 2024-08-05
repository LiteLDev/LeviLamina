#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IdentityDictionary {
public:
    // prevent constructor by default
    IdentityDictionary& operator=(IdentityDictionary const&);
    IdentityDictionary(IdentityDictionary const&);

public:
    // NOLINTBEGIN
    MCAPI IdentityDictionary();

    MCAPI bool clearIdentity(struct ScoreboardId const& scoreboardId);

    MCAPI struct ScoreboardId const&
    convertFakeToReal(struct ScoreboardId const& scoreboardId, struct PlayerScoreboardId const& playerId);

    MCAPI std::vector<struct ScoreboardId> getAllScoreboardIds() const;

    MCAPI struct ScoreboardId const& getScoreboardId(std::string const& fakePlayerName) const;

    MCAPI struct ScoreboardId const& getScoreboardId(struct ActorUniqueID const& euid) const;

    MCAPI struct ScoreboardId const& getScoreboardId(struct PlayerScoreboardId const& playerId) const;

    MCAPI struct ScoreboardId const&
    registerIdentity(struct ScoreboardId const& scoreboardId, std::string const& fakePlayerName);

    MCAPI struct ScoreboardId const&
    registerIdentity(struct ScoreboardId const& scoreboardId, struct ActorUniqueID const& euid);

    MCAPI struct ScoreboardId const&
    registerIdentity(struct ScoreboardId const& scoreboardId, struct PlayerScoreboardId const& playerId);

    MCAPI bool shouldConvertFakePlayer(struct PlayerScoreboardId const& playerId, std::string const& displayName);

    MCAPI ~IdentityDictionary();

    // NOLINTEND
};
