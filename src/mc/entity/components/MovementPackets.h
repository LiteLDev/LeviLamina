#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/InteractPacket.h"
#include "mc/network/packet/PlayerAuthInputPacket.h"

// auto generated forward declare list
// clang-format off
class InventoryPacketHandler;
// clang-format on

struct MovementPackets {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 232, ::std::optional<::PlayerAuthInputPacket>> mInput;
    ::ll::TypedStorage<8, 24, ::std::vector<::InventoryPacketHandler>>   mTransactions;
    ::ll::TypedStorage<8, 96, ::std::optional<::InteractPacket>>         mInteraction;
    // NOLINTEND
};
