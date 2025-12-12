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
class EntityContext;
class EntityRegistry;
class IAddActorEntityProxy;
class ILevelChunkEventManagerConnector;
class ILevelStorageManagerConnector;
class LevelChunk;
class LevelStorage;
class ListTag;
class WeakEntityRef;
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
    MCAPI AutonomousActorManager(
        ::gsl::not_null<::StackRefResult<::EntityRegistry>> const& entityRegistry,
        ::Bedrock::NotNullNonOwnerPtr<::ActorManager>              actorManager
    );

    MCAPI void _moveActiveAutonomousActorEntityToInactive(::Actor& actor, ::LevelChunk& levelChunk);

    MCAPI void _onChunkDiscarded(::LevelChunk& levelChunk);

    MCAPI void _onRemoveActorEntityReferences(::Actor& actor);

    MCAPI void _saveAllAutonomousActors(::LevelStorage& levelStorage);

    MCAPI ::Actor*
    addAutonomousActorEntity(::IAddActorEntityProxy& addActorEntityProxy, ::OwnerPtr<::EntityContext> entity);

    MCAPI void loadAutonomousActorsFromDisk(::LevelStorage& levelStorage, ::ActorFactory& actorFactory);

    MCAPI void registerForLevelChunkEvents(::ILevelChunkEventManagerConnector& levelChunkEventManagerConnector);

    MCAPI void registerLevelStorageManagerListener(::ILevelStorageManagerConnector& levelStorageManagerConnector);

    MCAPI bool removeActiveAutonomousActorEntity(::WeakEntityRef weakEntityRef);

    MCAPI ~AutonomousActorManager();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void _deduplicateDuplicateActorsFromList(::ListTag& listTag);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& AUTONOMOUS_ACTOR_KEY();

    MCAPI static ::std::string_view const& AUTONOMOUS_ACTOR_LIST_KEY();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::gsl::not_null<::StackRefResult<::EntityRegistry>> const& entityRegistry,
        ::Bedrock::NotNullNonOwnerPtr<::ActorManager>              actorManager
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
