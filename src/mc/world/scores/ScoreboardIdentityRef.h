#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/scores/IdentityDefinition.h"
#include "mc/world/scores/PlayerScoreSetFunction.h"

class ScoreboardIdentityRef {
public:
    // prevent constructor by default
    ScoreboardIdentityRef& operator=(ScoreboardIdentityRef const&);
    ScoreboardIdentityRef(ScoreboardIdentityRef const&);
    ScoreboardIdentityRef();

public:
    // NOLINTBEGIN
    MCAPI struct ActorUniqueID const& getEntityId() const;

    MCAPI ::IdentityDefinition::Type getIdentityType() const;

    MCAPI std::string const& getName(std::function<std::string const&(struct ActorUniqueID)> const& playerNameResolver
    ) const;

    MCAPI struct PlayerScoreboardId const& getPlayerId() const;

    MCAPI struct ScoreboardId const& getScoreboardId() const;

    MCAPI bool modifyScoreInObjective(int& result, class Objective& objective, int score, ::PlayerScoreSetFunction fn);

    MCAPI static std::unique_ptr<class CompoundTag> serialize(class ScoreboardIdentityRef const& toSave);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static class ScoreboardIdentityRef const& Undefined();

    // NOLINTEND
};
