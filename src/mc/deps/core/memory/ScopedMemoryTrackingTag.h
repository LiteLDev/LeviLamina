#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/memory/MemoryCategory.h"

namespace Memory {

class ScopedMemoryTrackingTag {
public:
// member variables
// NOLINTBEGIN
#ifdef LL_PLAT_C
    ::ll::TypedStorage<4, 4, ::std::thread::id const>  mCreator;
    ::ll::TypedStorage<1, 1, ::Memory::MemoryCategory> mOldCategory;
#endif
    // NOLINTEND
};

} // namespace Memory
