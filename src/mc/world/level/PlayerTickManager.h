#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/StackRefResult.h"

class PlayerTickManager {
public:
    // prevent constructor by default
    PlayerTickManager& operator=(PlayerTickManager const&);
    PlayerTickManager(PlayerTickManager const&);
    PlayerTickManager();

public:
    // NOLINTBEGIN
    MCAPI PlayerTickManager(
        gsl::not_null<class StackRefResult<class DimensionManager>> const&    dimensionManagerStackRef,
        gsl::not_null<class StackRefResult<class GameplayUserManager>> const& gameplayUserManagerStackRef,
        std::unique_ptr<class IPlayerTickProxy>                               playerTickProxy,
        bool                                                                  isClientSide
    );

    MCAPI void processPlayerNetworking(struct Tick const& currentTick);

    MCAPI void tick(struct Tick const& currentTick);

    MCAPI ~PlayerTickManager();

    // NOLINTEND
};
