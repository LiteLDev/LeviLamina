#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

class ScriptCustomComponentAfterEventList {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk45a237;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptCustomComponentAfterEventList& operator=(ScriptCustomComponentAfterEventList const&);
    ScriptCustomComponentAfterEventList(ScriptCustomComponentAfterEventList const&);
    ScriptCustomComponentAfterEventList();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ScriptCustomComponentAfterEventList();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
