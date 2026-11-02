#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class Actor;
class DimensionManager;
class IActorDimensionTransferer;
class PortalForcer;
struct ActorDimensionTransferRequest;
struct DimensionType;
// clang-format on

class ActorDimensionTransferManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::IActorDimensionTransferer>>> mActorDimensionTransferer;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::DimensionManager> const>        mDimensionManager;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::PortalForcer> const>            mPortalForcer;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorDimensionTransferManager();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ActorDimensionTransferManager(
        ::std::unique_ptr<::IActorDimensionTransferer>    actorDimensionTransferer,
        ::Bedrock::NotNullNonOwnerPtr<::DimensionManager> dimensionManager,
        ::Bedrock::NotNullNonOwnerPtr<::PortalForcer>     portalForcer
    );

    MCAPI void
    actorChangeDimension(::Actor& actor, ::ActorDimensionTransferRequest const& actorDimensionTransferRequest);

    MCAPI bool canChangeDimension(::Actor const& actor, ::DimensionType toId);

    MCNAPI ~ActorDimensionTransferManager();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::std::unique_ptr<::IActorDimensionTransferer>    actorDimensionTransferer,
        ::Bedrock::NotNullNonOwnerPtr<::DimensionManager> dimensionManager,
        ::Bedrock::NotNullNonOwnerPtr<::PortalForcer>     portalForcer
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
