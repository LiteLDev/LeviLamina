#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/events/EventCoordinator.h"

// auto generated forward declare list
// clang-format off
class Actor;
class EntityContext;
class GameRules;
class IActorManagerConnector;
class IGameplayUserManagerConnector;
class LevelEventListener;
class LevelGameplayHandler;
class WorldClock;
// clang-format on

class LevelEventCoordinator : public ::EventCoordinator<::LevelEventListener> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::LevelGameplayHandler>> mLevelGameplayHandler;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>          mGameRuleChangeSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>          mOnRemoveActorEntityReferencesSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>          mPostReloadActorAddedSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>          mOnGameplayUserAddedSubscription;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LevelEventCoordinator() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _onGameplayUserAdded(::EntityContext& entity);

    MCNAPI void _postReloadActorAdded(::Actor& actor, ::ActorInitializationMethod);

    MCNAPI void registerGameRules(::GameRules& gameRules);

    MCNAPI void registerWithActorManagerEvents(::IActorManagerConnector& actorManagerConnector, bool isClientSide);

    MCNAPI void registerWithGameplayUserManagerEvents(::IGameplayUserManagerConnector& gameplayUserManagerConnector);

    MCNAPI void sendLevelRemovedActor(::Actor& actor);

    MCNAPI void sendLevelWeatherChanged(
        ::std::string const& dimension,
        bool                 wasRaining,
        bool                 wasLightning,
        bool                 isRaining,
        bool                 isLightning
    );

    MCNAPI void sendWorldClockTimeModified(::gsl::not_null<::WorldClock*> clock);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
