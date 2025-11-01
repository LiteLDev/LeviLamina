#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RepositoryLoading {

struct LoadTaskData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkafe948;
    ::ll::UntypedStorage<8, 8> mUnkd79205;
    ::ll::UntypedStorage<8, 8> mUnkbc3885;
    ::ll::UntypedStorage<8, 24> mUnk262e36;
    ::ll::UntypedStorage<8, 8> mUnk543e5c;
    ::ll::UntypedStorage<8, 8> mUnk97bde5;
    ::ll::UntypedStorage<8, 24> mUnk8a892c;
    // NOLINTEND

public:
    // prevent constructor by default
    LoadTaskData& operator=(LoadTaskData const&);
    LoadTaskData(LoadTaskData const&);
    LoadTaskData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~LoadTaskData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
