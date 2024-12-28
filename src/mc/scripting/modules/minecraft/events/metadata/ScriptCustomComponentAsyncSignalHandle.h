#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

struct ScriptCustomComponentAsyncSignalHandle {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkb7a66b;
    ::ll::UntypedStorage<8, 8> mUnkbb69cb;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptCustomComponentAsyncSignalHandle& operator=(ScriptCustomComponentAsyncSignalHandle const&);
    ScriptCustomComponentAsyncSignalHandle(ScriptCustomComponentAsyncSignalHandle const&);
    ScriptCustomComponentAsyncSignalHandle();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ScriptCustomComponentAsyncSignalHandle();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
