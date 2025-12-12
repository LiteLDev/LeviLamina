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
    MCNAPI RepairItemResult();

    MCNAPI ::RepairItemResult& operator=(::RepairItemResult&&);

    MCNAPI ~RepairItemResult();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
