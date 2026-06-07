#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct ItemEnchantOption;
// clang-format on

struct PlayerEnchantOptionsPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::ItemEnchantOption>> mOptions;
    // NOLINTEND
};
