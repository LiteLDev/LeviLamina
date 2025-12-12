#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/ScriptDeferredEventListener.h"

// auto generated forward declare list
// clang-format off
class ScriptDeferredFlushTracker;
// clang-format on

namespace ScriptModuleServerAdmin {

class ScriptAdminBeforeEventsTickListener : public ::ScriptDeferredEventListener {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk6c6f3c;
    ::ll::UntypedStorage<8, 16> mUnk742e8a;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptAdminBeforeEventsTickListener& operator=(ScriptAdminBeforeEventsTickListener const&);
    ScriptAdminBeforeEventsTickListener(ScriptAdminBeforeEventsTickListener const&);
    ScriptAdminBeforeEventsTickListener();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void onRunSystemTick(::ScriptDeferredFlushTracker&) /*override*/;

    virtual ~ScriptAdminBeforeEventsTickListener() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onRunSystemTick(::ScriptDeferredFlushTracker&);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleServerAdmin
