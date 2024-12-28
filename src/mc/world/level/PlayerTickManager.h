#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class DimensionManager;
class GameplayUserManager;
class IPlayerTickProxy;
struct Tick;
// clang-format on

class PlayerTickManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk5744d2;
    ::ll::UntypedStorage<8, 24> mUnk4a6113;
    ::ll::UntypedStorage<8, 8>  mUnk9e7dd0;
    ::ll::UntypedStorage<1, 1>  mUnk17a4af;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerTickManager& operator=(PlayerTickManager const&);
    PlayerTickManager(PlayerTickManager const&);
    PlayerTickManager();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PlayerTickManager(
        ::Bedrock::NotNullNonOwnerPtr<::DimensionManager>    dimensionManager,
        ::Bedrock::NotNullNonOwnerPtr<::GameplayUserManager> gameplayUserManager,
        ::std::unique_ptr<::IPlayerTickProxy>                playerTickProxy,
        bool                                                 isClientSide
    );

    MCAPI void processPlayerNetworking(::Tick const& currentTick);

    MCAPI void tick(::Tick const& currentTick);

    MCAPI ~PlayerTickManager();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Bedrock::NotNullNonOwnerPtr<::DimensionManager>    dimensionManager,
        ::Bedrock::NotNullNonOwnerPtr<::GameplayUserManager> gameplayUserManager,
        ::std::unique_ptr<::IPlayerTickProxy>                playerTickProxy,
        bool                                                 isClientSide
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
