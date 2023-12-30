#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleIdentity {

class ScriptPlayerIdentity {
public:
    // prevent constructor by default
    ScriptPlayerIdentity& operator=(ScriptPlayerIdentity const&);
    ScriptPlayerIdentity(ScriptPlayerIdentity const&);
    ScriptPlayerIdentity();
};

}; // namespace ScriptModuleIdentity
