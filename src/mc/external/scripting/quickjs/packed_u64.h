#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct packed_u64 {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkf49642;
    // NOLINTEND

public:
    // prevent constructor by default
    packed_u64& operator=(packed_u64 const&);
    packed_u64(packed_u64 const&);
    packed_u64();
};
