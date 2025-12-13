#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

class ScriptAfterEventList {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk7862ac;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptAfterEventList& operator=(ScriptAfterEventList const&);
    ScriptAfterEventList(ScriptAfterEventList const&);
    ScriptAfterEventList();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::ScriptModuleMinecraft::ScriptAfterEventList& operator=(::ScriptModuleMinecraft::ScriptAfterEventList&&);

    MCNAPI ~ScriptAfterEventList();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
