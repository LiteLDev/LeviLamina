#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ScriptGenerator {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8>   mUnk89b263;
    ::ll::UntypedStorage<8, 240> mUnkff82ed;
    ::ll::UntypedStorage<8, 184> mUnked42f3;
    ::ll::UntypedStorage<1, 1>   mUnk6289a7;
    ::ll::UntypedStorage<1, 1>   mUnkbd63ee;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptGenerator& operator=(ScriptGenerator const&);
    ScriptGenerator();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptGenerator(::ScriptGenerator&&);

    MCNAPI ScriptGenerator(::ScriptGenerator const&);

    MCNAPI ~ScriptGenerator();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptGenerator&&);

    MCNAPI void* $ctor(::ScriptGenerator const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
