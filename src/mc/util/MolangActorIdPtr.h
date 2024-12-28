#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MolangActorIdPtr {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkc58388;
    // NOLINTEND

public:
    // prevent constructor by default
    MolangActorIdPtr& operator=(MolangActorIdPtr const&);
    MolangActorIdPtr(MolangActorIdPtr const&);
    MolangActorIdPtr();
};
