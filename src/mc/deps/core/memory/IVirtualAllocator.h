#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Memory {

struct IVirtualAllocator {
public:
    // IVirtualAllocator inner types declare
    // clang-format off
    struct Flags;
    struct ReservationInfo;
    // clang-format on

    // IVirtualAllocator inner types define
    struct Flags {};

    struct ReservationInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, void*>  mPtr;
        ::ll::TypedStorage<8, 8, uint64> mReservedSize;
        // NOLINTEND
    };
};

} // namespace Bedrock::Memory
