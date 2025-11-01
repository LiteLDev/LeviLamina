#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct packed_u32 {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkd3d05d;
    // NOLINTEND

public:
    // prevent constructor by default
    packed_u32& operator=(packed_u32 const&);
    packed_u32(packed_u32 const&);
    packed_u32();

};
