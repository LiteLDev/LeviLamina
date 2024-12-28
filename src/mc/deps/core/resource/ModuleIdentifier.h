#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ModuleIdentifier {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>  mUnke37bbb;
    ::ll::UntypedStorage<8, 112> mUnk4c4111;
    // NOLINTEND

public:
    // prevent constructor by default
    ModuleIdentifier& operator=(ModuleIdentifier const&);
    ModuleIdentifier(ModuleIdentifier const&);
    ModuleIdentifier();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ModuleIdentifier();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
