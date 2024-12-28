#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/events/ScriptPlayerInteractEvent.h"

namespace ScriptModuleMinecraft {

struct ScriptPlayerInteractWithEntityEvent : public ::ScriptModuleMinecraft::ScriptPlayerInteractEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk86f816;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPlayerInteractWithEntityEvent& operator=(ScriptPlayerInteractWithEntityEvent const&);
    ScriptPlayerInteractWithEntityEvent(ScriptPlayerInteractWithEntityEvent const&);
    ScriptPlayerInteractWithEntityEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ScriptPlayerInteractWithEntityEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
