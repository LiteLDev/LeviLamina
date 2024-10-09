#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"

struct ServerPlayerMovementComponent {
public:
    // prevent constructor by default
    ServerPlayerMovementComponent& operator=(ServerPlayerMovementComponent const&);
    ServerPlayerMovementComponent(ServerPlayerMovementComponent const&);
    ServerPlayerMovementComponent();

public:
    // NOLINTBEGIN
    MCAPI ServerPlayerMovementComponent(struct ServerPlayerMovementComponent&&);

    MCAPI bool addInteractPacket(class InteractPacket const& packet);

    MCAPI bool addInventoryTransactionPacket(std::shared_ptr<class InventoryTransactionPacket> packet);

    MCAPI bool addMoveActorAbsolutePacket(class MoveActorAbsolutePacket const& packet);

    MCAPI bool addPlayerAuthInputPacket(class PlayerAuthInputPacket&& packet);

    MCAPI void clear();

    MCAPI bool empty() const;

    MCAPI struct MovementPackets& front();

    MCAPI class optional_ref<struct MovementPackets> getOrCreate(std::function<bool(struct MovementPackets&)> const& fn
    );

    MCAPI std::deque<struct MovementPackets> const& getQueue() const;

    MCAPI bool isFull() const;

    MCAPI struct ServerPlayerMovementComponent& operator=(struct ServerPlayerMovementComponent&&);

    MCAPI void popFront();

    // NOLINTEND
};
