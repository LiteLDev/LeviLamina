#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/EventListenerDispatcher.h"
#include "mc/world/events/EventResult.h"
#include "mc/world/events/ScriptingEventListener.h"

// auto generated forward declare list
// clang-format off
struct ScriptCommandMessageEvent;
namespace ScriptModuleMinecraft { struct ScriptListener; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptScriptingGlobalEventListener : public ::EventListenerDispatcher<::ScriptingEventListener> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::ScriptModuleMinecraft::ScriptListener>> mListeners;
    // NOLINTEND

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
    MCAPI ::EventResult $onEvent(::ScriptCommandMessageEvent const& scriptCommandMessageEvent);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};

}
