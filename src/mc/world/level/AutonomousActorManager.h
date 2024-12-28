#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/game_refs/OwnerPtr.h"
#include "mc/deps/game_refs/StackRefResult.h"

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
class ListTag;
struct ActorUniqueID;
// clang-format on

class AutonomousActorManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkf06aa6;
    ::ll::UntypedStorage<8, 24> mUnk45dc81;
    ::ll::UntypedStorage<8, 24> mUnkcc0197;
    ::ll::UntypedStorage<8, 16> mUnkb23f8a;
    ::ll::UntypedStorage<8, 16> mUnk76fda5;
    ::ll::UntypedStorage<8, 16> mUnk2b39de;
    ::ll::UntypedStorage<8, 16> mUnka42bc5;
    ::ll::UntypedStorage<8, 16> mUnkaa510c;
    ::ll::UntypedStorage<8, 16> mUnkd0dfa5;
    // NOLINTEND

public:
    // prevent constructor by default
    AutonomousActorManager& operator=(AutonomousActorManager const&);
    AutonomousActorManager(AutonomousActorManager const&);
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

    MCAPI ::Actor* addAutonomousActorEntity(::Dimension& dimension, ::OwnerPtr<::EntityContext> entity);

    MCAPI bool hasOwnedInactiveAutonomousActorWithUniqueID(::ActorUniqueID actorUniqueID) const;

    MCAPI void loadAutonomousActorsFromDisk(::LevelStorage& levelStorage, ::ActorFactory& actorFactory);

    MCAPI void onLevelTearingDown();

    MCAPI void registerForLevelChunkEvents(::ILevelChunkEventManagerConnector& levelChunkEventManagerConnector);

    MCAPI void registerLevelStorageManagerListener(::ILevelStorageManagerConnector& levelStorageManagerConnector);

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
