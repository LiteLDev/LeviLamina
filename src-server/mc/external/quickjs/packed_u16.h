#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct packed_u16 {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<2, 2> mUnk76ebbf;
    // NOLINTEND

public:
    // prevent constructor by default
    packed_u16& operator=(packed_u16 const&);
    packed_u16(packed_u16 const&);
    packed_u16();
};
