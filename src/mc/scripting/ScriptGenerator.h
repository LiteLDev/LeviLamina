#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ScriptGenerator {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8>   mUnk89b263;
    ::ll::UntypedStorage<8, 80>  mUnkff82ed;
    ::ll::UntypedStorage<8, 184> mUnked42f3;
    ::ll::UntypedStorage<1, 1>   mUnk6289a7;
    ::ll::UntypedStorage<1, 1>   mUnkbd63ee;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptGenerator();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptGenerator(::ScriptGenerator&&);

    MCAPI ScriptGenerator(::ScriptGenerator const&);

    MCAPI ::ScriptGenerator& operator=(::ScriptGenerator const&);

    MCAPI ~ScriptGenerator();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ScriptGenerator&&);

    MCAPI void* $ctor(::ScriptGenerator const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
