#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct NamedMolangScript {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48>  mUnke67d89;
    ::ll::UntypedStorage<8, 216> mUnkc8da3a;
    // NOLINTEND

public:
    // prevent constructor by default
    NamedMolangScript& operator=(NamedMolangScript const&);
    NamedMolangScript(NamedMolangScript const&);
    NamedMolangScript();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~NamedMolangScript();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
