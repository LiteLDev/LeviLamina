#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Memory {

class IVirtualAllocator {
public:
    // IVirtualAllocator inner types declare
    // clang-format off
    struct Flags;
    struct ReservationInfo;
    // clang-format on

    // IVirtualAllocator inner types define
    struct Flags {
    public:
        // member variables
        // NOLINTBEGIN
        uint mUnkb8649a : 1;
        uint mUnk8510aa : 1;
        uint mUnkd8880b : 1;
        // NOLINTEND

    public:
        // prevent constructor by default
        Flags& operator=(Flags const&);
        Flags(Flags const&);
        Flags();
    };

    struct ReservationInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnke61f86;
        ::ll::UntypedStorage<8, 8> mUnk54d9ce;
        // NOLINTEND

    public:
        // prevent constructor by default
        ReservationInfo& operator=(ReservationInfo const&);
        ReservationInfo(ReservationInfo const&);
        ReservationInfo();
    };
};

} // namespace Bedrock::Memory
