#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct TickingSystemIterator {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk3cc911;
    ::ll::UntypedStorage<8, 16> mUnke5e641;
    ::ll::UntypedStorage<8, 24> mUnk29e8d6;
    ::ll::UntypedStorage<1, 1>  mUnkf6c4f3;
    // NOLINTEND

public:
    // prevent constructor by default
    TickingSystemIterator& operator=(TickingSystemIterator const&);
    TickingSystemIterator(TickingSystemIterator const&);
    TickingSystemIterator();
};
