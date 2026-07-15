#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PackLoadInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnka08bbb;
    ::ll::UntypedStorage<8, 72> mUnk7c9f80;
    ::ll::UntypedStorage<1, 1>  mUnk9c7297;
    ::ll::UntypedStorage<1, 1>  mUnk2b2ceb;
    // NOLINTEND

public:
    // prevent constructor by default
    PackLoadInfo& operator=(PackLoadInfo const&);
    PackLoadInfo(PackLoadInfo const&);
    PackLoadInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~PackLoadInfo();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
