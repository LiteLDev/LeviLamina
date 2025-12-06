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
class WeakEntityRef;
struct IAddDisplayActorEntityProxy;
struct IDisplayActorManagerProxy;
struct IPlayerDimensionTransferConnector;
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
    MCNAPI DisplayActorManager(
        ::std::unique_ptr<::IDisplayActorManagerProxy>         displayActorManagerProxy,
        ::Bedrock::NotNullNonOwnerPtr<::ActorGarbageCollector> actorGarbageCollector
    );

    MCNAPI void _removeDisplayActorEntity(::OwnerPtr<::EntityContext> entity);

    MCNAPI ::Actor* addDisplayActorEntity(
        ::IAddDisplayActorEntityProxy& addDisplayActorEntityProxy,
        ::OwnerPtr<::EntityContext>    entity
    );

    MCNAPI void
    registerWithPlayerDimensionTransferConnector(::IPlayerDimensionTransferConnector& playerDimensionTransferConnector);

    MCNAPI void removeAllDisplayActorEntities();

    MCNAPI bool removeDisplayActorEntity(::WeakEntityRef weakEntityRef);

    MCNAPI ~DisplayActorManager();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::std::unique_ptr<::IDisplayActorManagerProxy>         displayActorManagerProxy,
        ::Bedrock::NotNullNonOwnerPtr<::ActorGarbageCollector> actorGarbageCollector
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
