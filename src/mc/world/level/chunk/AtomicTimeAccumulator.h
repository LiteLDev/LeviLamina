#pragma once

#include "mc/_HeaderOutputPredefine.h"

class AtomicTimeAccumulator {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk7c2fca;
    ::ll::UntypedStorage<8, 8> mUnka93c31;
    ::ll::UntypedStorage<8, 8> mUnkfca143;
    // NOLINTEND

public:
    // prevent constructor by default
    AtomicTimeAccumulator& operator=(AtomicTimeAccumulator const&);
    AtomicTimeAccumulator(AtomicTimeAccumulator const&);
    AtomicTimeAccumulator();
};
