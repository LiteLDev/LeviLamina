#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Dimension;
class IDimension;
class PortalForcer;
class Vec3;
struct ActorDimensionTransferRequest;
// clang-format on

class IActorDimensionTransferer {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IActorDimensionTransferer() = default;

    virtual void setupActorForTransfer(::Actor& actor) = 0;

    virtual ::Vec3 findTargetPositionAndSetPosition(
        ::Actor&                               actor,
        ::ActorDimensionTransferRequest const& actorDimensionTransferRequest,
        ::IDimension const&                    toDimension,
        ::PortalForcer const&                  portalForcer
    ) = 0;

    virtual void transferActor(::Actor& actor, ::Dimension& toDimension, ::Vec3 const& targetPosition) = 0;
    // NOLINTEND
};
