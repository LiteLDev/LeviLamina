#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/world/level/IActorDimensionTransferProxy.h"
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
struct ActorDimensionTransferRequest;
// clang-format on

class ActorDimensionTransferer : public ::IActorDimensionTransferer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::IActorDimensionTransferProxy>>>
                                                                                   mActorDimensionTransferProxy;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::ActorManager> const> mActorManager;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorDimensionTransferer();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ActorDimensionTransferer() /*override*/ = default;

    virtual void setupActorForTransfer(::Actor& actor) /*override*/;

    virtual ::Vec3 findTargetPositionAndSetPosition(
        ::Actor&                               actor,
        ::ActorDimensionTransferRequest const& actorDimensionTransferRequest,
        ::IDimension const&                    toDimension,
        ::PortalForcer const&                  portalForcer
    ) /*override*/;

    virtual void transferActor(::Actor& actor, ::Dimension& toDimension, ::Vec3 const& targetPosition) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ActorDimensionTransferer(
        ::std::unique_ptr<::IActorDimensionTransferProxy> actorDimensionTransferProxy,
        ::Bedrock::NotNullNonOwnerPtr<::ActorManager>     actorManager
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::std::unique_ptr<::IActorDimensionTransferProxy> actorDimensionTransferProxy,
        ::Bedrock::NotNullNonOwnerPtr<::ActorManager>     actorManager
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $setupActorForTransfer(::Actor& actor);

    MCNAPI ::Vec3 $findTargetPositionAndSetPosition(
        ::Actor&                               actor,
        ::ActorDimensionTransferRequest const& actorDimensionTransferRequest,
        ::IDimension const&                    toDimension,
        ::PortalForcer const&                  portalForcer
    );

    MCNAPI void $transferActor(::Actor& actor, ::Dimension& toDimension, ::Vec3 const& targetPosition);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
