#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SpinLockImpl {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnkfb8faa;
    ::ll::UntypedStorage<8, 8> mUnk408b81;
    ::ll::UntypedStorage<8, 8> mUnk4c8f44;
    ::ll::UntypedStorage<4, 4> mUnkf2edc1;
    // NOLINTEND

public:
    // prevent constructor by default
    SpinLockImpl& operator=(SpinLockImpl const&);
    SpinLockImpl(SpinLockImpl const&);
    SpinLockImpl();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void lock();

    MCAPI void unlock();
    // NOLINTEND
};
