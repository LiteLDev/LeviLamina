#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0>
struct SharePtrRefTraits {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SHAREPTRREFTRAITS
public:
    SharePtrRefTraits& operator=(SharePtrRefTraits const&) = delete;
    SharePtrRefTraits(SharePtrRefTraits const&)            = delete;
    SharePtrRefTraits()                                    = delete;
#endif

public:
};
