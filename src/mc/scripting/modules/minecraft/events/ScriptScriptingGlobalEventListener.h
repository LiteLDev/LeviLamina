#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/TypedObjectHandle.h"
#include "mc/world/events/EventListenerDispatcher.h"
#include "mc/world/events/EventResult.h"
#include "mc/world/events/ScriptingEventListener.h"

// auto generated forward declare list
// clang-format off
struct ScriptCommandMessageEvent;
namespace ScriptModuleMinecraft { class ScriptSystemAfterEvents; }
namespace ScriptModuleMinecraft { struct ScriptListener; }
namespace Scripting { class WeakLifetimeScope; }
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
#ifdef LL_PLAT_S
    virtual ~ScriptScriptingGlobalEventListener() /*override*/;
#else // LL_PLAT_C
    virtual ~ScriptScriptingGlobalEventListener() /*override*/ = default;
#endif

    virtual ::EventResult onEvent(::ScriptCommandMessageEvent const& scriptCommandMessageEvent) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void registerListener(
        ::Scripting::TypedObjectHandle<::ScriptModuleMinecraft::ScriptSystemAfterEvents> afterEventHandle,
        ::Scripting::WeakLifetimeScope                                                   scope
    );

    MCAPI void unregisterListener(
        ::Scripting::TypedObjectHandle<::ScriptModuleMinecraft::ScriptSystemAfterEvents> afterEventHandle
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
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

} // namespace ScriptModuleMinecraft
