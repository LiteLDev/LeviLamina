#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

struct ScriptAfterEventSignalHandle {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk5ce290;
    ::ll::UntypedStorage<8, 32> mUnk47ed01;
    ::ll::UntypedStorage<8, 8>  mUnk8828e3;
    ::ll::UntypedStorage<8, 32> mUnk5ac403;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptAfterEventSignalHandle& operator=(ScriptAfterEventSignalHandle const&);
    ScriptAfterEventSignalHandle(ScriptAfterEventSignalHandle const&);
    ScriptAfterEventSignalHandle();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ScriptAfterEventSignalHandle();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
