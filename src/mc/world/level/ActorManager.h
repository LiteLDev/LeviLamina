#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Connector.h"
#include "mc/deps/game_refs/OwnerPtr.h"
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/level/IActorManagerConnector.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorGarbageCollector;
class Dimension;
class EntityContext;
class IActorManagerProxy;
class IAddActorEntityProxy;
class ILevelChunkEventManagerConnector;
class LevelChunk;
class WeakEntityRef;
// clang-format on

class ActorManager : public ::IActorManagerConnector {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>  mUnkdbad9c;
    ::ll::UntypedStorage<8, 8>   mUnk2cdcd8;
    ::ll::UntypedStorage<8, 24>  mUnkea18e6;
    ::ll::UntypedStorage<8, 128> mUnkc3bc23;
    ::ll::UntypedStorage<8, 128> mUnkbab0f8;
    ::ll::UntypedStorage<8, 128> mUnk9c3871;
    ::ll::UntypedStorage<1, 1>   mUnk583438;
    ::ll::UntypedStorage<8, 16>  mUnkfd3a24;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorManager& operator=(ActorManager const&);
    ActorManager(ActorManager const&);
    ActorManager();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 3
    virtual ~ActorManager();

    // vIndex: 0
    virtual ::Bedrock::PubSub::Connector<void(::Actor&)>& getRegisterEntityAddedConnector() /*override*/;

    // vIndex: 1
    virtual ::Bedrock::PubSub::Connector<void(::Actor&, ::ActorInitializationMethod)>&
    getRegisterPostReloadActorConnector() /*override*/;

    // vIndex: 2
    virtual ::Bedrock::PubSub::Connector<void(::Actor&)>&
    getRegisterOnRemoveActorEntityReferenceConnector() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ActorManager(
        ::std::unique_ptr<::IActorManagerProxy>                actorManagerProxy,
        ::Bedrock::NotNullNonOwnerPtr<::ActorGarbageCollector> actorGarbageCollector
    );

    MCAPI void _onChunkDiscarded(::LevelChunk& levelChunk);

    MCAPI ::Actor* addActorEntity(::IAddActorEntityProxy& addActorEntityProxy, ::OwnerPtr<::EntityContext> entity);

    MCAPI ::Actor* addActorEntity(::Dimension& dimension, ::OwnerPtr<::EntityContext> entity);

    MCAPI ::Actor* addGlobalActorEntity(::Dimension& dimension, ::OwnerPtr<::EntityContext> entity);

    MCAPI void cleanupActorEntityReferencesGarbageCollect(::OwnerPtr<::EntityContext> entity);

    MCAPI void cleanupRemovedActorEntityReferencesGarbageCollect(::OwnerPtr<::EntityContext> entity);

    MCAPI ::OwnerPtr<::EntityContext> deleteActorEntityFromWorldAndTakeEntity(::WeakEntityRef entityRef);

    MCAPI void forceRemoveActor(::Actor& actor);

    MCAPI void forceRemoveActorFromWorld(::Actor& actor);

    MCFOLD ::std::vector<::OwnerPtr<::EntityContext>> const& getEntities() const;

    MCAPI void onChunkDiscarded(::WeakEntityRef entityRef);

    MCAPI void registerForLevelChunkEvents(::ILevelChunkEventManagerConnector& levelChunkEventManagerConnector);

    MCAPI ::OwnerPtr<::EntityContext> removeActorEntityAndTakeEntity(::WeakEntityRef entityRef);

    MCAPI ::OwnerPtr<::EntityContext> removeEntity(::WeakEntityRef entityRef);

    MCFOLD void setLevelIsTearingDown();

    MCAPI ::OwnerPtr<::EntityContext> takeEntity(::WeakEntityRef entityRef, ::LevelChunk& levelChunk);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::unique_ptr<::IActorManagerProxy>                actorManagerProxy,
        ::Bedrock::NotNullNonOwnerPtr<::ActorGarbageCollector> actorGarbageCollector
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::Bedrock::PubSub::Connector<void(::Actor&)>& $getRegisterEntityAddedConnector();

    MCFOLD ::Bedrock::PubSub::Connector<void(::Actor&, ::ActorInitializationMethod)>&
    $getRegisterPostReloadActorConnector();

    MCFOLD ::Bedrock::PubSub::Connector<void(::Actor&)>& $getRegisterOnRemoveActorEntityReferenceConnector();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
