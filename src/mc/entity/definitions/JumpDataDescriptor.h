#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct JumpDataDescriptor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk93936e;
    ::ll::UntypedStorage<4, 4> mUnkf70bba;
    ::ll::UntypedStorage<4, 4> mUnk729330;
    ::ll::UntypedStorage<4, 4> mUnk9a1bda;
    // NOLINTEND

public:
    // prevent constructor by default
    JumpDataDescriptor& operator=(JumpDataDescriptor const&);
    JumpDataDescriptor(JumpDataDescriptor const&);
    JumpDataDescriptor();
};
