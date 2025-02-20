#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class SubChunkPos;
// clang-format on

class SubChunkInterlocker {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk3a1355;
    ::ll::UntypedStorage<8, 24> mUnk209163;
    // NOLINTEND

public:
    // prevent constructor by default
    SubChunkInterlocker& operator=(SubChunkInterlocker const&);
    SubChunkInterlocker(SubChunkInterlocker const&);
    SubChunkInterlocker();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool tryLock3x3xN(::SubChunkPos const& bottom, int top);

    MCAPI void unlock3x3xN(::SubChunkPos const& bottom, int top);
    // NOLINTEND
};
