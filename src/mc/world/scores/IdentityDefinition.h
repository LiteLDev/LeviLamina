#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/ActorUniqueID.h"
#include "mc/world/scores/PlayerScoreboardId.h"
#include "mc/world/scores/ScoreboardId.h"


class IdentityDefinition {
public:
    // IdentityDefinition inner types define
    enum class Type : uchar {
        Invalid    = 0x0,
        Player     = 0x1,
        Entity     = 0x2,
        FakePlayer = 0x3,
    };

    ScoreboardId       mScoreboardId;       // this+0x0
    bool               mIsHiddenFakePlayer; // this+0x10
    PlayerScoreboardId mPlayerId;           // this+0x18
    ActorUniqueID      mEntityId;           // this+0x20
    std::string        mPlayerName;         // this+0x28
    Type               mIdentityType;       // this+0x48

public:
    // prevent constructor by default
    IdentityDefinition();

public:
    // NOLINTBEGIN
    MCAPI IdentityDefinition(class IdentityDefinition&& o);

    MCAPI IdentityDefinition(class IdentityDefinition const& o);

    MCAPI struct ActorUniqueID const& getEntityId() const;

    MCAPI std::string const& getFakePlayerName() const;

    MCAPI ::IdentityDefinition::Type getIdentityType() const;

    MCAPI std::string const& getName(std::function<std::string const&(struct ActorUniqueID)> const& playerNameResolver
    ) const;

    MCAPI struct PlayerScoreboardId const& getPlayerId() const;

    MCAPI struct ScoreboardId const& getScoreboardId() const;

    MCAPI bool isEntityType() const;

    MCAPI bool isFakeType() const;

    MCAPI bool isHiddenFakePlayerType() const;

    MCAPI bool isPlayerType() const;

    MCAPI bool isValid() const;

    MCAPI class IdentityDefinition& operator=(class IdentityDefinition&& o);

    MCAPI class IdentityDefinition& operator=(class IdentityDefinition const& o);

    MCAPI ~IdentityDefinition();

    MCAPI static class IdentityDefinition const Invalid;

    // NOLINTEND
};
