#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Memory {

struct MemoryCategoryCounter {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk2466d0;
    ::ll::UntypedStorage<8, 8>  mUnk3fbc8d;
    ::ll::UntypedStorage<8, 24> mUnka6360f;
    // NOLINTEND

public:
    // prevent constructor by default
    MemoryCategoryCounter& operator=(MemoryCategoryCounter const&);
    MemoryCategoryCounter(MemoryCategoryCounter const&);
    MemoryCategoryCounter();
};

} // namespace Memory
