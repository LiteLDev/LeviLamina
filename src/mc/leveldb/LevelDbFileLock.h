#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LevelDbFileLock : public ::leveldb::FileLock {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LevelDbFileLock() /*override*/ = default;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
