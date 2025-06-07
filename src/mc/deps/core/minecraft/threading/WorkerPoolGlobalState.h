#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct WorkerPoolGlobalState {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk54ac73;
    ::ll::UntypedStorage<8, 16> mUnk7f4e01;
    ::ll::UntypedStorage<8, 16> mUnk7a8823;
    ::ll::UntypedStorage<8, 16> mUnk85d8bb;
    ::ll::UntypedStorage<8, 16> mUnk4f15a0;
    ::ll::UntypedStorage<8, 16> mUnkf5ffa2;
    ::ll::UntypedStorage<8, 16> mUnk180b5b;
    ::ll::UntypedStorage<8, 16> mUnk2265cb;
    ::ll::UntypedStorage<8, 16> mUnk6e9ba2;
    ::ll::UntypedStorage<8, 16> mUnk3b6e23;
    ::ll::UntypedStorage<8, 16> mUnk206bd2;
    ::ll::UntypedStorage<8, 16> mUnk49f4a5;
    // NOLINTEND

public:
    // prevent constructor by default
    WorkerPoolGlobalState& operator=(WorkerPoolGlobalState const&);
    WorkerPoolGlobalState(WorkerPoolGlobalState const&);
    WorkerPoolGlobalState();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~WorkerPoolGlobalState();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
