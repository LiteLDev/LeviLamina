#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

class ScriptCustomComponentAsyncEventList {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkc4be9d;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptCustomComponentAsyncEventList& operator=(ScriptCustomComponentAsyncEventList const&);
    ScriptCustomComponentAsyncEventList(ScriptCustomComponentAsyncEventList const&);
    ScriptCustomComponentAsyncEventList();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ScriptCustomComponentAsyncEventList();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
