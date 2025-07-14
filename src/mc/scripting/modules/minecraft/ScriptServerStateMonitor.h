#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct ServerScriptManagerEvents;
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptServerStateMonitor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk7f133f;
    ::ll::UntypedStorage<8, 16> mUnkccd0a1;
    ::ll::UntypedStorage<8, 16> mUnke8d94f;
    ::ll::UntypedStorage<8, 16> mUnk5bdafd;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptServerStateMonitor& operator=(ScriptServerStateMonitor const&);
    ScriptServerStateMonitor(ScriptServerStateMonitor const&);
    ScriptServerStateMonitor();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptServerStateMonitor();

    // vIndex: 1
    virtual void _onReload();

    // vIndex: 2
    virtual void _onScriptInitializationComplete();

    // vIndex: 3
    virtual void _onScriptModuleStartupComplete();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ScriptServerStateMonitor(::ServerScriptManagerEvents& events);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ServerScriptManagerEvents& events);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $_onReload();

    MCNAPI void $_onScriptInitializationComplete();

    MCNAPI void $_onScriptModuleStartupComplete();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
