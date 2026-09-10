#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct ItemStackResponseInfo;
// clang-format on

struct ItemStackResponsePacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::ItemStackResponseInfo>> mResponses;
    // NOLINTEND
};
