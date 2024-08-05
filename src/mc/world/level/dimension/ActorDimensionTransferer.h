#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/StackRefResult.h"
#include "mc/world/AutomaticID.h"
#include "mc/world/level/dimension/IActorDimensionTransferer.h"

class ActorDimensionTransferer : public ::IActorDimensionTransferer {
public:
    // prevent constructor by default
    ActorDimensionTransferer& operator=(ActorDimensionTransferer const&);
    ActorDimensionTransferer(ActorDimensionTransferer const&);
    ActorDimensionTransferer();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ActorDimensionTransferer() = default;

    // vIndex: 1
    virtual void setupActorForTransfer(class Actor&);

    // vIndex: 2
    virtual class Vec3
    findTargetPositionAndSetPosition(class Actor&, DimensionType, DimensionType, class IDimension const&, class PortalForcer const&, std::optional<class Vec3> const&);

    // vIndex: 3
    virtual void transferActor(class Actor&, class Dimension&, class Vec3 const&, std::optional<class Vec3> const&);

    MCAPI
    ActorDimensionTransferer(std::unique_ptr<class IActorDimensionTransferProxy>, gsl::not_null<class StackRefResult<class ActorManager>> const&);

    // NOLINTEND
};
