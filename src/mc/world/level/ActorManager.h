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
    MCNAPI ActorManager(
        ::std::unique_ptr<::IActorManagerProxy>                actorManagerProxy,
        ::Bedrock::NotNullNonOwnerPtr<::ActorGarbageCollector> actorGarbageCollector
    );

    MCNAPI void _onChunkDiscarded(::LevelChunk& levelChunk);

    MCNAPI ::Actor* addActorEntity(::IAddActorEntityProxy& addActorEntityProxy, ::OwnerPtr<::EntityContext> entity);

    MCNAPI ::Actor* addGlobalActorEntity(::Dimension& dimension, ::OwnerPtr<::EntityContext> entity);

    MCNAPI void cleanupActorEntityReferencesGarbageCollect(::OwnerPtr<::EntityContext> entity);

    MCNAPI ::OwnerPtr<::EntityContext> deleteActorEntityFromWorldAndTakeEntity(::WeakEntityRef entityRef);

    MCNAPI void forceRemoveActorFromWorld(::Actor& actor);

    MCNAPI void onChunkDiscarded(::WeakEntityRef entityRef);

    MCNAPI void registerForLevelChunkEvents(::ILevelChunkEventManagerConnector& levelChunkEventManagerConnector);

    MCNAPI ::OwnerPtr<::EntityContext> removeActorEntityAndTakeEntity(::WeakEntityRef entityRef);

    MCNAPI void removeActorEntityReferencesForDeletion(::Actor& actor);

    MCNAPI ::OwnerPtr<::EntityContext> removeEntity(::WeakEntityRef entityRef);

    MCNAPI ::OwnerPtr<::EntityContext> takeEntity(::WeakEntityRef entityRef, ::LevelChunk& levelChunk);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::std::unique_ptr<::IActorManagerProxy>                actorManagerProxy,
        ::Bedrock::NotNullNonOwnerPtr<::ActorGarbageCollector> actorGarbageCollector
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Bedrock::PubSub::Connector<void(::Actor&)>& $getRegisterEntityAddedConnector();

    MCNAPI ::Bedrock::PubSub::Connector<void(::Actor&, ::ActorInitializationMethod)>&
    $getRegisterPostReloadActorConnector();

    MCNAPI ::Bedrock::PubSub::Connector<void(::Actor&)>& $getRegisterOnRemoveActorEntityReferenceConnector();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
