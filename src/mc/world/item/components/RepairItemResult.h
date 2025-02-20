#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct RepairItemResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 152> mUnk4745cd;
    ::ll::UntypedStorage<4, 4>   mUnk757275;
    // NOLINTEND

public:
    // prevent constructor by default
    RepairItemResult& operator=(RepairItemResult const&);
    RepairItemResult(RepairItemResult const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI RepairItemResult();

    MCAPI ::RepairItemResult& operator=(::RepairItemResult&&);

    MCAPI ~RepairItemResult();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
