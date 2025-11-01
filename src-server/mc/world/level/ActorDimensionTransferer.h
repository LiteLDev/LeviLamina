#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/world/level/IActorDimensionTransferer.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorManager;
class Dimension;
class IActorDimensionTransferProxy;
class IDimension;
class PortalForcer;
class Vec3;
// clang-format on

class ActorDimensionTransferer : public ::IActorDimensionTransferer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::IActorDimensionTransferProxy>>> mActorDimensionTransferProxy;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::ActorManager> const> mActorManager;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ActorDimensionTransferer() /*override*/ = default;

    // vIndex: 1
    virtual void setupActorForTransfer(::Actor& actor) /*override*/;

    // vIndex: 2
    virtual ::Vec3 findTargetPositionAndSetPosition(::Actor& actor, ::DimensionType toId, ::DimensionType fromId, ::IDimension const& toDimension, ::PortalForcer const& portalForcer, ::std::optional<::Vec3> const& actorPosition) /*override*/;

    // vIndex: 3
    virtual void transferActor(::Actor& actor, ::Dimension& toDimension, ::Vec3 const& targetPosition) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $setupActorForTransfer(::Actor& actor);

    MCAPI ::Vec3 $findTargetPositionAndSetPosition(::Actor& actor, ::DimensionType toId, ::DimensionType fromId, ::IDimension const& toDimension, ::PortalForcer const& portalForcer, ::std::optional<::Vec3> const& actorPosition);

    MCAPI void $transferActor(::Actor& actor, ::Dimension& toDimension, ::Vec3 const& targetPosition);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};
