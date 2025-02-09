#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/UniqueOwnerPointer.h"
#include "mc/world/level/EventCoordinatorManager.h"

// auto generated forward declare list
// clang-format off
class ClientLevelEventCoordinator;
class ClientPlayerEventCoordinator;
class LevelEventCoordinator;
class PlayerEventCoordinator;
// clang-format on

class ClientEventCoordinatorManager : public ::EventCoordinatorManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::Bedrock::UniqueOwnerPointer<::ClientLevelEventCoordinator>>>
        mClientLevelEventCoordinator;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::Bedrock::UniqueOwnerPointer<::PlayerEventCoordinator>>>
        mRemotePlayerEventCoordinator;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::Bedrock::UniqueOwnerPointer<::ClientPlayerEventCoordinator>>>
        mClientPlayerEventCoordinator;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ClientEventCoordinatorManager() /*override*/ = default;

    // vIndex: 1
    virtual ::Bedrock::NonOwnerPointer<::PlayerEventCoordinator> getRemotePlayerEventCoordinator() /*override*/;

    // vIndex: 2
    virtual ::Bedrock::NonOwnerPointer<::ClientPlayerEventCoordinator> getClientPlayerEventCoordinator() /*override*/;

    // vIndex: 4
    virtual ::Bedrock::NotNullNonOwnerPtr<::LevelEventCoordinator> getLevelEventCoordinator() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ClientEventCoordinatorManager();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::Bedrock::NonOwnerPointer<::PlayerEventCoordinator> $getRemotePlayerEventCoordinator();

    MCFOLD ::Bedrock::NonOwnerPointer<::ClientPlayerEventCoordinator> $getClientPlayerEventCoordinator();

    MCFOLD ::Bedrock::NotNullNonOwnerPtr<::LevelEventCoordinator> $getLevelEventCoordinator();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
