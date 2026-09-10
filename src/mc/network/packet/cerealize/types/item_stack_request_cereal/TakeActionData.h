#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/cerealize/types/item_stack_request_cereal/SlotInfoData.h"

namespace ItemStackRequestCereal {

struct TakeActionData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, uchar>                                   mAmount;
    ::ll::TypedStorage<8, 40, ::ItemStackRequestCereal::SlotInfoData> mSource;
    ::ll::TypedStorage<8, 40, ::ItemStackRequestCereal::SlotInfoData> mDestination;
    // NOLINTEND
};

} // namespace ItemStackRequestCereal
