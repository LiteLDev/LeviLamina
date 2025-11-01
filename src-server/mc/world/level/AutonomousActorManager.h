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
    MCNAPI AutonomousActorManager(::gsl::not_null<::StackRefResult<::EntityRegistry>> const& entityRegistry, ::Bedrock::NotNullNonOwnerPtr<::ActorManager> actorManager);

    MCNAPI void _moveActiveAutonomousActorEntityToInactive(::Actor& actor, ::LevelChunk& levelChunk);

    MCNAPI void _onChunkDiscarded(::LevelChunk& levelChunk);

    MCNAPI void _onRemoveActorEntityReferences(::Actor& actor);

    MCNAPI void _saveAllAutonomousActors(::LevelStorage& levelStorage);

    MCNAPI ::Actor* addAutonomousActorEntity(::IAddActorEntityProxy& addActorEntityProxy, ::OwnerPtr<::EntityContext> entity);

    MCNAPI void loadAutonomousActorsFromDisk(::LevelStorage& levelStorage, ::ActorFactory& actorFactory);

    MCNAPI void registerForLevelChunkEvents(::ILevelChunkEventManagerConnector& levelChunkEventManagerConnector);

    MCNAPI void registerLevelStorageManagerListener(::ILevelStorageManagerConnector& levelStorageManagerConnector);

    MCNAPI bool removeActiveAutonomousActorEntity(::WeakEntityRef weakEntityRef);

    MCNAPI ~AutonomousActorManager();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _deduplicateDuplicateActorsFromList(::ListTag& listTag);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::string_view const& AUTONOMOUS_ACTOR_KEY();

    MCNAPI static ::std::string_view const& AUTONOMOUS_ACTOR_LIST_KEY();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::gsl::not_null<::StackRefResult<::EntityRegistry>> const& entityRegistry, ::Bedrock::NotNullNonOwnerPtr<::ActorManager> actorManager);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};
