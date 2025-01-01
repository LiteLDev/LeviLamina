#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"

// auto generated forward declare list
// clang-format off
class InteractPacket;
class InventoryTransactionPacket;
class PlayerAuthInputPacket;
struct MovementPackets;
// clang-format on

struct ServerPlayerMovementComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::std::bitset<3>>                 mServerHasMovementAuthority;
    ::ll::TypedStorage<1, 1, bool>                             mServerHasInventoryAuthority;
    ::ll::TypedStorage<4, 8, ::std::optional<float>>           mAcceptClientPosIfWithinDistanceSq;
    ::ll::TypedStorage<8, 40, ::std::deque<::MovementPackets>> mQueuedUpdates;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool addInteractPacket(::InteractPacket const& packet);

    MCAPI bool addInventoryTransactionPacket(::std::shared_ptr<::InventoryTransactionPacket> packet);

    MCAPI bool addPlayerAuthInputPacket(::PlayerAuthInputPacket&& packet);

    MCAPI void clear();

    MCAPI bool doesServerHaveMovementAuthority() const;

    MCAPI bool empty() const;

    MCAPI void erase(
        ::std::_Deque_const_iterator<::std::_Deque_val<::std::_Deque_simple_types<::MovementPackets>>> first,
        ::std::_Deque_const_iterator<::std::_Deque_val<::std::_Deque_simple_types<::MovementPackets>>> last
    );

    MCAPI ::MovementPackets& front();

    MCAPI ::optional_ref<::MovementPackets> getOrCreate(::std::function<bool(::MovementPackets&)> const& fn);

    MCAPI ::std::deque<::MovementPackets> const& getQueue() const;

    MCAPI bool isFull() const;

    MCAPI void popFront();

    MCAPI uint64 size() const;
    // NOLINTEND
};
