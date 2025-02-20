#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct RepairItemEntry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>  mUnk689ed9;
    ::ll::UntypedStorage<8, 216> mUnk3d4a96;
    // NOLINTEND

public:
    // prevent constructor by default
    RepairItemEntry& operator=(RepairItemEntry const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI RepairItemEntry();

    MCAPI RepairItemEntry(::RepairItemEntry const&);

    MCAPI ~RepairItemEntry();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::RepairItemEntry const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
