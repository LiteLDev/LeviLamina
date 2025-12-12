#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleIdentity {

class ScriptPlayerIdentity {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkddc155;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPlayerIdentity& operator=(ScriptPlayerIdentity const&);
    ScriptPlayerIdentity(ScriptPlayerIdentity const&);
    ScriptPlayerIdentity();
};

} // namespace ScriptModuleIdentity
