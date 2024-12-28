#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Dimension;
class DimensionManager;
class IActorDimensionTransferer;
class PortalForcer;
class Vec3;
// clang-format on

class ActorDimensionTransferManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk23419d;
    ::ll::UntypedStorage<8, 24> mUnkafcfe2;
    ::ll::UntypedStorage<8, 24> mUnk5f25b0;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorDimensionTransferManager& operator=(ActorDimensionTransferManager const&);
    ActorDimensionTransferManager(ActorDimensionTransferManager const&);
    ActorDimensionTransferManager();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ActorDimensionTransferManager(
        ::std::unique_ptr<::IActorDimensionTransferer>    actorDimensionTransferer,
        ::Bedrock::NotNullNonOwnerPtr<::DimensionManager> dimensionManager,
        ::Bedrock::NotNullNonOwnerPtr<::PortalForcer>     portalForcer
    );

    MCAPI void actorChangeDimension(::Actor& actor, ::DimensionType toId, ::std::optional<::Vec3> const& actorPosition);

    MCAPI bool canChangeDimension(::Actor const& actor, ::DimensionType toId);

    MCAPI ~ActorDimensionTransferManager();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::unique_ptr<::IActorDimensionTransferer>    actorDimensionTransferer,
        ::Bedrock::NotNullNonOwnerPtr<::DimensionManager> dimensionManager,
        ::Bedrock::NotNullNonOwnerPtr<::PortalForcer>     portalForcer
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
