#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/deps/game_refs/OwnerPtr.h"
#include "mc/deps/game_refs/StackRefResult.h"
#include "mc/deps/game_refs/WeakRef.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorFactory;
class ActorManager;
class Dimension;
class EntityContext;
class EntityRegistry;
class IAddActorEntityProxy;
class ILevelChunkEventManagerConnector;
class ILevelStorageManagerConnector;
class LevelChunk;
class LevelStorage;
class WeakEntityRef;
struct ActorUniqueID;
// clang-format on

class AutonomousActorManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::OwnerPtr<::EntityContext>>>          mOwnedInactiveAutonomousActors;
    ::ll::TypedStorage<8, 24, ::std::vector<::WeakEntityRef>>                      mActiveAutonomousActors;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::ActorManager> const> mActorManager;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                     mOnRemoveActorEntityReferences;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnAutonomousActorRemovedSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnChunkLoaded;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnChunkDiscarded;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnSaveGameDataSubscription;
    ::ll::TypedStorage<8, 16, ::WeakRef<::EntityRegistry>>     mEntityRegistry;
    // NOLINTEND

public:
    // prevent constructor by default
    AutonomousActorManager();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI AutonomousActorManager(
        ::gsl::not_null<::StackRefResult<::EntityRegistry>> const& entityRegistry,
        ::Bedrock::NotNullNonOwnerPtr<::ActorManager>              actorManager
    );

    MCNAPI void _onChunkDiscarded(::LevelChunk& levelChunk);

    MCNAPI void _onRemoveActorEntityReferences(::Actor& actor);

    MCNAPI void _saveAllAutonomousActors(::LevelStorage& levelStorage);

    MCNAPI ::Actor*
    addAutonomousActorEntity(::IAddActorEntityProxy& addActorEntityProxy, ::OwnerPtr<::EntityContext> entity);

    MCNAPI ::Actor* addAutonomousActorEntity(::Dimension& dimension, ::OwnerPtr<::EntityContext> entity);

    MCNAPI bool hasOwnedInactiveAutonomousActorWithUniqueID(::ActorUniqueID actorUniqueID) const;

    MCNAPI void loadAutonomousActorsFromDisk(::LevelStorage& levelStorage, ::ActorFactory& actorFactory);

    MCNAPI void registerForLevelChunkEvents(::ILevelChunkEventManagerConnector& levelChunkEventManagerConnector);

    MCNAPI void registerLevelStorageManagerListener(::ILevelStorageManagerConnector& levelStorageManagerConnector);

    MCNAPI ~AutonomousActorManager();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::gsl::not_null<::StackRefResult<::EntityRegistry>> const& entityRegistry,
        ::Bedrock::NotNullNonOwnerPtr<::ActorManager>              actorManager
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
