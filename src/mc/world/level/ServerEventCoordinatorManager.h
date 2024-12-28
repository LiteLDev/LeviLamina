#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
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
    ::ll::UntypedStorage<8, 16> mUnka3a794;
    ::ll::UntypedStorage<8, 16> mUnkb64a06;
    ::ll::UntypedStorage<8, 16> mUnk65d419;
    // NOLINTEND

public:
    // prevent constructor by default
    ServerEventCoordinatorManager& operator=(ServerEventCoordinatorManager const&);
    ServerEventCoordinatorManager(ServerEventCoordinatorManager const&);

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ServerEventCoordinatorManager() /*override*/;

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
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::Bedrock::NonOwnerPointer<::ServerPlayerEventCoordinator> $getServerPlayerEventCoordinator();

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::LevelEventCoordinator> $getLevelEventCoordinator();

    MCAPI ::Bedrock::NonOwnerPointer<::ServerLevelEventCoordinator> $getServerLevelEventCoordinator();

    MCAPI ::Bedrock::NonOwnerPointer<::ServerNetworkEventCoordinator> $getServerNetworkEventCoordinator();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
