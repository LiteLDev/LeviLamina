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

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    // NOLINTEND
};
