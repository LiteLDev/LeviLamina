#pragma once

#include "mc/_HeaderOutputPredefine.h"

class NetEaseBlockComponentStorage {
public:
    // prevent constructor by default
    NetEaseBlockComponentStorage& operator=(NetEaseBlockComponentStorage const&);
    NetEaseBlockComponentStorage(NetEaseBlockComponentStorage const&);
    NetEaseBlockComponentStorage();

public:
    // NOLINTBEGIN
    MCAPI ~NetEaseBlockComponentStorage();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};
