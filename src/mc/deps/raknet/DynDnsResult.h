#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct DynDnsResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk2d80a8;
    ::ll::UntypedStorage<8, 8> mUnk245113;
    ::ll::UntypedStorage<4, 4> mUnk17769e;
    // NOLINTEND

public:
    // prevent constructor by default
    DynDnsResult& operator=(DynDnsResult const&);
    DynDnsResult(DynDnsResult const&);
    DynDnsResult();
};
