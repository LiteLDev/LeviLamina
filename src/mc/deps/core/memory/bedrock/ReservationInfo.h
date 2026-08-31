#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Memory::IVirtualAllocator {

struct ReservationInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, void*>  mPtr;
    ::ll::TypedStorage<8, 8, uint64> mReservedSize;
    // NOLINTEND
};

} // namespace Bedrock::Memory::IVirtualAllocator
