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

#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    DisplayActorManager();

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
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
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(
        ::std::unique_ptr<::IDisplayActorManagerProxy>         displayActorManagerProxy,
        ::Bedrock::NotNullNonOwnerPtr<::ActorGarbageCollector> actorGarbageCollector
    );
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
    // NOLINTEND
};
