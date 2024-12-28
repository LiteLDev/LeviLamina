#pragma once

#include "mc/_HeaderOutputPredefine.h"

class NetEaseBlockComponentStorage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 104> mUnk5c2c89;
    // NOLINTEND

public:
    // prevent constructor by default
    NetEaseBlockComponentStorage& operator=(NetEaseBlockComponentStorage const&);
    NetEaseBlockComponentStorage(NetEaseBlockComponentStorage const&);
    NetEaseBlockComponentStorage();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~NetEaseBlockComponentStorage();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
