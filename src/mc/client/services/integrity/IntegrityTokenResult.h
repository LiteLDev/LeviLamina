#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct IntegrityTokenResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnk2ec332;
    ::ll::UntypedStorage<8, 32> mUnk1ed878;
    // NOLINTEND

public:
    // prevent constructor by default
    IntegrityTokenResult& operator=(IntegrityTokenResult const&);
    IntegrityTokenResult(IntegrityTokenResult const&);
    IntegrityTokenResult();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~IntegrityTokenResult();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
