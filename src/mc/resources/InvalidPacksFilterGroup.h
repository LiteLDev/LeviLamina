#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct InvalidPacksFilterGroup {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INVALIDPACKSFILTERGROUP
public:
    InvalidPacksFilterGroup& operator=(InvalidPacksFilterGroup const&) = delete;
    InvalidPacksFilterGroup(InvalidPacksFilterGroup const&)            = delete;
    InvalidPacksFilterGroup()                                          = delete;
#endif

public:
};
