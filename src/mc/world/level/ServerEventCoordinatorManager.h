#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/UniqueOwnerPointer.h"
#include "mc/world/level/EventCoordinatorManager.h"

// auto generated forward declare list
// clang-format off
class LevelEventCoordinator;
class ServerLevelEventCoordinator;
class ServerNetworkEventCoordinator;
class ServerPlayerEventCoordinator;
// clang-format on

class ServerEventCoordinatorManager : public ::EventCoordinatorManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::Bedrock::UniqueOwnerPointer<::ServerLevelEventCoordinator>>>
        mServerLevelEventCoordinator;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::Bedrock::UniqueOwnerPointer<::ServerPlayerEventCoordinator>>>
        mServerPlayerEventCoordinator;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::Bedrock::UniqueOwnerPointer<::ServerNetworkEventCoordinator>>>
        mServerNetworkEventCoordinator;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ServerEventCoordinatorManager() /*override*/ = default;

    // vIndex: 3
    virtual ::Bedrock::NonOwnerPointer<::ServerPlayerEventCoordinator> getServerPlayerEventCoordinator() /*override*/;

    // vIndex: 4
    virtual ::Bedrock::NotNullNonOwnerPtr<::LevelEventCoordinator> getLevelEventCoordinator() /*override*/;

    // vIndex: 5
    virtual ::Bedrock::NonOwnerPointer<::ServerLevelEventCoordinator> getServerLevelEventCoordinator() /*override*/;

    // vIndex: 6
    virtual ::Bedrock::NonOwnerPointer<::ServerNetworkEventCoordinator> getServerNetworkEventCoordinator() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ServerEventCoordinatorManager();
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
    MCFOLD ::Bedrock::NonOwnerPointer<::ServerPlayerEventCoordinator> $getServerPlayerEventCoordinator();

    MCFOLD ::Bedrock::NotNullNonOwnerPtr<::LevelEventCoordinator> $getLevelEventCoordinator();

    MCAPI ::Bedrock::NonOwnerPointer<::ServerLevelEventCoordinator> $getServerLevelEventCoordinator();

    MCFOLD ::Bedrock::NonOwnerPointer<::ServerNetworkEventCoordinator> $getServerNetworkEventCoordinator();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
