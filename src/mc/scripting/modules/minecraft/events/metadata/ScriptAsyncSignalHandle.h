#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

struct ScriptAsyncSignalHandle {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk95da9d;
    ::ll::UntypedStorage<8, 32> mUnk85ff2a;
    ::ll::UntypedStorage<8, 8>  mUnk1b9591;
    ::ll::UntypedStorage<8, 32> mUnkb04a26;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptAsyncSignalHandle& operator=(ScriptAsyncSignalHandle const&);
    ScriptAsyncSignalHandle(ScriptAsyncSignalHandle const&);
    ScriptAsyncSignalHandle();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ScriptAsyncSignalHandle();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
