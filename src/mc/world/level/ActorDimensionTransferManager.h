#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/deps/game_refs/StackRefResult.h"

class ActorDimensionTransferManager {
public:
    // prevent constructor by default
    ActorDimensionTransferManager& operator=(ActorDimensionTransferManager const&);
    ActorDimensionTransferManager(ActorDimensionTransferManager const&);
    ActorDimensionTransferManager();

public:
    // NOLINTBEGIN
    MCAPI ActorDimensionTransferManager(
        std::unique_ptr<class IActorDimensionTransferer>                   actorDimensionTransferer,
        gsl::not_null<class StackRefResult<class DimensionManager>> const& dimensionManager,
        gsl::not_null<class StackRefResult<class PortalForcer>> const&     portalForcer
    );

    MCAPI void
    actorChangeDimension(class Actor& actor, DimensionType toId, std::optional<class Vec3> const& actorPosition);

    MCAPI bool canChangeDimension(class Actor const& actor, DimensionType toId);

    MCAPI ~ActorDimensionTransferManager();

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
