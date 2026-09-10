#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/cerealize/types/item_stack_request_cereal/SlotInfoData.h"

namespace ItemStackRequestCereal {

struct SwapActionData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::ItemStackRequestCereal::SlotInfoData> mSource;
    ::ll::TypedStorage<8, 40, ::ItemStackRequestCereal::SlotInfoData> mDestination;
    // NOLINTEND
};

} // namespace ItemStackRequestCereal
