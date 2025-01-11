#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/UniqueOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class ActorEventCoordinator;
class BlockEventCoordinator;
class ClientPlayerEventCoordinator;
class ItemEventCoordinator;
class LevelEventCoordinator;
class PlayerEventCoordinator;
class ScriptDeferredEventCoordinator;
class ScriptingEventCoordinator;
class ServerLevelEventCoordinator;
class ServerNetworkEventCoordinator;
class ServerPlayerEventCoordinator;
// clang-format on

class EventCoordinatorManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkf9e1db;
    ::ll::UntypedStorage<8, 16> mUnk425f9d;
    ::ll::UntypedStorage<8, 16> mUnka34e42;
    ::ll::UntypedStorage<8, 16> mUnk284a74;
    ::ll::UntypedStorage<8, 16> mUnkb27f6d;
    ::ll::UntypedStorage<8, 16> mUnkab1af4;
    // NOLINTEND

public:
    // prevent constructor by default
    EventCoordinatorManager& operator=(EventCoordinatorManager const&);
    EventCoordinatorManager(EventCoordinatorManager const&);

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~EventCoordinatorManager();

    // vIndex: 1
    virtual ::Bedrock::NonOwnerPointer<::PlayerEventCoordinator> getRemotePlayerEventCoordinator();

    // vIndex: 2
    virtual ::Bedrock::NonOwnerPointer<::ClientPlayerEventCoordinator> getClientPlayerEventCoordinator();

    // vIndex: 3
    virtual ::Bedrock::NonOwnerPointer<::ServerPlayerEventCoordinator> getServerPlayerEventCoordinator();

    // vIndex: 4
    virtual ::Bedrock::NotNullNonOwnerPtr<::LevelEventCoordinator> getLevelEventCoordinator() = 0;

    // vIndex: 5
    virtual ::Bedrock::NonOwnerPointer<::ServerLevelEventCoordinator> getServerLevelEventCoordinator();

    // vIndex: 6
    virtual ::Bedrock::NonOwnerPointer<::ServerNetworkEventCoordinator> getServerNetworkEventCoordinator();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI EventCoordinatorManager();

    MCFOLD ::Bedrock::NotNullNonOwnerPtr<::ActorEventCoordinator> getActorEventCoordinator();

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::BlockEventCoordinator> getBlockEventCoordinator();

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::ItemEventCoordinator> getItemEventCoordinator();

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::ScriptDeferredEventCoordinator> getScriptDeferredEventCoordinator();

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::ScriptingEventCoordinator> getScriptingEventCoordinator();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Bedrock::UniqueOwnerPointer<::EventCoordinatorManager>
    createEventCoordinatorManager(bool isClientSide);
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
    MCFOLD ::Bedrock::NonOwnerPointer<::PlayerEventCoordinator> $getRemotePlayerEventCoordinator();

    MCFOLD ::Bedrock::NonOwnerPointer<::ClientPlayerEventCoordinator> $getClientPlayerEventCoordinator();

    MCFOLD ::Bedrock::NonOwnerPointer<::ServerPlayerEventCoordinator> $getServerPlayerEventCoordinator();

    MCFOLD ::Bedrock::NonOwnerPointer<::ServerLevelEventCoordinator> $getServerLevelEventCoordinator();

    MCFOLD ::Bedrock::NonOwnerPointer<::ServerNetworkEventCoordinator> $getServerNetworkEventCoordinator();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
