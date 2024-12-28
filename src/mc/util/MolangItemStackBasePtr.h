#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MolangItemStackBasePtr {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkd66596;
    // NOLINTEND

public:
    // prevent constructor by default
    MolangItemStackBasePtr& operator=(MolangItemStackBasePtr const&);
    MolangItemStackBasePtr(MolangItemStackBasePtr const&);
    MolangItemStackBasePtr();
};
