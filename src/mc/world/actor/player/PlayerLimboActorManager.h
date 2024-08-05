#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/StackRefResult.h"

class PlayerLimboActorManager {
public:
    // prevent constructor by default
    PlayerLimboActorManager& operator=(PlayerLimboActorManager const&);
    PlayerLimboActorManager(PlayerLimboActorManager const&);
    PlayerLimboActorManager();

public:
    // NOLINTBEGIN
    MCAPI
    PlayerLimboActorManager(class StackRefResult<class LevelStorage> const&, class StackRefResult<class ActorManager> const&, class StackRefResult<class ActorFactory> const&);

    MCAPI void clearOwnedEntityLimboForPlayer(struct ActorUniqueID);

    MCAPI void loadAllOwnedLimboActors();

    MCAPI class Actor*
    processOwnedAgentForPlayer(class CompoundTag&, class IAddActorEntityProxy&, class DimensionHeightRange const&, class Vec3 const&);

    MCAPI void
    processOwnedEntityLimboForPlayer(struct ActorUniqueID, class IAddActorEntityProxy&, class DimensionHeightRange const&, class Vec3 const&);

    MCAPI void saveOwnedLimboActorsForPlayer(struct ActorUniqueID) const;

    MCAPI ~PlayerLimboActorManager();

    MCAPI static std::string getOwnedEntityLimboStorageKeyForPlayer(struct ActorUniqueID);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI class StackRefResult<class ActorFactory> _getValidActorFactory() const;

    MCAPI class StackRefResult<class ActorManager> _getValidActorManager() const;

    MCAPI class StackRefResult<class LevelStorage> _getValidLevelStorage() const;

    // NOLINTEND
};
