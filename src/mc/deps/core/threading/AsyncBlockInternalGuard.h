#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct XAsyncBlock;
// clang-format on

struct AsyncBlockInternalGuard {
public:
    // prevent constructor by default
    AsyncBlockInternalGuard& operator=(AsyncBlockInternalGuard const&);
    AsyncBlockInternalGuard(AsyncBlockInternalGuard const&);
    AsyncBlockInternalGuard();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit AsyncBlockInternalGuard(::XAsyncBlock*);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::XAsyncBlock*);
    // NOLINTEND
};
