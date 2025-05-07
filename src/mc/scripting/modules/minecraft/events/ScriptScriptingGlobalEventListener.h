#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/EventListenerDispatcher.h"
#include "mc/world/events/EventResult.h"

// auto generated forward declare list
// clang-format off
class ScriptingEventListener;
struct ScriptCommandMessageEvent;
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptScriptingGlobalEventListener : public ::EventListenerDispatcher<::ScriptingEventListener> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk550148;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptScriptingGlobalEventListener& operator=(ScriptScriptingGlobalEventListener const&);
    ScriptScriptingGlobalEventListener(ScriptScriptingGlobalEventListener const&);
    ScriptScriptingGlobalEventListener();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 4
    virtual ::EventResult onEvent(::ScriptCommandMessageEvent const& scriptCommandMessageEvent) /*override*/;

    // vIndex: 0
    virtual ~ScriptScriptingGlobalEventListener() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::EventResult $onEvent(::ScriptCommandMessageEvent const& scriptCommandMessageEvent);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
