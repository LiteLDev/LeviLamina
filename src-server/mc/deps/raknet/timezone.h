#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct timezone {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk9994ab;
    ::ll::UntypedStorage<4, 4> mUnke4bc81;
    // NOLINTEND

public:
    // prevent constructor by default
    timezone& operator=(timezone const&);
    timezone(timezone const&);
    timezone();

};
