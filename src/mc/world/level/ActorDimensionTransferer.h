#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/deps/game_refs/StackRefResult.h"
#include "mc/world/level/IActorDimensionTransferer.h"

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
    virtual void setupActorForTransfer(class Actor& actor);

    // vIndex: 2
    virtual class Vec3 findTargetPositionAndSetPosition(
        class Actor&                     actor,
        DimensionType                    toId,
        DimensionType                    fromId,
        class IDimension const&          toDimension,
        class PortalForcer const&        portalForcer,
        std::optional<class Vec3> const& actorPosition
    );

    // vIndex: 3
    virtual void transferActor(
        class Actor&                     actor,
        class Dimension&                 toDimension,
        class Vec3 const&                targetPosition,
        std::optional<class Vec3> const& actorPosition
    );

    MCAPI ActorDimensionTransferer(
        std::unique_ptr<class IActorDimensionTransferProxy>            actorDimensionTransferProxy,
        gsl::not_null<class StackRefResult<class ActorManager>> const& actorManager
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(
        std::unique_ptr<class IActorDimensionTransferProxy>            actorDimensionTransferProxy,
        gsl::not_null<class StackRefResult<class ActorManager>> const& actorManager
    );

    MCAPI class Vec3 findTargetPositionAndSetPosition$(
        class Actor&                     actor,
        DimensionType                    toId,
        DimensionType                    fromId,
        class IDimension const&          toDimension,
        class PortalForcer const&        portalForcer,
        std::optional<class Vec3> const& actorPosition
    );

    MCAPI void setupActorForTransfer$(class Actor& actor);

    MCAPI void transferActor$(
        class Actor&                     actor,
        class Dimension&                 toDimension,
        class Vec3 const&                targetPosition,
        std::optional<class Vec3> const& actorPosition
    );

    // NOLINTEND
};
