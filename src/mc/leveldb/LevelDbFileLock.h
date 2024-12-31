#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LevelDbFileLock : public ::leveldb::FileLock {
public:
    // prevent constructor by default
    LevelDbFileLock& operator=(LevelDbFileLock const&);
    LevelDbFileLock(LevelDbFileLock const&);
    LevelDbFileLock();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LevelDbFileLock() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
