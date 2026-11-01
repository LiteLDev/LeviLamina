#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/scripting/modules/minecraft/ScriptServerState.h"

// auto generated forward declare list
// clang-format off
struct ServerScriptManagerEvents;
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptServerStateMonitor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::ScriptModuleMinecraft::ScriptServerState> mState;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>           mPreReloadSub;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>           mInitializeCompleteSub;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>           mStartupCompleteSub;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptServerStateMonitor();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptServerStateMonitor();

    virtual void _onReload();

    virtual void _onScriptInitializationComplete();

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
