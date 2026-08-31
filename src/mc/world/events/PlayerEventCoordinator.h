#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/gameplayhandlers/CoordinatorResult.h"
#include "mc/world/events/EventCoordinator.h"
#include "mc/world/events/EventRef.h"
#include "mc/world/events/MutablePlayerGameplayEvent.h"

// auto generated forward declare list
// clang-format off
class Player;
class PlayerEventListener;
class PlayerGameplayHandler;
struct ActorUniqueID;
struct DealKineticDamageComponent;
// clang-format on

class PlayerEventCoordinator : public ::EventCoordinator<::PlayerEventListener> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PlayerGameplayHandler>> mPlayerGameplayHandler;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::CoordinatorResult sendEvent(::EventRef<::MutablePlayerGameplayEvent<::CoordinatorResult>> event);

    MCAPI void sendPlayerKineticDamageDealt(
        ::Player&                           player,
        ::ActorUniqueID const&              target,
        ::DealKineticDamageComponent const& dealKinematicDamageComponent
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
