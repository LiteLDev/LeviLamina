#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/events/ScriptPlayerInteractEvent.h"

namespace ScriptModuleMinecraft {

struct ScriptPlayerInteractWithBlockEvent : public ::ScriptModuleMinecraft::ScriptPlayerInteractEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkcd11ad;
    ::ll::UntypedStorage<4, 4>  mUnk660964;
    ::ll::UntypedStorage<4, 12> mUnk3b808e;
    ::ll::UntypedStorage<1, 1>  mUnkc8e6d8;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPlayerInteractWithBlockEvent& operator=(ScriptPlayerInteractWithBlockEvent const&);
    ScriptPlayerInteractWithBlockEvent(ScriptPlayerInteractWithBlockEvent const&);
    ScriptPlayerInteractWithBlockEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ScriptPlayerInteractWithBlockEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
