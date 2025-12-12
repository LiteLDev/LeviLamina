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
class NpcEventCoordinator;
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
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::Bedrock::UniqueOwnerPointer<::ActorEventCoordinator>>>
        mActorEventCoordinator;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::Bedrock::UniqueOwnerPointer<::BlockEventCoordinator>>>
        mBlockEventCoordinator;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::Bedrock::UniqueOwnerPointer<::ItemEventCoordinator>>>
        mItemEventCoordinator;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::Bedrock::UniqueOwnerPointer<::NpcEventCoordinator>>>
        mNpcEventCoordinator;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::Bedrock::UniqueOwnerPointer<::ScriptingEventCoordinator>>>
        mScriptingEventCoordinator;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::Bedrock::UniqueOwnerPointer<::ScriptDeferredEventCoordinator>>>
        mScriptDeferredEventCoordinator;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EventCoordinatorManager();

    virtual ::Bedrock::NonOwnerPointer<::PlayerEventCoordinator> getRemotePlayerEventCoordinator();

    virtual ::Bedrock::NonOwnerPointer<::ClientPlayerEventCoordinator> getClientPlayerEventCoordinator();

    virtual ::Bedrock::NonOwnerPointer<::ServerPlayerEventCoordinator> getServerPlayerEventCoordinator();

    virtual ::Bedrock::NotNullNonOwnerPtr<::LevelEventCoordinator> getLevelEventCoordinator() = 0;

    virtual ::Bedrock::NonOwnerPointer<::ServerLevelEventCoordinator> getServerLevelEventCoordinator();

    virtual ::Bedrock::NonOwnerPointer<::ServerNetworkEventCoordinator> getServerNetworkEventCoordinator();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI EventCoordinatorManager();

    MCNAPI ::Bedrock::NotNullNonOwnerPtr<::ActorEventCoordinator> getActorEventCoordinator();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Bedrock::UniqueOwnerPointer<::EventCoordinatorManager>
    createEventCoordinatorManager(bool isClientSide);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Bedrock::NonOwnerPointer<::PlayerEventCoordinator> $getRemotePlayerEventCoordinator();

    MCNAPI ::Bedrock::NonOwnerPointer<::ClientPlayerEventCoordinator> $getClientPlayerEventCoordinator();

    MCNAPI ::Bedrock::NonOwnerPointer<::ServerPlayerEventCoordinator> $getServerPlayerEventCoordinator();

    MCNAPI ::Bedrock::NonOwnerPointer<::ServerLevelEventCoordinator> $getServerLevelEventCoordinator();

    MCNAPI ::Bedrock::NonOwnerPointer<::ServerNetworkEventCoordinator> $getServerNetworkEventCoordinator();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
