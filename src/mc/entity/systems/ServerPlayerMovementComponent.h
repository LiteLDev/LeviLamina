#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/entity/systems/movement/MovementPackets.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"

struct ServerPlayerMovementComponent {
public:
    bool                        mServerHasMovementAuthority;
    std::deque<MovementPackets> mQueuedUpdates;
    // prevent constructor by default
    ServerPlayerMovementComponent& operator=(ServerPlayerMovementComponent const&);
    ServerPlayerMovementComponent(ServerPlayerMovementComponent const&);
    ServerPlayerMovementComponent();

public:
    // NOLINTBEGIN
    // symbol: ??0ServerPlayerMovementComponent@@QEAA@$$QEAU0@@Z
    MCAPI ServerPlayerMovementComponent(struct ServerPlayerMovementComponent&&);

    // symbol: ?addInteractPacket@ServerPlayerMovementComponent@@QEAA_NAEBVInteractPacket@@@Z
    MCAPI bool addInteractPacket(class InteractPacket const&);

    // symbol:
    // ?addInventoryTransactionPacket@ServerPlayerMovementComponent@@QEAA_NV?$shared_ptr@VInventoryTransactionPacket@@@std@@@Z
    MCAPI bool addInventoryTransactionPacket(std::shared_ptr<class InventoryTransactionPacket>);

    // symbol: ?addMoveActorAbsolutePacket@ServerPlayerMovementComponent@@QEAA_NAEBVMoveActorAbsolutePacket@@@Z
    MCAPI bool addMoveActorAbsolutePacket(class MoveActorAbsolutePacket const&);

    // symbol: ?addPlayerAuthInputPacket@ServerPlayerMovementComponent@@QEAA_N$$QEAVPlayerAuthInputPacket@@@Z
    MCAPI bool addPlayerAuthInputPacket(class PlayerAuthInputPacket&&);

    // symbol: ?clear@ServerPlayerMovementComponent@@QEAAXXZ
    MCAPI void clear();

    // symbol: ?front@ServerPlayerMovementComponent@@QEAAAEAUMovementPackets@@XZ
    MCAPI struct MovementPackets& front();

    // symbol:
    // ?getOrCreate@ServerPlayerMovementComponent@@QEAA?AV?$optional_ref@UMovementPackets@@@@AEBV?$function@$$A6A_NAEAUMovementPackets@@@Z@std@@@Z
    MCAPI class optional_ref<struct MovementPackets> getOrCreate(std::function<bool(struct MovementPackets&)> const&);

    // symbol:
    // ?getQueue@ServerPlayerMovementComponent@@QEBAAEBV?$deque@UMovementPackets@@V?$allocator@UMovementPackets@@@std@@@std@@XZ
    MCAPI std::deque<struct MovementPackets> const& getQueue() const;

    // symbol: ?isFull@ServerPlayerMovementComponent@@QEBA_NXZ
    MCAPI bool isFull() const;

    // symbol: ??4ServerPlayerMovementComponent@@QEAAAEAU0@$$QEAU0@@Z
    MCAPI struct ServerPlayerMovementComponent& operator=(struct ServerPlayerMovementComponent&&);

    // symbol: ?popFront@ServerPlayerMovementComponent@@QEAAXXZ
    MCAPI void popFront();

    // NOLINTEND
};
