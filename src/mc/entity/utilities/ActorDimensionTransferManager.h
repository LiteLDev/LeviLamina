#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/StackRefResult.h"
#include "mc/world/AutomaticID.h"

class ActorDimensionTransferManager {
public:
    // prevent constructor by default
    ActorDimensionTransferManager& operator=(ActorDimensionTransferManager const&);
    ActorDimensionTransferManager(ActorDimensionTransferManager const&);
    ActorDimensionTransferManager();

public:
    // NOLINTBEGIN
    MCAPI
    ActorDimensionTransferManager(std::unique_ptr<class IActorDimensionTransferer>, gsl::not_null<class StackRefResult<class DimensionManager>> const&, gsl::not_null<class StackRefResult<class PortalForcer>> const&);

    MCAPI void actorChangeDimension(class Actor&, DimensionType, std::optional<class Vec3> const&);

    MCAPI bool canChangeDimension(class Actor const&, DimensionType);

    MCAPI ~ActorDimensionTransferManager();

    // NOLINTEND
};
