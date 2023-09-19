#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct InvalidPacksFilterGroup {
public:
    // prevent constructor by default
    InvalidPacksFilterGroup& operator=(InvalidPacksFilterGroup const&);
    InvalidPacksFilterGroup(InvalidPacksFilterGroup const&);
    InvalidPacksFilterGroup();
};
