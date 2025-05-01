#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ScriptBlockCustomComponentsFinalizer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk871957;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBlockCustomComponentsFinalizer& operator=(ScriptBlockCustomComponentsFinalizer const&);
    ScriptBlockCustomComponentsFinalizer(ScriptBlockCustomComponentsFinalizer const&);
    ScriptBlockCustomComponentsFinalizer();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ScriptBlockCustomComponentsFinalizer();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
