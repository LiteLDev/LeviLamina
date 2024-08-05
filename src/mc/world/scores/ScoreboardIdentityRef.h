#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/player/PlayerScoreSetFunction.h"
#include "mc/world/scores/IdentityDefinition.h"

class ScoreboardIdentityRef {
public:
    uint         mObjectiveReferences; // this+0x0
    ScoreboardId mScoreboardId;        // this+0x8

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

    MCAPI static class ScoreboardIdentityRef const Undefined;

    // NOLINTEND
};
