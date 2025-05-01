#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

struct ScriptCustomComponentAfterEventSignalHandle {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkf291b1;
    ::ll::UntypedStorage<8, 8> mUnk436e7c;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptCustomComponentAfterEventSignalHandle& operator=(ScriptCustomComponentAfterEventSignalHandle const&);
    ScriptCustomComponentAfterEventSignalHandle(ScriptCustomComponentAfterEventSignalHandle const&);
    ScriptCustomComponentAfterEventSignalHandle();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ScriptCustomComponentAfterEventSignalHandle();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
