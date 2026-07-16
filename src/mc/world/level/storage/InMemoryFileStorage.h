#pragma once

#include "mc/_HeaderOutputPredefine.h"

class InMemoryFileStorage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkcc7879;
    ::ll::UntypedStorage<8, 80> mUnk54a9a8;
    ::ll::UntypedStorage<8, 24> mUnkc80eb9;
    ::ll::UntypedStorage<8, 24> mUnk7c3254;
    // NOLINTEND

public:
    // prevent constructor by default
    InMemoryFileStorage& operator=(InMemoryFileStorage const&);
    InMemoryFileStorage(InMemoryFileStorage const&);
    InMemoryFileStorage();
};
