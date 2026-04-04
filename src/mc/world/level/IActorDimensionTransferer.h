#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Dimension;
class IDimension;
class PortalForcer;
class Vec3;
// clang-format on

class IActorDimensionTransferer {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IActorDimensionTransferer() = default;

    virtual void setupActorForTransfer(::Actor& actor) = 0;

    virtual ::Vec3 findTargetPositionAndSetPosition(
        ::Actor&                       actor,
        ::DimensionType                toId,
        ::DimensionType                fromId,
        ::IDimension const&            toDimension,
        ::PortalForcer const&          portalForcer,
        ::std::optional<::Vec3> const& actorPosition
    ) = 0;

    virtual void transferActor(::Actor& actor, ::Dimension& toDimension, ::Vec3 const& targetPosition) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
