#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/StackRefResult.h"

class PlayerLimboActorManager {
public:
    // prevent constructor by default
    PlayerLimboActorManager& operator=(PlayerLimboActorManager const&);
    PlayerLimboActorManager(PlayerLimboActorManager const&);
    PlayerLimboActorManager();

public:
    // NOLINTBEGIN
    MCAPI PlayerLimboActorManager(
        class StackRefResult<class LevelStorage> const& levelStorage,
        class StackRefResult<class ActorManager> const& actorManager,
        class StackRefResult<class ActorFactory> const& actorFactory
    );

    MCAPI void clearOwnedEntityLimboForPlayer(struct ActorUniqueID playerId);

    MCAPI void loadAllOwnedLimboActors();

    MCAPI class Actor* processOwnedAgentForPlayer(
        class CompoundTag&                agentCompoundTag,
        class IAddActorEntityProxy&       addActorEntityProxy,
        class DimensionHeightRange const& heightRange,
        class Vec3 const&                 spawnPosition
    );

    MCAPI void processOwnedEntityLimboForPlayer(
        struct ActorUniqueID              playerId,
        class IAddActorEntityProxy&       addActorEntityProxy,
        class DimensionHeightRange const& heightRange,
        class Vec3 const&                 spawnPosition
    );

    MCAPI void saveOwnedLimboActorsForPlayer(struct ActorUniqueID playerId) const;

    MCAPI ~PlayerLimboActorManager();

    MCAPI static std::string getOwnedEntityLimboStorageKeyForPlayer(struct ActorUniqueID playerId);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI class StackRefResult<class ActorFactory> _getValidActorFactory() const;

    MCAPI class StackRefResult<class ActorManager> _getValidActorManager() const;

    MCAPI class StackRefResult<class LevelStorage> _getValidLevelStorage() const;

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
