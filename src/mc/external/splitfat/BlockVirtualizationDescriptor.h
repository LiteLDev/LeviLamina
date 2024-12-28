#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SFAT {

struct BlockVirtualizationDescriptor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 16> mUnkc1ca04;
    ::ll::UntypedStorage<1, 64> mUnk539f15;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockVirtualizationDescriptor& operator=(BlockVirtualizationDescriptor const&);
    BlockVirtualizationDescriptor(BlockVirtualizationDescriptor const&);
    BlockVirtualizationDescriptor();
};

} // namespace SFAT
