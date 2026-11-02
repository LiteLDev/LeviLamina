#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/gameplayhandlers/CoordinatorResult.h"
#include "mc/world/events/ActorGameplayEvent.h"
#include "mc/world/events/EventCoordinator.h"
#include "mc/world/events/EventRef.h"
#include "mc/world/events/MutableActorGameplayEvent.h"

// auto generated forward declare list
// clang-format off
class ActorEventListener;
class ActorGameplayHandler;
class IActorManagerConnector;
class IGameplayUserManagerConnector;
// clang-format on

class ActorEventCoordinator : public ::EventCoordinator<::ActorEventListener> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ActorGameplayHandler>> mActorGameplayHandler;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>          mOnGameplayUserAddedSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>          mPostReloadActorAddedSubscription;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void registerWithActorManagerEvents(::IActorManagerConnector& actorManagerConnector);

    MCNAPI void registerWithGameplayUserManagerEvents(::IGameplayUserManagerConnector& gameplayUserManagerConnector);

    MCNAPI ::CoordinatorResult sendEvent(::EventRef<::MutableActorGameplayEvent<::CoordinatorResult>> event);

    MCNAPI void sendEvent(::EventRef<::ActorGameplayEvent<void>> const& event);
    // NOLINTEND
};
