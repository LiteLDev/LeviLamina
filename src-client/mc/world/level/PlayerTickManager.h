#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class DimensionManager;
struct GameplayUserManager;
struct IPlayerTickProxy;
struct Tick;
// clang-format on

class PlayerTickManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::DimensionManager> const>    mDimensionManager;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::GameplayUserManager> const> mGameplayUserManager;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::IPlayerTickProxy>>>      mPlayerTickProxy;
    ::ll::TypedStorage<1, 1, bool const>                                                  mIsClientSide;
    // NOLINTEND

public:
    // prevent constructor by default
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
