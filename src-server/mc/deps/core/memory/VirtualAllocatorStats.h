#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Memory {

class VirtualAllocatorStats {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnke1f9a8;
    ::ll::UntypedStorage<8, 8> mUnk2efecb;
    ::ll::UntypedStorage<8, 8> mUnk54c7b8;
    ::ll::UntypedStorage<8, 8> mUnkffbb7b;
    // NOLINTEND

public:
    // prevent constructor by default
    VirtualAllocatorStats& operator=(VirtualAllocatorStats const&);
    VirtualAllocatorStats(VirtualAllocatorStats const&);
    VirtualAllocatorStats();

};

}
