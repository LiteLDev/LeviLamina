#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/ScriptDeferredEventListener.h"

// auto generated forward declare list
// clang-format off
class ScriptDeferredFlushTracker;
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptWorldBeforeEventListener : public ::ScriptDeferredEventListener {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk5540dd;
    ::ll::UntypedStorage<8, 16> mUnkaeec00;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptWorldBeforeEventListener& operator=(ScriptWorldBeforeEventListener const&);
    ScriptWorldBeforeEventListener(ScriptWorldBeforeEventListener const&);
    ScriptWorldBeforeEventListener();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void onRunSystemTick(::ScriptDeferredFlushTracker&) /*override*/;

    // vIndex: 0
    virtual ~ScriptWorldBeforeEventListener() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $onRunSystemTick(::ScriptDeferredFlushTracker&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
