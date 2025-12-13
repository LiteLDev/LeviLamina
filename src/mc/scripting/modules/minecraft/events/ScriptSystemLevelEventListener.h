#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/ScriptDeferredEventListener.h"

// auto generated forward declare list
// clang-format off
class ScriptDeferredFlushTracker;
// clang-format on

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
    virtual void onRunSystemTick(::ScriptDeferredFlushTracker& deferredTracker) /*override*/;

    virtual ~ScriptSystemLevelEventListener() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onRunSystemTick(::ScriptDeferredFlushTracker& deferredTracker);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
