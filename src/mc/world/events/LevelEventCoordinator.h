#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/gameplayhandlers/CoordinatorResult.h"
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/events/EventCoordinator.h"
#include "mc/world/events/EventRef.h"
#include "mc/world/events/LevelGameplayEvent.h"
#include "mc/world/events/MutableLevelGameplayEvent.h"

// auto generated forward declare list
// clang-format off
class Actor;
class EntityContext;
class GameRules;
class IActorManagerConnector;
class IGameplayUserManagerConnector;
class Level;
class LevelEventListener;
class LevelGameplayHandler;
namespace Bedrock::PubSub { class Subscription; }
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
    // vIndex: 0
    virtual ~LevelEventCoordinator() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI LevelEventCoordinator();

    MCAPI void _onGameplayUserAdded(::EntityContext& entity);

    MCAPI void _postReloadActorAdded(::Actor& actor, ::ActorInitializationMethod initializationMethod);

    MCFOLD ::LevelGameplayHandler& getLevelGameplayHandler();

    MCAPI void registerGameRules(::GameRules& gameRules);

    MCFOLD void registerLevelGameplayHandler(::std::unique_ptr<::LevelGameplayHandler>&& handler);

    MCAPI void registerWithActorManagerEvents(::IActorManagerConnector& actorManagerConnector, bool isClientSide);

    MCAPI void registerWithGameplayUserManagerEvents(::IGameplayUserManagerConnector& gameplayUserManagerConnector);

    MCAPI ::CoordinatorResult sendEvent(::EventRef<::MutableLevelGameplayEvent<::CoordinatorResult>> event);

    MCAPI void sendEvent(::EventRef<::LevelGameplayEvent<void>> const& event);

    MCAPI void sendLevelInitialized(::Level& level);

    MCAPI void sendLevelRemovedActor(::Actor& actor);

    MCAPI void sendLevelTick(::Level& level);

    MCAPI void sendLevelTickEnd(::Level& level);

    MCAPI void sendLevelTickStart(::Level& level);

    MCAPI void sendLevelWeatherChanged(
        ::std::string const& dimension,
        bool                 wasRaining,
        bool                 wasLightning,
        bool                 isRaining,
        bool                 isLightning
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
