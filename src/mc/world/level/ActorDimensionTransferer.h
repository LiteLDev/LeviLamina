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
    ::ll::UntypedStorage<8, 8>  mUnk35f28b;
    ::ll::UntypedStorage<8, 24> mUnkab5255;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorDimensionTransferer& operator=(ActorDimensionTransferer const&);
    ActorDimensionTransferer(ActorDimensionTransferer const&);
    ActorDimensionTransferer();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ActorDimensionTransferer() /*override*/ = default;

    // vIndex: 1
    virtual void setupActorForTransfer(::Actor& actor) /*override*/;

    // vIndex: 2
    virtual ::Vec3 findTargetPositionAndSetPosition(
        ::Actor&                       actor,
        ::DimensionType                toId,
        ::DimensionType                fromId,
        ::IDimension const&            toDimension,
        ::PortalForcer const&          portalForcer,
        ::std::optional<::Vec3> const& actorPosition
    ) /*override*/;

    // vIndex: 3
    virtual void transferActor(::Actor& actor, ::Dimension& toDimension, ::Vec3 const& targetPosition) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ActorDimensionTransferer(
        ::std::unique_ptr<::IActorDimensionTransferProxy> actorDimensionTransferProxy,
        ::Bedrock::NotNullNonOwnerPtr<::ActorManager>     actorManager
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::unique_ptr<::IActorDimensionTransferProxy> actorDimensionTransferProxy,
        ::Bedrock::NotNullNonOwnerPtr<::ActorManager>     actorManager
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $setupActorForTransfer(::Actor& actor);

    MCAPI ::Vec3 $findTargetPositionAndSetPosition(
        ::Actor&                       actor,
        ::DimensionType                toId,
        ::DimensionType                fromId,
        ::IDimension const&            toDimension,
        ::PortalForcer const&          portalForcer,
        ::std::optional<::Vec3> const& actorPosition
    );

    MCAPI void $transferActor(::Actor& actor, ::Dimension& toDimension, ::Vec3 const& targetPosition);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
