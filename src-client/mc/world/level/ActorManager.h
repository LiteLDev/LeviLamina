#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Connector.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/deps/game_refs/OwnerPtr.h"
#include "mc/platform/Result.h"
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/level/ActorValidationError.h"
#include "mc/world/level/IActorManagerConnector.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorGarbageCollector;
class ActorRuntimeID;
class Dimension;
class EntityContext;
class LevelChunk;
class WeakEntityRef;
struct ActorUniqueID;
struct IActorManagerProxy;
struct IAddActorEntityProxy;
struct ILevelChunkEventManagerConnector;
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
// clang-format on

class ActorManager : public ::IActorManagerConnector {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::OwnerPtr<::EntityContext>>>              mEntities;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::IActorManagerProxy>>> mActorManagerProxy;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::ActorGarbageCollector>>  mActorGarbageCollector;
    ::ll::TypedStorage<
        8,
        128,
        ::Bedrock::PubSub::Publisher<void(::Actor&), ::Bedrock::PubSub::ThreadModel::MultiThreaded, 0>>
        mOnActorEntityAdded;
    ::ll::TypedStorage<
        8,
        128,
        ::Bedrock::PubSub::
            Publisher<void(::Actor&, ::ActorInitializationMethod), ::Bedrock::PubSub::ThreadModel::MultiThreaded, 0>>
        mPostReloadActor;
    ::ll::TypedStorage<
        8,
        128,
        ::Bedrock::PubSub::Publisher<void(::Actor&), ::Bedrock::PubSub::ThreadModel::MultiThreaded, 0>>
                                                               mOnRemoveActorEntityReferences;
    ::ll::TypedStorage<1, 1, bool>                             mIsLevelTearingDown;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnChunkDiscarded;
    // NOLINTEND

public:
    // prevent constructor by default
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

    MCAPI ::Bedrock::Result<::Actor*, ::ActorValidationError>
    addActorEntity(::IAddActorEntityProxy& addActorEntityProxy, ::OwnerPtr<::EntityContext> entity);

    MCAPI ::Bedrock::Result<::Actor*, ::ActorValidationError>
    addActorEntity(::Dimension& dimension, ::OwnerPtr<::EntityContext> entity);

    MCAPI ::Bedrock::Result<::Actor*, ::ActorValidationError> addActorEntity(
        ::Dimension&                dimension,
        ::ActorUniqueID             actorUniqueID,
        ::ActorRuntimeID            actorRuntimeID,
        ::OwnerPtr<::EntityContext> entity
    );

    MCAPI ::Bedrock::Result<::Actor*, ::ActorValidationError>
    addGlobalActorEntity(::IAddActorEntityProxy& addActorEntityProxy, ::OwnerPtr<::EntityContext> entity);

    MCAPI void cleanupActorEntityReferencesGarbageCollect(::OwnerPtr<::EntityContext> entity);

    MCAPI ::OwnerPtr<::EntityContext> deleteActorEntityFromWorldAndTakeEntity(::WeakEntityRef entityRef);

    MCAPI void forceRemoveActorFromWorld(::Actor& actor);

    MCAPI void onChunkDiscarded(::LevelChunk const& levelChunk, ::WeakEntityRef entityRef);

    MCAPI void registerForLevelChunkEvents(::ILevelChunkEventManagerConnector& levelChunkEventManagerConnector);

    MCAPI ::OwnerPtr<::EntityContext> removeActorEntityAndTakeEntity(::WeakEntityRef entityRef);

    MCAPI void removeActorEntityReferencesForDeletion(::Actor& actor);

    MCAPI ::OwnerPtr<::EntityContext> removeEntity(::WeakEntityRef entityRef);

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
    MCNAPI static void** $vftable();
    // NOLINTEND
};
