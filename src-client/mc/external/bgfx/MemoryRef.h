#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/bgfx/Memory.h"

namespace bgfx {

struct MemoryRef {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::bgfx::Memory>        mem;
    ::ll::TypedStorage<8, 8, void (*)(void*, void*)> releaseFn;
    ::ll::TypedStorage<8, 8, void*>                  userData;
    // NOLINTEND
};

} // namespace bgfx
