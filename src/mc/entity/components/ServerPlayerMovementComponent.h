#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"

// auto generated forward declare list
// clang-format off
class InventoryTransactionPacket;
struct IPlayerTickPolicy;
struct MovementPackets;
// clang-format on

struct ServerPlayerMovementComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::std::bitset<3>>                       mServerHasMovementAuthority;
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
    MCAPI ServerPlayerMovementComponent(::ServerPlayerMovementComponent&&);

    MCAPI bool addInventoryTransactionPacket(::std::shared_ptr<::InventoryTransactionPacket> packet);

    MCAPI ::optional_ref<::MovementPackets> getOrCreate(::std::function<bool(::MovementPackets&)> const& fn);

    MCAPI uint64 getReadyToSimulateCount() const;

    MCAPI ::ServerPlayerMovementComponent& operator=(::ServerPlayerMovementComponent&&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ServerPlayerMovementComponent&&);
    // NOLINTEND
};
