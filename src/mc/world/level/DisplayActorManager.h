#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/deps/game_refs/OwnerPtr.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorGarbageCollector;
class EntityContext;
class IAddDisplayActorEntityProxy;
class IDisplayActorManagerProxy;
class IPlayerDimensionTransferConnector;
class WeakEntityRef;
// clang-format on

class DisplayActorManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::OwnerPtr<::EntityContext>>>                     mDisplayEntities;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::IDisplayActorManagerProxy>>> mDisplayActorManagerProxy;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::ActorGarbageCollector> const>   mActorGarbageCollector;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnChangeDimensionSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    DisplayActorManager();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C DisplayActorManager(
        ::std::unique_ptr<::IDisplayActorManagerProxy>         displayActorManagerProxy,
        ::Bedrock::NotNullNonOwnerPtr<::ActorGarbageCollector> actorGarbageCollector
    );

    MCNAPI_C void _removeDisplayActorEntity(::OwnerPtr<::EntityContext> entity);

    MCNAPI_C ::Actor* addDisplayActorEntity(
        ::IAddDisplayActorEntityProxy& addDisplayActorEntityProxy,
        ::OwnerPtr<::EntityContext>    entity
    );

    MCNAPI_C void
    registerWithPlayerDimensionTransferConnector(::IPlayerDimensionTransferConnector& playerDimensionTransferConnector);

    MCNAPI_C void removeAllDisplayActorEntities();

    MCNAPI_C bool removeDisplayActorEntity(::WeakEntityRef weakEntityRef);

    MCNAPI_C ~DisplayActorManager();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(
        ::std::unique_ptr<::IDisplayActorManagerProxy>         displayActorManagerProxy,
        ::Bedrock::NotNullNonOwnerPtr<::ActorGarbageCollector> actorGarbageCollector
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};
