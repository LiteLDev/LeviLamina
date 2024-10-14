#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

struct ScriptPlayerInteractEvent {
public:
    // prevent constructor by default
    ScriptPlayerInteractEvent(ScriptPlayerInteractEvent const&);
    ScriptPlayerInteractEvent();

public:
    // NOLINTBEGIN
    MCAPI struct ScriptModuleMinecraft::ScriptPlayerInteractEvent&
    operator=(struct ScriptModuleMinecraft::ScriptPlayerInteractEvent&&);

    MCAPI struct ScriptModuleMinecraft::ScriptPlayerInteractEvent&
    operator=(struct ScriptModuleMinecraft::ScriptPlayerInteractEvent const&);

    MCAPI ~ScriptPlayerInteractEvent();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
