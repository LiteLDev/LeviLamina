#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0>
struct SharePtrRefTraits {

public:
    // prevent constructor by default
    SharePtrRefTraits& operator=(SharePtrRefTraits const&) = delete;
    SharePtrRefTraits(SharePtrRefTraits const&)            = delete;
    SharePtrRefTraits()                                    = delete;
};
