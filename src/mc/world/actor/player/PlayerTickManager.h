#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/StackRefResult.h"

class PlayerTickManager {
public:
    // prevent constructor by default
    PlayerTickManager& operator=(PlayerTickManager const&);
    PlayerTickManager(PlayerTickManager const&);
    PlayerTickManager();

public:
    // NOLINTBEGIN
    MCAPI PlayerTickManager(
        gsl::not_null<class StackRefResult<class DimensionManager>> const&,
        gsl::not_null<class StackRefResult<class GameplayUserManager>> const&,
        std::unique_ptr<class IPlayerTickProxy>,
        bool
    );

    MCAPI void processPlayerNetworking(struct Tick const&);

    MCAPI void tick(struct Tick const&);

    MCAPI ~PlayerTickManager();

    // NOLINTEND
};
