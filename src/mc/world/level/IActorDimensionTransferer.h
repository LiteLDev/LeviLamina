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

    virtual void setupActorForTransfer(::Actor&) = 0;

    virtual ::Vec3 findTargetPositionAndSetPosition(
        ::Actor&,
        ::DimensionType,
        ::DimensionType,
        ::IDimension const&,
        ::PortalForcer const&,
        ::std::optional<::Vec3> const&
    ) = 0;

    virtual void transferActor(::Actor&, ::Dimension&, ::Vec3 const&) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
