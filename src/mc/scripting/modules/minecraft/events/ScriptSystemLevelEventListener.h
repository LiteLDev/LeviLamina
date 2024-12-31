#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/ScriptDeferredEventListener.h"

namespace ScriptModuleMinecraft {

class ScriptSystemLevelEventListener : public ::ScriptDeferredEventListener {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk8acb63;
    ::ll::UntypedStorage<8, 16> mUnk2dcb61;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptSystemLevelEventListener& operator=(ScriptSystemLevelEventListener const&);
    ScriptSystemLevelEventListener(ScriptSystemLevelEventListener const&);
    ScriptSystemLevelEventListener();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual bool onRunSystemTick() /*override*/;

    // vIndex: 0
    virtual ~ScriptSystemLevelEventListener() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $onRunSystemTick();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
