#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

struct ScriptPlayerInteractEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk4dc911;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPlayerInteractEvent& operator=(ScriptPlayerInteractEvent const&);
    ScriptPlayerInteractEvent(ScriptPlayerInteractEvent const&);
    ScriptPlayerInteractEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ScriptPlayerInteractEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
