#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/entity/components/MovementPackets.h"

// auto generated forward declare list
// clang-format off
class InteractPacket;
class InventoryPacketHandler;
class PlayerAuthInputPacket;
struct IPlayerTickPolicy;
// clang-format on

struct ServerPlayerMovementComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::std::bitset<4>>                       mServerHasMovementAuthority;
    ::ll::TypedStorage<1, 1, bool>                                   mServerHasInventoryAuthority;
    ::ll::TypedStorage<4, 8, ::std::optional<float>>                 mAcceptClientPosIfWithinDistanceSq;
    ::ll::TypedStorage<8, 8, uint64>                                 mPlayerTickCredits;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::IPlayerTickPolicy>> mPolicy;
    ::ll::TypedStorage<8, 40, ::std::deque<::MovementPackets>>       mQueuedUpdates;
    // NOLINTEND

public:
    // prevent constructor by default
    ServerPlayerMovementComponent& operator=(ServerPlayerMovementComponent const&);
    ServerPlayerMovementComponent(ServerPlayerMovementComponent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ServerPlayerMovementComponent();

    MCAPI ServerPlayerMovementComponent(::ServerPlayerMovementComponent&&);

    MCAPI explicit ServerPlayerMovementComponent(::std::unique_ptr<::IPlayerTickPolicy> policy);

    MCAPI bool addInteractPacket(::InteractPacket const& packet);

    MCAPI bool addInventoryTransactionPacket(::InventoryPacketHandler packet);

    MCAPI bool addPlayerAuthInputPacket(::PlayerAuthInputPacket&& packet);

    MCAPI void clear();

    MCFOLD bool doesServerHaveMovementAuthority() const;

    MCAPI bool empty() const;

    MCAPI void erase(
        ::std::_Deque_const_iterator<::std::_Deque_val<::std::_Deque_simple_types<::MovementPackets>>> first,
        ::std::_Deque_const_iterator<::std::_Deque_val<::std::_Deque_simple_types<::MovementPackets>>> last
    );

    MCAPI ::MovementPackets& front();

    MCAPI ::optional_ref<::MovementPackets> getOrCreate(::std::function<bool(::MovementPackets&)> const& fn);

    MCFOLD ::std::unique_ptr<::IPlayerTickPolicy> const& getPolicy() const;

    MCFOLD ::std::deque<::MovementPackets> const& getQueue() const;

    MCAPI uint64 getReadyToSimulateCount() const;

    MCAPI bool isFull() const;

    MCAPI ::ServerPlayerMovementComponent& operator=(::ServerPlayerMovementComponent&&);

    MCAPI void popFront();

    MCFOLD uint64 size() const;

    MCAPI ~ServerPlayerMovementComponent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::ServerPlayerMovementComponent&&);

    MCAPI void* $ctor(::std::unique_ptr<::IPlayerTickPolicy> policy);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
