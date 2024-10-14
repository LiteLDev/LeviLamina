#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IdentityDefinition {
public:
    // IdentityDefinition inner types define
    enum class Type {};

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

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    MCAPI static class IdentityDefinition const& Invalid();

    // NOLINTEND
};
