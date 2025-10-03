#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/threading/SpinLockImpl.h"

// auto generated forward declare list
// clang-format off
class SpinLockImpl;
class SubChunkPos;
// clang-format on

class SubChunkInterlocker {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::SpinLockImpl>               mSpinLock;
    ::ll::TypedStorage<8, 24, ::std::vector<::SubChunkPos>> mLocked3x3x3SubChunks;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool tryLock3x3xN(::SubChunkPos const& bottom, int top);

    MCNAPI void unlock3x3xN(::SubChunkPos const& bottom, int top);
    // NOLINTEND
};
