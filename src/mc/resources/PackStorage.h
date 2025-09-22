#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PackStorage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkfea536;
    ::ll::UntypedStorage<8, 64> mUnk9cc675;
    // NOLINTEND

public:
    // prevent constructor by default
    PackStorage& operator=(PackStorage const&);
    PackStorage(PackStorage const&);
    PackStorage();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~PackStorage();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
