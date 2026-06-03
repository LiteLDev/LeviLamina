#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace bx {

struct ThreadInternal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, void*> m_handle;
    ::ll::TypedStorage<4, 4, ulong> m_threadId;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ulong threadFunc(void* _arg);
    // NOLINTEND
};

} // namespace bx
