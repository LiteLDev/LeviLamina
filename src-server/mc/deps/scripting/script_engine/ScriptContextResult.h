#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct ScriptContextResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnk748fa8;
    ::ll::UntypedStorage<8, 40> mUnkb1c759;
    ::ll::UntypedStorage<8, 120> mUnkd0c8cb;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptContextResult& operator=(ScriptContextResult const&);
    ScriptContextResult(ScriptContextResult const&);
    ScriptContextResult();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ScriptContextResult();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
