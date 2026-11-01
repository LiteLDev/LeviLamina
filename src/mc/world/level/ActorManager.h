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
class Dimension;
class EntityContext;
class IActorManagerProxy;
class IAddActorEntityProxy;
class ILevelChunkEventManagerConnector;
class LevelChunk;
class WeakEntityRef;
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
    virtual ~ActorManager() = default;

    virtual ::Bedrock::PubSub::Connector<void(::Actor&)>& getRegisterEntityAddedConnector() /*override*/;

    virtual ::Bedrock::PubSub::Connector<void(::Actor&, ::ActorInitializationMethod)>&
    getRegisterPostReloadActorConnector() /*override*/;

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

    MCNAPI ::Bedrock::Result<::Actor*, ::ActorValidationError>
    addActorEntity(::IAddActorEntityProxy& addActorEntityProxy, ::OwnerPtr<::EntityContext> entity);

    MCNAPI ::Bedrock::Result<::Actor*, ::ActorValidationError>
    addActorEntity(::Dimension& dimension, ::OwnerPtr<::EntityContext> entity);

    MCNAPI ::Bedrock::Result<::Actor*, ::ActorValidationError>
    addGlobalActorEntity(::IAddActorEntityProxy& addActorEntityProxy, ::OwnerPtr<::EntityContext> entity);

    MCNAPI ::Bedrock::Result<::Actor*, ::ActorValidationError>
    addGlobalActorEntity(::Dimension& dimension, ::OwnerPtr<::EntityContext> entity);

    MCNAPI void cleanupActorEntityReferencesGarbageCollect(::OwnerPtr<::EntityContext> entity);

    MCNAPI ::OwnerPtr<::EntityContext> deleteActorEntityFromWorldAndTakeEntity(::WeakEntityRef entityRef);

    MCNAPI void forceRemoveActor(::Actor& actor);

    MCNAPI void forceRemoveActorFromWorld(::Actor& actor);

    MCNAPI void registerForLevelChunkEvents(::ILevelChunkEventManagerConnector& levelChunkEventManagerConnector);

    MCNAPI ::OwnerPtr<::EntityContext> removeActorEntityAndTakeEntity(::WeakEntityRef entityRef);

    MCNAPI ::OwnerPtr<::EntityContext> removeEntity(::WeakEntityRef entityRef);

#ifdef LL_PLAT_C
    MCNAPI void shutdown();
#endif

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
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Bedrock::PubSub::Connector<void(::Actor&)>& $getRegisterEntityAddedConnector();

    MCNAPI ::Bedrock::PubSub::Connector<void(::Actor&, ::ActorInitializationMethod)>&
    $getRegisterPostReloadActorConnector();

    MCNAPI ::Bedrock::PubSub::Connector<void(::Actor&)>& $getRegisterOnRemoveActorEntityReferenceConnector();


    // NOLINTEND
};
