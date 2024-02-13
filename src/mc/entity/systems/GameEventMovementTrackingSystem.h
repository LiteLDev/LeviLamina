#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Optional.h"
#include "mc/entity/systems/ITickingSystem.h"

class GameEventMovementTrackingSystem : public ::ITickingSystem {
public:
    // prevent constructor by default
    GameEventMovementTrackingSystem& operator=(GameEventMovementTrackingSystem const&);
    GameEventMovementTrackingSystem(GameEventMovementTrackingSystem const&);
    GameEventMovementTrackingSystem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1GameEventMovementTrackingSystem@@UEAA@XZ
    virtual ~GameEventMovementTrackingSystem() = default;

    // vIndex: 1, symbol: ?registerEvents@ISystem@@UEAAXAEAV?$basic_dispatcher@V?$allocator@X@std@@@entt@@@Z
    virtual void registerEvents(entt::dispatcher&);

    // vIndex: 2, symbol: ?tick@GameEventMovementTrackingSystem@@UEAAXAEAVEntityRegistry@@@Z
    virtual void tick(class EntityRegistry& registry);

    // vIndex: 3, symbol: ?singleTick@ITickingSystem@@UEAAXAEAVEntityRegistry@@AEAVEntityContext@@@Z
    virtual void singleTick(class EntityRegistry& registry, class EntityContext& entity);

    // vIndex: 4, symbol: ?singleTick@ITickingSystem@@UEAAXAEAVEntityRegistry@@AEAVStrictEntityContext@@@Z
    virtual void singleTick(class EntityRegistry& registry, class StrictEntityContext& entity);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_tickGameEventMovementTrackingComponent@GameEventMovementTrackingSystem@@CAXAEAVActorOwnerComponent@@AEAVGameEventMovementTrackingComponent@@V?$Optional@$$CBVRailMovementComponent@@@@@Z
    MCAPI static void
    _tickGameEventMovementTrackingComponent(class ActorOwnerComponent&, class GameEventMovementTrackingComponent&, class Optional<class RailMovementComponent const>);

    // symbol:
    // ?_trackMovement@GameEventMovementTrackingSystem@@CAXAEAVActor@@AEAVGameEventMovementTrackingComponent@@V?$Optional@$$CBVRailMovementComponent@@@@@Z
    MCAPI static void
    _trackMovement(class Actor&, class GameEventMovementTrackingComponent&, class Optional<class RailMovementComponent const>);

    // NOLINTEND
};
