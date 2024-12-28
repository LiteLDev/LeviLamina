#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/world/level/EventCoordinatorManager.h"

// auto generated forward declare list
// clang-format off
class ClientPlayerEventCoordinator;
class LevelEventCoordinator;
class PlayerEventCoordinator;
// clang-format on

class ClientEventCoordinatorManager : public ::EventCoordinatorManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkdbb610;
    ::ll::UntypedStorage<8, 16> mUnk7a962b;
    ::ll::UntypedStorage<8, 16> mUnkdeb488;
    // NOLINTEND

public:
    // prevent constructor by default
    ClientEventCoordinatorManager& operator=(ClientEventCoordinatorManager const&);
    ClientEventCoordinatorManager(ClientEventCoordinatorManager const&);

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ClientEventCoordinatorManager() /*override*/;

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
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::Bedrock::NonOwnerPointer<::PlayerEventCoordinator> $getRemotePlayerEventCoordinator();

    MCAPI ::Bedrock::NonOwnerPointer<::ClientPlayerEventCoordinator> $getClientPlayerEventCoordinator();

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::LevelEventCoordinator> $getLevelEventCoordinator();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
