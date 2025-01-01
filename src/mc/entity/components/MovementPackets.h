#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class InteractPacket;
class InventoryTransactionPacket;
class PlayerAuthInputPacket;
// clang-format on

struct MovementPackets {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 232, ::std::optional<::PlayerAuthInputPacket>>                      mInput;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::InventoryTransactionPacket>>> mTransactions;
    ::ll::TypedStorage<8, 88, ::std::optional<::InteractPacket>>                              mInteraction;
    // NOLINTEND
};
