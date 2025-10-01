#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct RepairItemEntry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk689ed9;
    ::ll::UntypedStorage<8, 16> mUnk3d4a96;
    // NOLINTEND

public:
    // prevent constructor by default
    RepairItemEntry(RepairItemEntry const&);
    RepairItemEntry();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::RepairItemEntry& operator=(::RepairItemEntry const&);

    MCAPI ~RepairItemEntry();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
