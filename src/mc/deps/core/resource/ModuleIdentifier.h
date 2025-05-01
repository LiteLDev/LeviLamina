#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ModuleIdentifier {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnke37bbb;
    ::ll::UntypedStorage<8, 24> mUnk4c4111;
    // NOLINTEND

public:
    // prevent constructor by default
    ModuleIdentifier& operator=(ModuleIdentifier const&);
    ModuleIdentifier(ModuleIdentifier const&);
    ModuleIdentifier();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ModuleIdentifier();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
